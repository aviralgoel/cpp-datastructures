#include <iostream>
#include <doubly_linked_list.h>

using namespace std;

int main()
{
    DoublyLinkedList<int> myList;
    for(int i = 0 ; i < 1 ; i++)
    {
        myList.addFirst(i);
    }

    cout << myList.sizeOfList() << endl;
    cout << myList.printTail() <<endl;
    cout << myList.printHead() <<endl;
    cout << "Printing list from head\n";
    myList.printFromFirst();
    cout << "Printing list from tail\n";
    myList.printFromLast();
    cout << "Adding few nodes from the tail\n";
    for(int i = 10 ; i < 20 ; i+=10)
    {
        myList.addLast(i);
    }
    myList.printFromFirst();
    myList.addAtIndex(99, 1);
    myList.addAtIndex(88, 5);
    myList.printFromFirst();
    cout << myList.sizeOfList() << endl;
    myList.addAtIndex(77, 56);
    return 0;
}
