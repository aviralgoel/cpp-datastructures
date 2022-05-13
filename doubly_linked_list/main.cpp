#include <iostream>
#include <doubly_linked_list.h>

using namespace std;

int main()
{
    DoublyLinkedList<int> mylist;
    mylist.addFirst(5);
    mylist.addFirst(4);
    mylist.addFirst(7);
    mylist.addFirst(6);

    cout << mylist.sizeOfList() << endl;
    cout << mylist.printTail() <<endl;
    cout << mylist.printHead() <<endl;

    return 0;
}
