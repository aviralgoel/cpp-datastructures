#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

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

        void printFromStart();
        void insertAtStart(T data);
        void removeFromStart(T data);
        void clearList();
        //void remove(int data);

        //Node* search(int data);
        //void reverse();

    private:
        Node<T> *m_head;
        Node<T> *m_tail;
        size_t length;

};

#endif /* LINKEDLIST_H_ */
