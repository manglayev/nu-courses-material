#include <iostream>

struct linked_list_node
{
  int value;
  linked_list_node *next;

  linked_list_node (int x) : value(x), next(nullptr){}

  void insert_after(linked_list_node *x)
  {
    x->next = next;
    next    = x;
  }

  void remove_after()
  {
    linked_list_node *x = next;

    if(x == nullptr) return;

    linked_list_node *y = x -> next;

    x->next = nullptr;
    next = y;
  }

  void print_all_recursively()
  {
    std::cout<<value<<" ";
    if(next) next->print_all_recursively();
  }

  void print_all_iteratively()
  {
    linked_list_node *current = this;
    while(current)
    {
      std::cout<<current->value<<" ";
      current = current->next;
    }
    std::cout<<"\n";
  }
};
int main()
{
  linked_list_node linked_list_node1(5);
  linked_list_node linked_list_node2(51);
  linked_list_node linked_list_node3(600);
  linked_list_node linked_list_node4(745);
  linked_list_node linked_list_node5(127);

  linked_list_node1.insert_after(&linked_list_node2);
  linked_list_node1.insert_after(&linked_list_node3);
  linked_list_node1.insert_after(&linked_list_node4);
  linked_list_node1.insert_after(&linked_list_node5);

  linked_list_node1.print_all_iteratively();

  linked_list_node1.remove_after();
  linked_list_node1.print_all_recursively();
  std::cout<<"\n";
  return 0;
}
