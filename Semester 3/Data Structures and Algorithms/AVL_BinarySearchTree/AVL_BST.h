#ifndef DSA_AVL_BST_H
#define DSA_AVL_BST_H

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
    int getDepth();
    void preOrderTraversal();
    Leaf* minData();
    Leaf* maxData();

private:
    static Leaf* createNewLeaf(int inputData);
    int getLeafHeight(Leaf* leaf);
    Leaf* rightRotation(Leaf* leaf);
    Leaf* leftRotation(Leaf* leaf);
    Leaf* insertData(Leaf* leaf, int inputData);
    Leaf* deleteData(Leaf* leaf, int deleteData);
    int getLeftDepth(Leaf* leaf);
    int getRightDepth(Leaf* leaf);
    void preOrderTraversal(Leaf* leaf);
    Leaf* minData(Leaf* leaf);
    Leaf* maxData(Leaf* leaf);
};


#endif //DSA_AVL_BST_H
