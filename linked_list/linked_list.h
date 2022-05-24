#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <optional>
template <typename T>
class Node
{
    public:
        Node<T>* next;
        T data;
};

template <typename T>
class LinkedList {
    public:
        LinkedList();
        ~LinkedList();

        //retrieve
        void printFromStart();
        //create
        void insertAtStart(T data);
        //delete
        void removeData(T data);
        //update
        void updateAtIndex(T data, int index);
        //reverse iterative
        void reverseList(std::optional<int> potential_value = {});


    private:
        void reverseIterative(Node<T>* head);
        Node<T>* reverseRecursive(Node<T>* node);
        Node<T> *m_head;
        Node<T> *m_tail;
        size_t length;

};

#endif /* LINKEDLIST_H_ */
