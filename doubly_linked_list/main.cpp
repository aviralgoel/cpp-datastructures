#include <iostream>
#include <doubly_linked_list.h>

using namespace std;

int main()
{

    // a whole lot of testing using the implemented function
    // it is better to comment everything here and uncomment it line by line
    // write your own test!
    DoublyLinkedList<int> myList;
    for(int i = 0 ; i < 10 ; i++)
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
    myList.printFromFirst();
    myList.printAtIndex(5);
    myList.printAtIndex(1);
    myList.printAtIndex(10);
    myList.printAtIndex(11);
    myList.updateAtIndex(60, 9);
    myList.updateAtIndex(50, 1);
    myList.updateAtIndex(40, myList.sizeOfList());
    myList.printFromFirst();
    myList.deleteFirst();
    myList.deleteLast();
    myList.printFromFirst();
    myList.deleteAtIndex(9);
    myList.deleteAtIndex(2);
    myList.printFromFirst();

    return 0;
}
