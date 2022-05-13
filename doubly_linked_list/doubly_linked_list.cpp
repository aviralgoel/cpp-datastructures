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
	delete aux;
    }
}

template <typename T>
void DoublyLinkedList<T>::addFirst(T val) {

    Node<T>* temp = new Node<T>();
    temp->val = val;
    temp->next = head;
    temp->prev = nullptr;
    if(length>0) // added node will
    {
        head->prev = temp;
    }
    head = temp;
    std::cout << "Inserted at head " << val << "\n";
    length++;
    if(length==1)
    {
        tail = head;
    }

}

template <typename T>
void DoublyLinkedList<T>::addLast(T val) {

    Node<T>* temp = new Node<T>();
    temp->val = val;
    temp->next = nullptr;
    temp->prev = tail;
    if(length>0) // added node will
    {
        tail->next = temp;
    }
    tail = temp;
    std::cout << "Inserted at tail " << val << "\n";
    length++;
    if(length==1)
    {
        head = tail;
    }

}

template <typename T>
void DoublyLinkedList<T>::addAtIndex(T val, int index) {
    if(index>length || index == 1 || index == length)
    {
        std::cout << "Invalid Index\n"; return;
    }
    Node<T>* temp = new Node<T>();
    temp->val = val;
    Node<T>* trav = head;
    for(int i = 0 ; i < index-1; i++)
    {
        trav = trav->next;
    }
    trav->prev->next = temp;
    temp->prev = trav->prev;
    temp->next = trav;
    trav->prev = temp;
    length++;
    std::cout << "Added " << temp->val << " at " << index << "\n";

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
template <typename T>
void DoublyLinkedList<T>::printFromFirst() {
    Node<T> *temp = head;
    while(temp)
    {
        std::cout << temp->val << " --> ";
        temp = temp->next;
    }
    std::cout << "\n";
    return;
}
template <typename T>
void DoublyLinkedList<T>::printFromLast() {
    Node<T> *temp = tail;
    while(temp)
    {
        std::cout << temp->val << " --> ";
        temp = temp->prev;
    }
    std::cout << "\n";
    return;
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

