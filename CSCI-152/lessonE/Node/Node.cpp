#include <cmath>
#include <iostream>
#include <queue>
#include "Node.h"
using namespace std;
Node::Node()
{
    
    //cout << "--Constructing node with NULL value " << endl;
    parentNode = NULL;
    leftChildNode = NULL;
    rightChildNode = NULL;
    
}
Node::Node(int aData)
{
    //cout << "--Constructing node with one value " << aValue << endl;
    setData(aData);
    parentNode = NULL;
    leftChildNode = NULL;
    rightChildNode = NULL;
}
Node::Node(int aData, Node* aParentNode)
{
  	//cout << "--Constructing node with value and link " << aValue << endl;
    setData(aData);
    setParentNode(aParentNode);
    leftChildNode = NULL;
    rightChildNode = NULL;
}
Node::Node(int aData, Node* aLeftChildNode, Node* aRightChildNode)
{
  	//cout << "--Constructing node with value and link " << aValue << endl;
    setData(aData);
    parentNode = NULL;
    setLeftChildNode(aLeftChildNode);
    setRightChildNode(aRightChildNode);
}
Node::Node(int aData, Node* aParentNode, Node* aLeftChildNode, Node* aRightChildNode)
{
  	//cout << "--Constructing node with value and link " << aValue << endl;
    setData(aData);
    setParentNode(aParentNode);
    setLeftChildNode(aLeftChildNode);
    setRightChildNode(aRightChildNode);
}
Node::~Node()
{
	//cout << "--Destructing node with value " << value << endl;
}
int Node::getData()
{
	return data;
}
Node* Node::getParentNode()
{
    //cout<<"left node is returned with value "<<leftNode->getData()<<endl;
	return parentNode;
}
Node* Node::getLeftChildNode()
{
    //cout<<"left node is returned with value "<<leftNode->getData()<<endl;
	return leftChildNode;
}
Node* Node::getRightChildNode()
{
    //cout<<"right node is returned with value "<<rightNode->getData()<<endl;
	return rightChildNode;
}
void Node::setData(int aData)
{
	//cout << "--Changing node value from " << value << " to " << aValue << endl;
	data = aData;
}
void Node::setParentNode(Node* aParentNode)
{
    //cout<<"right node is returned with value "<<rightNode->getData()<<endl;
    //maybe need to work on that
	parentNode = aParentNode;
}
void Node::setLeftChildNode(Node *aLeftChildNode)
{
    //cout<<"left node is set with value "<<aLeftNode->getData()<<endl;
    //if(this->getLeftChildNode() != NULL) remove(this->getLeftChildNode());
    /*
    if(getLeftChildNode() != NULL)
	{
		Node *temp = this->getLeftChildNode();
		temp->parentNode = NULL;
	}
    */
    if (leftChildNode != NULL)
    {
        leftChildNode->setParentNode(NULL);
    }
	leftChildNode = aLeftChildNode;
    if(leftChildNode->getParentNode() != this) leftChildNode->setParentNode(this);
}
void Node::setRightChildNode(Node *aRightChildNode)
{
    //cout<<"right node is set with value "<<aRightNode->getData()<<endl;
    //if(this->getRightChildNode() != NULL) remove(this->getRightChildNode());
    /*
    if(getRightChildNode() != NULL)
	{
		Node *temp = this->getRightChildNode();
		temp->parentNode = NULL;
	}
    */
    if (rightChildNode != NULL)
    {
        rightChildNode->setParentNode(NULL);
    }
    rightChildNode = aRightChildNode;
    if(rightChildNode->getParentNode()!=this) rightChildNode->setParentNode(this);
}
void Node::remove(Node* node)
{   
    if(!node->getLeftChildNode() && !node->getRightChildNode())
    {
        delete node;
        return;
    }
    if(node->getLeftChildNode())
    {
        Node* tempLeft = node->getLeftChildNode();
        remove(tempLeft);
    }    
    if(node->getRightChildNode())
    {
        Node* tempRight = node->getRightChildNode();
        remove(tempRight);
    }
}
int Node::getHeightOfTree(Node* node)
{
    if (node == nullptr)
    {
        return 0;
    }
    return 1 + max(getHeightOfTree(node->getLeftChildNode()), getHeightOfTree(node->getRightChildNode()));
}
void Node::printSpace(double n, Node* removed)
{
    for (; n > 0; n--)
    {
        cout << "\t";
    }
    if (removed == nullptr)
    {
        cout << " ";
    }
    else
    {
        cout << removed->data;
    }
}
void Node::printNodeTree()
{
    Node* root = this;
    queue<Node*> treeLevel, temp;
    treeLevel.push(root);
    int counter = 0;
    int height = getHeightOfTree(root) - 1;
    double numberOfElements = pow(2, (height + 1)) - 1;
    while (counter <= height)
    {
        Node* removed = treeLevel.front();
        treeLevel.pop();
        if (temp.empty())
        {
            printSpace(numberOfElements / pow(2, counter + 1), removed);
        }
        else
        {
            printSpace(numberOfElements / pow(2, counter), removed);
        }
        if (removed == nullptr)
        {
            temp.push(nullptr);
            temp.push(nullptr);
        }
        else
        {
            temp.push(removed->getLeftChildNode());
            temp.push(removed->getRightChildNode());
        }
        if (treeLevel.empty())
        {
            cout << endl << endl;
            treeLevel = temp;
            while (!temp.empty())
            {
                temp.pop();
            }
            counter++;
        }
    }
}