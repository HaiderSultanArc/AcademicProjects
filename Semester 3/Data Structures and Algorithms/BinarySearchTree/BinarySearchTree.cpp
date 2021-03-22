#include "BinarySearchTree.h"
#include <iostream>
#include <deque>

BinarySearchTree::BinarySearchTree() {
    this->root = nullptr;
}

Leaf* BinarySearchTree::createNewLeaf(int inputData) {
    auto* newLeaf = new Leaf();
    newLeaf->data = inputData;
    return newLeaf;
}

[[maybe_unused]] BinarySearchTree::BinarySearchTree(int inputData) {
    this->root = BinarySearchTree::createNewLeaf(inputData);
}

void BinarySearchTree::insertData(Leaf* &leaf, int inputData) {
    if (leaf == nullptr) {
        leaf = BinarySearchTree::createNewLeaf(inputData);
        return;
    }

    if (inputData <= leaf->data) {
        insertData(leaf->leftLeaf, inputData);
    }
    else {
        insertData(leaf->rightLeaf, inputData);
    }
}

void BinarySearchTree::insertData(int inputData) {
    this->insertData(this->root, inputData);
}

Leaf* BinarySearchTree::searchData(Leaf* leaf, int searchData) {
    if (leaf == nullptr) {
        return nullptr;
    }
    else if (leaf->data == searchData) {
        return leaf;
    }
    else if (searchData < leaf->data) {
        return this->searchData(leaf->leftLeaf, searchData);
    }
    else {
        return this->searchData(leaf->rightLeaf, searchData);
    }
}


Leaf* BinarySearchTree::searchData(int searchData) {
    return this->searchData(this->root, searchData);
}

Leaf* BinarySearchTree::deleteData(Leaf* leaf, int deleteData) {
    if (leaf == nullptr) {
        return leaf;
    }
    else if (deleteData < leaf->data) {
        leaf->leftLeaf = this->deleteData(leaf->leftLeaf, deleteData);
    }
    else if (deleteData > leaf->data) {
        leaf->rightLeaf = this->deleteData(leaf->rightLeaf, deleteData);
    }
    else {
        if (leaf->leftLeaf == nullptr and leaf->rightLeaf == nullptr) {
            delete leaf;
            leaf = nullptr;
        }
        else if (leaf->leftLeaf == nullptr) {
            auto* tempLeaf = leaf->rightLeaf;
            delete leaf;
            return tempLeaf;
        }
        else if (leaf->rightLeaf == nullptr) {
            auto* tempLeaf = leaf->leftLeaf;
            delete leaf;
            return tempLeaf;
        }
        else {
            auto* tempLeaf = this->minData(leaf->rightLeaf);
            leaf->data = tempLeaf->data;
            leaf->rightLeaf = this->deleteData(leaf->rightLeaf, tempLeaf->data);
        }
    }

    return leaf;
}

void BinarySearchTree::deleteData(int deleteData) {
    this->root = this->deleteData(this->root, deleteData);
}

void BinarySearchTree::preOrderTraversal(Leaf* leaf) {
    if (leaf == nullptr) {
        return;
    }

    std::cout << std::endl << "Data: " << leaf->data;
    this->preOrderTraversal(leaf->leftLeaf);
    this->preOrderTraversal(leaf->rightLeaf);
}

void BinarySearchTree::preOrderTraversal() {
    std::cout << std::endl;
    this->preOrderTraversal(this->root);
    std::cout << std::endl;
}

void BinarySearchTree::inOrderTraversal(Leaf* leaf) {
    if (leaf == nullptr) {
        return;
    }

    this->inOrderTraversal(leaf->leftLeaf);
    std::cout << std::endl << "Data: " << leaf->data;
    this->inOrderTraversal(leaf->rightLeaf);
}

void BinarySearchTree::inOrderTraversal() {
    std::cout << std::endl;
    this->inOrderTraversal(this->root);
    std::cout << std::endl;
}

void BinarySearchTree::postOrderTraversal(Leaf* leaf) {
    if (leaf == nullptr) {
        return;
    }

    this->postOrderTraversal(leaf->leftLeaf);
    this->postOrderTraversal(leaf->rightLeaf);
    std::cout << std::endl << "Data: " << leaf->data;
}

void BinarySearchTree::postOrderTraversal() {
    std::cout << std::endl;
    this->postOrderTraversal(this->root);
    std::cout << std::endl;
}

void BinarySearchTree::levelOrderTraversal(std::queue<Leaf*> leafQueue) {
    if (leafQueue.empty()) {
        return;
    }

    Leaf* currentLeaf = leafQueue.front();
    std::cout << std::endl << "Data: " << currentLeaf->data;
    leafQueue.pop();

    if (currentLeaf->leftLeaf != nullptr) {
        leafQueue.push(currentLeaf->leftLeaf);
    }

    if (currentLeaf->rightLeaf != nullptr) {
        leafQueue.push(currentLeaf->rightLeaf);
    }

    this->levelOrderTraversal(leafQueue);
}

void BinarySearchTree::levelOrderTraversal() {
    std::cout << std::endl;
    std::queue<Leaf*> leafQueue;

    leafQueue.push(this->root);
    this->levelOrderTraversal(leafQueue);
    std::cout << std::endl;
}

