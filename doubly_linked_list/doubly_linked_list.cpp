#include <iostream>
#include <doubly_linked_list.h>

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList () {
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
}

// deconstructor- clear the dynamically allocated memory
template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList () {
    Node<T>* n = this->head;
    while (n) {
        Node<T> *aux = n;
        n = n->next;

    //Am I actually deleting the node and freeing up space? or am I only deleting some pointer that points to the node?
	delete aux;
    }
}

template <typename T>
void DoublyLinkedList<T>::addFirst(T val) {

    Node<T>* temp = new Node<T>();
    temp->val = val;
    temp->next = head;
    temp->prev = nullptr;
    head = temp;
    std::cout << "Inserted " << val << "\n";
    length++;
    if(length==1)
    {
        tail = head;
    }

}

template <typename T>
int DoublyLinkedList<T>::sizeOfList()
{
    std::cout <<"Length of List is ";
    return length;
}
template <typename T>
T DoublyLinkedList<T>::printTail()
{
    std::cout << "Tail of list is ";
    return tail->val;
}
template <typename T>
T DoublyLinkedList<T>::printHead()
{
    std::cout << "Head of list is ";
    return head->val;
}

    //void addLast(T val);
    //void addAtIndex(T val, int index);
    //retrieve from list
    //void printFromFirst();
    //void printFromLast();
    //T printAtIndex(int index);
    //update list
    //void updateAtIndex(int index);
    //delete list
    //void deleteFirst();
    //void deleteLast();
    //void deleteAtIndex();



template class DoublyLinkedList<int>;
template class DoublyLinkedList<char>;
template class DoublyLinkedList<std::string>;
template class DoublyLinkedList<float>;
template class DoublyLinkedList<double>;

