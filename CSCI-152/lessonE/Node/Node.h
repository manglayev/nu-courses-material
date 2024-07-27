class Node
{
    public:
        int data;
        Node* leftChildNode;
        Node* rightChildNode;
        Node* parentNode;
        Node();
        Node(int aData);
        Node(int aData, Node* aParentNode);
        Node(int aData, Node* aLeftChildNode, Node* aRightChildNode);
        Node(int aData, Node* aParentNode, Node* aLeftChildNode, Node* aRightChildNode);
        ~Node();
        
        int getData();
        Node* getParentNode();
        Node* getLeftChildNode();
        Node* getRightChildNode();

        void setData(int aData);
        void setParentNode(Node* aParentNode);
        void setLeftChildNode(Node* aLeftChildNode);
        void setRightChildNode(Node* aRightChildNode);
        
        void remove(Node* node);
        int getHeightOfTree(Node* root);
        void printSpace(double n, Node* removed);
        void printNodeTree();
};