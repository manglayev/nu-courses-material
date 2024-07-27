#include <iostream>
#include "CircularLinkedList.h"
using namespace std;
int main()
{
  
  CircularLinkedList cll;
  cll.add(1);
  cll.printAll(); //1
  cout<<"front element "<<cll.front()<<endl;  //front element 1
  cout<<"back element "<<cll.back()<<endl;  //back element 1

  cll.add(2);
  cll.printAll(); //2-->1
  cout<<"front element "<<cll.front()<<endl;  //front element 2
  cout<<"back element "<<cll.back()<<endl;  //back element 1

  cll.add(3);
  cll.printAll(); //3-->2-->1
  cout<<"front element "<<cll.front()<<endl;  //front element 3
  cout<<"back element "<<cll.back()<<endl;  //back element 2

  cll.add(4);
  cll.printAll(); //4-->3-->2-->1
  cout<<"front element "<<cll.front()<<endl;  //front element 4
  cout<<"back element "<<cll.back()<<endl;  //back element 3

  cll.add(5);
  cll.printAll(); //5-->4-->3-->2-->1
  cout<<"front element "<<cll.front()<<endl;  //front element 5
  cout<<"back element "<<cll.back()<<endl;  //back element 4

  cll.remove(); //removing the element
  cll.printAll(); //5-->3-->2-->1
  cout<<"front element "<<cll.front()<<endl;  //front element 5
  cout<<"back element "<<cll.back()<<endl;  //back element 3

  cll.advance(); //advancing the cursor
  cll.printAll(); //3-->2-->1-->5
  cout<<"front element "<<cll.front()<<endl;  //front element 3
  cout<<"back element "<<cll.back()<<endl;  //back element 2
  

  CircularLinkedList circularLinkedList1;
  circularLinkedList1.add(1);
  circularLinkedList1.printAll();
  //1
  circularLinkedList1.add(2);
  circularLinkedList1.printAll();
  //2-->1
  circularLinkedList1.add(3);
  circularLinkedList1.printAll();
  //3-->2-->1
  circularLinkedList1.add(4);
  circularLinkedList1.printAll();
  //4-->3-->2-->1
  cout<<"cursor front is at element "<<circularLinkedList1.front()<<endl;
  //cursor front is at element 4
  cout<<"cursor back is at element "<<circularLinkedList1.back()<<endl;
  //cursor back is at element 3
  circularLinkedList1.advance();
  cout<<"cursor front is at element "<<circularLinkedList1.front()<<endl;
  //cursor front is at element 3
  cout<<"cursor back is at element "<<circularLinkedList1.back()<<endl;
  //cursor back is at element 2
  circularLinkedList1.advance();
  cout<<"cursor front is at element "<<circularLinkedList1.front()<<endl;
  //cursor front is at element 2
  cout<<"cursor back is at element "<<circularLinkedList1.back()<<endl;
  //cursor back is at element 1
  circularLinkedList1.advance();
  cout<<"cursor front is at element "<<circularLinkedList1.front()<<endl;
  //cursor front is at element 1
  cout<<"cursor back is at element "<<circularLinkedList1.back()<<endl;
  //cursor back is at element 4
  circularLinkedList1.advance();
  cout<<"cursor front is at element "<<circularLinkedList1.front()<<endl;
  //cursor front is at element 4
  cout<<"cursor back is at element "<<circularLinkedList1.back()<<endl;
  //cursor back is at element 3
  circularLinkedList1.advance();
  cout<<"cursor front is at element "<<circularLinkedList1.front()<<endl;
  //cursor front is at element 3
  cout<<"cursor back is at element "<<circularLinkedList1.back()<<endl;
  //cursor back is at element 2
  circularLinkedList1.remove();
  circularLinkedList1.printAll();
  //3-->1-->4
  return 0;
}
