#include <iostream>
#include <linked_list.h>

// constructor
template <typename T>
LinkedList<T>::LinkedList () {
    this->m_head = NULL;
    this->m_tail = NULL;
    this->length = 0;
}

// deconstructor
template <typename T>
LinkedList<T>::~LinkedList () {
    Node<T>* n = this->m_head;
    while (n) {
        Node<T> *aux = n;
        n = n->next;
	delete aux;
    }
}

template <typename T>
void LinkedList<T>::insertAtStart(T data)
{
    Node<T>* temp = new Node<T>();
    temp->data = data;
    temp->next = this->m_head;
    this->m_head = temp;
    this->length++;
    if(length == 1)
    {
        m_tail = m_head;
    }
}

template <typename T>
void LinkedList<T>::printFromStart()
{
    Node<T>* temp = this->m_head;
    while(temp)
    {
        std::cout << temp->data << " ---> ";
        temp = temp->next;
    }
    std::cout << "\n";
}

template class LinkedList<int>;
template class LinkedList<char>;
template class LinkedList<std::string>;
template class LinkedList<float>;
template class LinkedList<double>;

/*
 *
 * void LinkedList::remove (int data) {
 *     Node *curr = this->m_head;
 *     Node *next = NULL;
 *
 *     // node to delete is on HEAD
 *     if (curr && curr->data == data) {
 *         next = curr->next;
 *         this->m_head = next;
 * 	delete curr;
 *         return ;
 *     }
 *
 *     // node to delete is after head
 *     while (curr) {
 *         next = curr->next;
 *         if (next && next->data == data) {
 *             curr->next = next->next;
 * 	    delete next;
 *             return ;
 *         }
 *         curr = next;
 *     }
 * }
 *
 * void LinkedList::reverse () {
 *     Node *curr = this->m_head;
 *     Node *next = NULL;
 *     Node *prev = NULL;
 *
 *     while (curr) {
 *         next = curr->next;
 *         curr->next = prev;
 *         prev = curr;
 *         curr = next;
 *     }
 *     this->m_head = prev;
 * }
 *
 * Node* LinkedList::search (int data) {
 *     Node *n = this->m_head;
 *     while (n) {
 *         n = n->next;
 *         if (n->data == data)
 *             break;
 *     }
 *     return n;
 * }
 */

