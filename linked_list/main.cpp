#include <iostream>
#include<linked_list.h>
using namespace std;

int main()
{
    LinkedList<int> myList;

    for(int i = 0 ; i < 10 ; i++)
    {
        myList.insertAtStart(i*5);
    }

    myList.printFromStart();
    myList.removeData(35);
    myList.removeData(0);
    myList.printFromStart();
    myList.updateAtIndex(99,0);
    myList.updateAtIndex(88,3);
    myList.printFromStart();
    myList.updateAtIndex(77,7);
    myList.printFromStart();



    return 0;
}
