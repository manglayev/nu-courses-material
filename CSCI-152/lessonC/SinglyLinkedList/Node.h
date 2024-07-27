class Node
{
  private:
  	int value;
  	Node *link;

  public:
    Node();
  	Node(int aValue);
  	Node(int aValue, Node* aLink);
    ~Node();

  	int getValue();
  	void setValue(int aValue);

  	Node *getLink();
  	void setLink(Node *aLink);

  	void printNode();
};