void BinarySearchTree::getLeafInOrder(Leaf* leaf, std::deque<Leaf*> &leafQueue) {
    if (leaf == nullptr) {
        return;
    }

    this->getLeafInOrder(leaf->leftLeaf, leafQueue);
    leafQueue.push_back(leaf);
    this->getLeafInOrder(leaf->rightLeaf, leafQueue);
}

std::deque<Leaf *> BinarySearchTree::getLeavesInOrder() {
    std::deque<Leaf*> leafQueue;
    this->getLeafInOrder(this->root, leafQueue);
    return leafQueue;
}

void BinarySearchTree::convertSkewed(Leaf* &leaf, bool rightSkewed) {
    std::deque<Leaf*> inOrderLeaves;
    std::deque<Leaf*> deleteLeaves;
    inOrderLeaves = this->getLeavesInOrder();
    deleteLeaves = inOrderLeaves;

    int numberOfLeaves = inOrderLeaves.size();

    if (rightSkewed) {
        for (int i = 0; i < numberOfLeaves; i++) {
            this->deleteData(deleteLeaves.front()->data);
            deleteLeaves.pop_front();
        }

        for (int i = 0; i < numberOfLeaves; i++) {
            this->insertData(inOrderLeaves.front()->data);
            inOrderLeaves.pop_front();
        }
    }
    else {
        for (int i = 0; i < numberOfLeaves; i++) {
            this->deleteData(deleteLeaves.back()->data);
            deleteLeaves.pop_back();
        }

        for (int i = 0; i < numberOfLeaves; i++) {
            this->insertData(inOrderLeaves.back()->data);
            inOrderLeaves.pop_back();
        }
    }
}

void BinarySearchTree::convertLeftSkewed() {
    this->convertSkewed(this->root, false);
}

Leaf* BinarySearchTree::getSuccessor(Leaf* ancestorLeaf, Leaf* currentLeaf, Leaf* &successorLeaf) {
    if (ancestorLeaf == currentLeaf) {
        return successorLeaf;
    }

    if (currentLeaf->data < ancestorLeaf->data) {
        successorLeaf = ancestorLeaf;
        ancestorLeaf = ancestorLeaf->leftLeaf;
    }
    else {
        ancestorLeaf = ancestorLeaf->rightLeaf;
    }

    this->getSuccessor(ancestorLeaf, currentLeaf, successorLeaf);
}

Leaf* BinarySearchTree::getSuccessor(int leafData) {
    Leaf* currentLeaf = this->searchData(leafData);

    if (currentLeaf == nullptr) {
        return nullptr;
    }

    if (currentLeaf->rightLeaf != nullptr) {
        return this->minData(currentLeaf->rightLeaf);
    }
    else {
        Leaf* ancestorLeaf = this->root;
        Leaf* successorLeaf = nullptr;

        return this->getSuccessor(ancestorLeaf, currentLeaf, successorLeaf);
    }
}

Leaf* BinarySearchTree::rightRotation(Leaf* leaf) {
    Leaf* rotatedLeaf = leaf->leftLeaf;
    Leaf* rotatedLeafRight = leaf->rightLeaf;

    rotatedLeaf->rightLeaf = leaf;
    leaf->leftLeaf = rotatedLeafRight;

    return rotatedLeaf;
}

void BinarySearchTree::rightRotation(int leafData) {
    Leaf* requiredLeaf = this->searchData(leafData);
    requiredLeaf = this->rightRotation(requiredLeaf);
}

Leaf* BinarySearchTree::leftRotation(Leaf* leaf) {
    Leaf* rotatedLeaf = leaf->rightLeaf;
    Leaf* rotatedLeafLeft = rotatedLeaf->leftLeaf;

    rotatedLeaf->leftLeaf = leaf;
    leaf->rightLeaf = rotatedLeafLeft;

    return rotatedLeaf;
}

void BinarySearchTree::leftRotation(int leafData) {
    Leaf* requiredLeaf = this->searchData(leafData);
    this->leftRotation(requiredLeaf);
}

int BinarySearchTree::getLeftDepth(Leaf* leaf) {
    if (leaf == nullptr) {
        return -1;
    }

    return this->getLeftDepth(leaf->leftLeaf) + 1;
}

int BinarySearchTree::getRightDepth(Leaf* leaf) {
    if (leaf == nullptr) {
        return -1;
    }

    return this->getRightDepth(leaf->rightLeaf) + 1;
}

int BinarySearchTree::getDepth() {
    int leftHeight = this->getLeftDepth(this->root);
    int rightHeight = this->getRightDepth(this->root);

    if (leftHeight <= rightHeight) {
        return rightHeight;
    }
    else {
        return leftHeight;
    }
}

Leaf* BinarySearchTree::minData(Leaf* leaf) {
    if (leaf->leftLeaf == nullptr) {
        return leaf;
    }

    return this->minData(leaf->leftLeaf);
}

Leaf* BinarySearchTree::minData() {
    return this->minData(this->root);
}

Leaf* BinarySearchTree::maxData(Leaf* leaf) {
    if (leaf->rightLeaf == nullptr) {
        return leaf;
    }

    return this->maxData(leaf->rightLeaf);
}

Leaf* BinarySearchTree::maxData() {
    return this->maxData(this->root);
}