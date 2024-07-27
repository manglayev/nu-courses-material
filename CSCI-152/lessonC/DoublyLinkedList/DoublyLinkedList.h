#include "Node.h"
class DoublyLinkedList
{
  private:
    int dllSize;
    Node *head;
    Node *tail;

  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

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
};
