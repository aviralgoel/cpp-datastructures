#ifndef DOUBLY_LINKED_LIST_H_
#define DOUBLY_LINKED_LIST_H

/* Disclaimair: This is my first doubly linked list implementation.
**  It is a bit rushed but I did my best to implement all the CRUD operations.
**  Some of my functions are broken only in the sense that they do not perform checks for valid index value
**  if the user provides wrong index value for node to be deleted, the function might break. (I had limited time, Sorry!)
**  I urge you to improve my code and submit a pull request on GitHub!
*/
// a generic node class for aur doubly linked list
template <typename T>
class Node {
    public:
    Node<T> *next;
    Node<T> *prev;
    T val;
};

// declaration of our doubly linked list
template <typename T>
class DoublyLinkedList {
    public:

    // constructor
    DoublyLinkedList();
    // deconstructor
    ~DoublyLinkedList();

    // user defined functions, CRUD operations (create, retrieve, update, delete)

    // CREATE at first, last and at given index
    void addFirst(T val);
    void addLast(T val);
    void addAtIndex(T val, int index);

    // RETRIEVE from list
    T printTail();
    T printHead();
    void printAtIndex(int index);
    void printFromFirst();
    void printFromLast();

    // UPDATE node values in list
    void updateAtIndex(T val, int index); // for head index = 1 and tail = sizeOfList


    // DELETE a node from list
    void deleteFirst();
    void deleteLast();
    // Assumption: The user will not call deleteAtIndex, to delete head or tail
    void deleteAtIndex(int index);

    // other
    int sizeOfList(); // done

    private:
    int length;
    Node<T> *head;
    Node<T> *tail;
};


#endif /* DOUBLY_LINKED_LIST_H_ */
