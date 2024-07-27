#ifndef NODE_H_
#define NODE_H_


class Node
{

private:
	int value;
	Node* link;

public:

	Node(int val);

	int getValue();
	void setValue(int val);

	Node* getLink();
	void setLink(Node* lnk);

	~Node();
};

#endif /* NODE_H_ */
