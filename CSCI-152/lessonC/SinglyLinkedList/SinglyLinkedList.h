#include "Node.h"
class SinglyLinkedList
{
  private:
    int sllSize;
    Node *head;
    Node *tail;

  public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void insertBefore(int data);
    void insertAfter(int data);
    void insertAt(int index, int data);

    void removeBefore();
    void removeAfter();
    void removeAt(int index);

    bool empty() const;
    Node *getNode(int index);
    int getIndex(int data);
    void printAll();
    int getSize();
};