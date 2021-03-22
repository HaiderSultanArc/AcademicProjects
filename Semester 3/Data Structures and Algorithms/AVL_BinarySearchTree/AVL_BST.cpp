#include "AVL_BST.h"
#include <iostream>

AVL_BST::AVL_BST() {
    this->root = nullptr;
}

Leaf* AVL_BST::createNewLeaf(int inputData) {
    auto* newLeaf = new Leaf();
    newLeaf->data = inputData;
    newLeaf->height = 1;
    return newLeaf;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int AVL_BST::getLeafHeight(Leaf* leaf) {
    if (leaf == nullptr) {
        return 0;
    }
    else {
        return leaf->height;
    }
}

Leaf* AVL_BST::rightRotation(Leaf* leaf) {
    Leaf* newRoot = leaf->leftLeaf;
    Leaf* newRootRight= newRoot->rightLeaf;

    newRoot->rightLeaf = leaf;
    leaf->leftLeaf = newRootRight;

    int leafLeftHeight = this->getLeafHeight(leaf->leftLeaf);
    int leafRightHeight = this->getLeafHeight(leaf->rightLeaf);
    int newRootLeftHeight = this->getLeafHeight(newRoot->leftLeaf);
    int newRootRightHeight = this->getLeafHeight(newRoot->rightLeaf);

    newRoot->height = max(newRootRightHeight, newRootLeftHeight) + 1;
    leaf->height = max(leafRightHeight, leafLeftHeight) + 1;

    return newRoot;
}

Leaf* AVL_BST::leftRotation(Leaf* leaf) {
    Leaf* newRoot = leaf->rightLeaf;
    Leaf* rootLeft = newRoot->leftLeaf;

    newRoot->leftLeaf = leaf;
    leaf->rightLeaf = rootLeft;

    int leafLeftHeight = this->getLeafHeight(leaf->leftLeaf);
    int leafRightHeight = this->getLeafHeight(leaf->rightLeaf);
    int newRootLeftHeight = this->getLeafHeight(newRoot->leftLeaf);
    int newRootRightHeight = this->getLeafHeight(newRoot->rightLeaf);

    newRoot->height = max(newRootRightHeight, newRootLeftHeight) + 1;
    leaf->height = max(leafRightHeight, leafLeftHeight) + 1;

    return newRoot;
}

Leaf* AVL_BST::insertData(Leaf* leaf, int inputData) {
    if (leaf == nullptr) {
        leaf = AVL_BST::createNewLeaf(inputData);
        return leaf;
    }

    if (inputData <= leaf->data) {
        leaf->leftLeaf = insertData(leaf->leftLeaf, inputData);
    }
    else {
        leaf->rightLeaf = insertData(leaf->rightLeaf, inputData);
    }

    int leafLeftHeight = this->getLeafHeight(leaf->leftLeaf);
    int leafRightHeight = this->getLeafHeight(leaf->rightLeaf);

    leaf->height = max(leafRightHeight, leafLeftHeight) + 1;

    int leafBalance = leafLeftHeight - leafRightHeight;

    if (leafBalance > 1 and inputData < leaf->leftLeaf->data) {
        return this->rightRotation(leaf);
    }

    if (leafBalance < -1 and inputData > leaf->rightLeaf->data) {
        return this->leftRotation(leaf);
    }

    if (leafBalance > 1 and inputData > leaf->leftLeaf->data) {
        leaf->leftLeaf = this->leftRotation(leaf->leftLeaf);
        return this->rightRotation(leaf);
    }

    if (leafBalance < -1 and inputData < leaf->rightLeaf->data) {
        leaf->rightLeaf = this->rightRotation(leaf->rightLeaf);
        return this->leftRotation(leaf);
    }

    return leaf;
}

void AVL_BST::insertData(int inputData) {
    this->root = this->insertData(this->root, inputData);
}

Leaf* AVL_BST::deleteData(Leaf* leaf, int deleteData) {
    if (leaf == nullptr) {
        return leaf;
    }

    if (deleteData < leaf->data) {
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
            Leaf* tempLeaf = leaf->rightLeaf;
            delete leaf;
            return tempLeaf;
        }
        else if (leaf->rightLeaf == nullptr) {
            Leaf* tempLeaf = leaf->leftLeaf;
            delete leaf;
            return tempLeaf;
        }
        else {
            Leaf* tempLeaf = this->minData(leaf->rightLeaf);
            leaf->data = tempLeaf->data;
            leaf->rightLeaf = this->deleteData(leaf->rightLeaf, tempLeaf->data);
        }
    }

    int leafLeftHeight = this->getLeafHeight(leaf->leftLeaf);
    int leafRightHeight = this->getLeafHeight(leaf->rightLeaf);

    leaf->height = max(leafRightHeight, leafLeftHeight) + 1;

    int leafBalance = leafLeftHeight - leafRightHeight;
    int leafLeftBalance = this->getLeafHeight(leaf->leftLeaf->leftLeaf) - this->getLeafHeight(leaf->leftLeaf->rightLeaf);
    int leafRightBalance = this->getLeafHeight(leaf->rightLeaf->leftLeaf) - this->getLeafHeight(leaf->rightLeaf->rightLeaf);

    if (leafBalance > 1 and leafLeftBalance >= 0) {
        return this->rightRotation(leaf);
    }

    if (leafBalance > 1 and leafLeftBalance < 0) {
        leaf->leftLeaf = this->leftRotation(leaf->leftLeaf);
        return this->rightRotation(leaf);
    }

    if (leafBalance < -1 and leafRightBalance <= 0) {
        return this->leftRotation(leaf);
    }

    if (leafBalance < -1 and leafRightBalance > 0) {
        leaf->rightLeaf = this->rightRotation(leaf->rightLeaf);
        return this->leftRotation(leaf);
    }

    return leaf;
}

void AVL_BST::deleteData(int deleteData) {
    this->root = this->deleteData(this->root, deleteData);
}

int AVL_BST::getLeftDepth(Leaf* leaf) {
    if (leaf == nullptr) {
        return -1;
    }

    return this->getLeftDepth(leaf->leftLeaf) + 1;
}

int AVL_BST::getRightDepth(Leaf* leaf) {
    if (leaf == nullptr) {
        return -1;
    }

    return this->getRightDepth(leaf->rightLeaf) + 1;
}

int AVL_BST::getDepth() {
    return max(this->getRightDepth(this->root), this->getLeftDepth(this->root));
}

Leaf* AVL_BST::minData(Leaf* leaf) {
    if (leaf->leftLeaf == nullptr) {
        return leaf;
    }

    return this->minData(leaf->leftLeaf);
}

Leaf* AVL_BST::minData() {
    return this->minData(this->root);
}

Leaf* AVL_BST::maxData(Leaf* leaf) {
    if (leaf->rightLeaf == nullptr) {
        return leaf;
    }

    return this->maxData(leaf->rightLeaf);
}

Leaf* AVL_BST::maxData() {
    return this->maxData(this->root);
}

void AVL_BST::preOrderTraversal(Leaf* leaf) {
    if (leaf == nullptr) {
        return;
    }

    std::cout << std::endl << "Data: " << leaf->data;
    this->preOrderTraversal(leaf->leftLeaf);
    this->preOrderTraversal(leaf->rightLeaf);
}

void AVL_BST::preOrderTraversal() {
    std::cout << std::endl;
    this->preOrderTraversal(this->root);
    std::cout << std::endl;
}