#include <iostream>
#include <doubly_linked_list.h>

// constructor
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
    if(length>0)
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
    if(length>0)
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
    // interpret this is trav's previous nodes' next is now temp
    trav->prev->next = temp;
    temp->prev = trav->prev;
    temp->next = trav;
    trav->prev = temp;
    length++;
    std::cout << "Added " << temp->val << " at " << index << "\n";

}

template <typename T>
int DoublyLinkedList<T>::sizeOfList() {
    std::cout <<"Length of List is ";
    return length;
}

template <typename T>
T DoublyLinkedList<T>::printTail() {
    std::cout << "Tail of list is ";
    return tail->val;
}

template <typename T>
T DoublyLinkedList<T>::printHead() {
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

template <typename T>
void DoublyLinkedList<T>::printAtIndex(int index) {

    Node<T>* temp = head;
    if(index>length)
        std::cout << "Invalid index\n";
    int i = 0;
    while(temp)
    {
        if(i++==(index-1))
        {
            std::cout << "Value at index: " << index << " is " << temp->val << std::endl;
        }
        temp = temp->next;
    }

}

template <typename T>
void DoublyLinkedList<T>::updateAtIndex(T val ,int index) {
    Node<T>* temp = head;
    if(index>length)
    {
        std::cout << "Invalid index\n";
        return;
    }

    int i = 0;
    while(temp)
    {
        if(i++==(index-1))
        {
            std::cout << "Value at index: " << index << " update to " << val << std::endl;
            temp->val = val;
            return;
        }
        temp = temp->next;
    }

}

template <typename T>
void DoublyLinkedList<T>::deleteFirst() {

    Node<T>* temp = head;
    head->next->prev = nullptr;
    head = head->next;
    std::cout << "Deleting first node \n";
    delete (temp);

}

template <typename T>
void DoublyLinkedList<T>::deleteLast() {

    Node<T>* temp = tail;
    tail->prev->next = nullptr;
    tail = tail->prev;
    std::cout << "Deleting last node \n";
    delete (temp);

}

template <typename T>
void DoublyLinkedList<T>::deleteAtIndex(int index) {

    Node<T>* temp = head;
    for(int i = 0 ; i < index-1; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    std::cout << "Deleted value is  " << temp->val << std::endl;
    delete(temp);




}


template class DoublyLinkedList<int>;
template class DoublyLinkedList<char>;
template class DoublyLinkedList<std::string>;
template class DoublyLinkedList<float>;
template class DoublyLinkedList<double>;

