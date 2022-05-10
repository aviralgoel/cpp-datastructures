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
        //void insert(int data);
        //void remove(int data);
        //void print();
        //Node* search(int data);
        //void reverse();

    private:
        Node<T> *m_head;

};

#endif /* LINKEDLIST_H_ */
