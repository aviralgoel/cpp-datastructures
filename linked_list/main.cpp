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


    return 0;
}
