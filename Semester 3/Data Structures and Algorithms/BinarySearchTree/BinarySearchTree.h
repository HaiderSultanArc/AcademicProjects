#ifndef DSA_BINARYSEARCHTREE_H
#define DSA_BINARYSEARCHTREE_H

#include <queue>

class Leaf {
public:
    int data{};
    Leaf* leftLeaf;
    Leaf* rightLeaf;

    Leaf() {
        this->leftLeaf = nullptr;
        this->rightLeaf = nullptr;
    }
};

class BinarySearchTree {
private:
    Leaf* root;

public:
    BinarySearchTree();

    void insertData(int inputData);
    Leaf* searchData(int searchData);
    void deleteData(int deleteData);
    void preOrderTraversal();
    void inOrderTraversal();
    void postOrderTraversal();
    void levelOrderTraversal();
    std::deque<Leaf*> getLeavesInOrder();
    Leaf* getSuccessor(int leafData);
    int getDepth();
    Leaf* minData();
    Leaf* maxData();

private:
    static Leaf* createNewLeaf(int inputData);
    void insertData(Leaf* &leaf, int inputData);
    Leaf* searchData(Leaf* leaf, int searchData);
    Leaf* deleteData(Leaf* leaf, int deleteData);
    void preOrderTraversal(Leaf* leaf);
    void inOrderTraversal(Leaf* leaf);
    void postOrderTraversal(Leaf* leaf);
    void levelOrderTraversal(std::queue<Leaf*> leafQueue);
    void getLeafInOrder(Leaf* leaf, std::deque<Leaf*> &leafQueue);
    Leaf* getSuccessor(Leaf* ancestorLeaf, Leaf* currentLeaf, Leaf* &successorLeaf);
    int getLeftDepth(Leaf* leaf);
    int getRightDepth(Leaf* leaf);
    Leaf* minData(Leaf* leaf);
    Leaf* maxData(Leaf* leaf);
};


#endif //DSA_BINARYSEARCHTREE_H
