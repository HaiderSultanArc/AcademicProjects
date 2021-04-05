#ifndef DSA_AVL_BST_H
#define DSA_AVL_BST_H

#include <queue>

class Leaf {
public:
    Leaf* leftLeaf;
    Leaf* rightLeaf;
    int height{};
    int data{};

    Leaf() {
        this->leftLeaf = nullptr;
        this->rightLeaf = nullptr;
    }
};

class AVL_BST {
private:
    Leaf* root;

public:
    AVL_BST();

    void insertData(int inputData);
    void deleteData(int deleteData);
    Leaf* searchData(int searchData);
    int getDepth();
    void preOrderTraversal();
    void inOrderTraversal();
    void postOrderTraversal();
    void levelOrderTraversal();
    Leaf* minData();
    Leaf* maxData();

private:
    static Leaf* createNewLeaf(int inputData);
    Leaf* searchData(Leaf* leaf, int searchData);
    static int getLeafHeight(Leaf* leaf);
    Leaf* rightRotation(Leaf* leaf);
    Leaf* leftRotation(Leaf* leaf);
    Leaf* insertData(Leaf* leaf, int inputData);
    Leaf* deleteData(Leaf* leaf, int deleteData);
    int getLeftDepth(Leaf* leaf);
    int getRightDepth(Leaf* leaf);
    void preOrderTraversal(Leaf* leaf);
    void inOrderTraversal(Leaf* leaf);
    void postOrderTraversal(Leaf* leaf);
    void levelOrderTraversal(std::queue<Leaf*> leafQueue);
    Leaf* minData(Leaf* leaf);
    Leaf* maxData(Leaf* leaf);
};


#endif //DSA_AVL_BST_H
