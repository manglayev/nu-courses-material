#include <cmath>
#include <iostream>
#include <queue>
#include "BST.h"
using namespace std;
BinarySearchTree::BinarySearchTree()
{
    //Node *root = new Node();
}
Node* BinarySearchTree::search(Node* root, int data)
{
    if(root == NULL) return root;
    else if(root->getData() == data) return root;
    else if(data < root->getData()) return search(root->getLeftChildNode(), data);
    else return search(root->getRightChildNode(), data);
}
void BinarySearchTree::remove(int key)
{
    root = remove(root, key);
}
Node* BinarySearchTree::remove(Node* node, int data)
{
	if(node == NULL) return node;
	if(node->getData() < data)
    {
        Node *t = remove(node->getRightChildNode(), data);
        if(t == NULL)
            node->rightChildNode = NULL;
        //node->setRightChildNode(remove(node->getRightChildNode(), data));
	}
    else if(node->getData() > data)
    {
        Node *t = remove(node->getLeftChildNode(), data);
        if(t == NULL)
            node->leftChildNode = NULL;
		//node->setLeftChildNode(remove(node->getLeftChildNode(), data));
	}
    else if(node->getData() == data)
    {        
        if(node->getLeftChildNode() == NULL && node->getRightChildNode() == NULL)
        {
            //node = new Node();
            //cout<<node->getData()<<endl;
            //here it fails (segmentation faule) if I don't add the line above,
            //but it is not removing the node then
            //in order to move I used
            node = NULL;
            //node->remove(node);            
        }
        else if (node->getLeftChildNode() == NULL && node->getRightChildNode() != NULL)
        {
            node->getRightChildNode()->setParentNode(node->getParentNode());
            node = node->getRightChildNode();
        }
        else if (node->getLeftChildNode() != NULL && node->getRightChildNode() == NULL)
        {
            node->getLeftChildNode()->setParentNode(node->getParentNode());
            node = node->getLeftChildNode();
        }
        else
        {
            int successorData = successor(node)->getData();
            node->setData(successorData);
            node->setRightChildNode(remove(node->getRightChildNode(), successorData));
        }
	}
	return node;
}
void BinarySearchTree::insert(int data)
{   
    root = insert(root, data);
}
Node* BinarySearchTree::insert(Node* node, int data)
{   
    if(node == NULL){ node = new Node(data); }
    else if(node->getData() > data)
    {
        node->setLeftChildNode(insert(node->getLeftChildNode(), data));
        node->getLeftChildNode()->setParentNode(node);
    }
    else
    {
        node->setRightChildNode(insert(node->getRightChildNode(), data));
        node->getRightChildNode()->setParentNode(node);
    }

    return node;
}
void BinarySearchTree::preOrder(Node* root)
{
    if(root == NULL) return;
    std::cout<<root->getData();
    preOrder(root->getLeftChildNode());
    preOrder(root->getRightChildNode());
}
void BinarySearchTree::inOrder(Node* root)
{
    if(root == NULL) return;
    inOrder(root->getLeftChildNode());
    std::cout<<root->getData();
    inOrder(root->getRightChildNode());
}
void BinarySearchTree::postOrder(Node* root)
{
    if(root == NULL) return;
    postOrder(root->getLeftChildNode());
    postOrder(root->getRightChildNode());
    std::cout<<root->getData();
}
// Finds the minimum of subtree rooted at "root".
Node* BinarySearchTree::findMin(Node* root)
{
	while(root && root->getLeftChildNode()) root = root->getLeftChildNode();
	return root;
}
// Finds the maximum of subtree rooted at "root".
Node* BinarySearchTree::findMax (Node *root)
{
	while(root && root->getRightChildNode()) root = root->getRightChildNode();
	return root;
}

Node* BinarySearchTree::successor(Node *which)
{
	if(!which) return which;

	if(which->getRightChildNode()) return findMin(which->getRightChildNode());
	while(which->getParentNode() && 
        which->getParentNode()->getRightChildNode() && 
        which == which->getParentNode()->getRightChildNode())
    {
		which = which->getParentNode();
	}
    
	return which->getParentNode();
}
Node* BinarySearchTree::predecessor(Node *which)
{
	if (!which) return which;
	if (which->getLeftChildNode()) return findMax(which->getLeftChildNode());
	while (which->getParentNode() &&
        which == which->getParentNode()->getLeftChildNode())
    {
		which = which->getParentNode();
	}
	return which->getParentNode();
}
BinarySearchTree::~BinarySearchTree() {}
void BinarySearchTree::printTreeNode()
{
    root->printNodeTree();
}