#ifndef DOUBLY_LINKED_LIST_H_
#define DOUBLY_LINKED_LIST_H

template <typename T>
class Node {
    public:
    Node<T> *next;
    Node<T> *prev;
    T val;
};

template <typename T>
class DoublyLinkedList {
    public:

    // constructor
    DoublyLinkedList();
    // deconstructor
    ~DoublyLinkedList();

    // user defined functions, CRUD operations

    //create at first, last and at given index
    void addFirst(T val);
    void addLast(T val);
    void addAtIndex(T val, int index);
    //retrieve from list
    T printTail();
    T printHead();
    void printFromFirst();
    void printFromLast();
    T printAtIndex(int index);
    //update list
    void updateAtIndex(int index);
    //delete list
    void deleteFirst();
    void deleteLast();
    void deleteAtIndex();

    //other
    int sizeOfList();

    private:

    int length;
    Node<T> *head;
    Node<T> *tail;
};


#endif /* DOUBLY_LINKED_LIST_H_ */
