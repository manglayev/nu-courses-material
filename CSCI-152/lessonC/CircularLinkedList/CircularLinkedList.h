#include "Node.h"
class CircularLinkedList
{
  private:
    int sllSize;
    Node *cursor;

  public:
    CircularLinkedList();
    ~CircularLinkedList();

    bool empty();
    void printAll();
    int getSize();

    int front();
    int back();
    void advance();
    void add(int value);
    void remove();
};