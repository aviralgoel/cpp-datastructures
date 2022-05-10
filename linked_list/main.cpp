#include <iostream>
#include<linked_list.h>
using namespace std;

int main()
{
    LinkedList myList;
    myList.insertAtStart(5);
    myList.insertAtStart(15);
    myList.insertAtStart(25);
    myList.printFromStart();
    return 0;
}
