#include <iostream>
#include<linked_list.h>
using namespace std;

int main()
{
    LinkedList<int> myList;
    myList.insertAtStart(5);
    myList.insertAtStart(15);
    myList.insertAtStart(25);
    myList.printFromStart();

    LinkedList<string> myListS;
    myListS.insertAtStart("hello");
    myListS.insertAtStart("world");
    myListS.insertAtStart("!");
    myListS.printFromStart();

    return 0;
}
