class Node
{
  private:
  	int value;
  	Node *next;
	Node *previous;

  public:
    Node();
  	Node(int aValue);
  	Node(int aValue, Node* aNext);
	Node(int aValue, Node *aNext, Node *aPrevious);
    ~Node();

  	int getValue();
  	void setValue(int aValue);
	Node *getPrevious();
  	Node *getNext();
	void setPrevious(Node *aPrevious);
  	void setNext(Node *aNext);

  	void printNode();
};
