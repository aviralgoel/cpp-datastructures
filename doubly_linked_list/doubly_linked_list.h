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
    void addFirst(T val); // done
    void addLast(T val); // done
    void addAtIndex(T val, int index); // done
    //retrieve from list
    T printTail(); // done
    T printHead(); // done
    void printFromFirst(); // done
    void printFromLast(); // done
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
