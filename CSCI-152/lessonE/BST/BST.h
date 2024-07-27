#include "../Node/Node.h"
#include <ostream>
class BinarySearchTree
{
    private:
        
    public:
        Node* root;
        BinarySearchTree();
        ~BinarySearchTree();
        Node* search(Node* root, int data);
        void remove(int data);
        Node* remove(Node* node, int data);
        void insert(int data);
        Node* insert(Node* node, int data);
        void preOrder(Node* root);
        void inOrder(Node* root);
        void postOrder(Node* root);
        Node* findMin(Node* root);
        Node* findMax(Node* root);
        Node* successor(Node* which);
        Node* predecessor(Node *which);
        void printTreeNode();
};