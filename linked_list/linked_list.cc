#include <iostream>
#include <linked_list.h>

// constructor -initialize the head = tail = null and length of the list  = 0
template <typename T>
LinkedList<T>::LinkedList () {
    this->m_head = NULL;
    this->length = 0;
}

// deconstructor- clear the dynamically allocated memory
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
    // create a new Node and store a pointer to it.
    Node<T>* temp = new Node<T>();
    // add data into the node, and point this node the current head
    temp->data = data;
    temp->next = this->m_head;
    // head of the list is now the new node.
    this->m_head = temp;
    //length of list increases by 1
    this->length++;
}

template <typename T>
void LinkedList<T>::printFromStart()
{
    //begin traversing from the head
    Node<T>* temp = this->m_head;
    // while the traversal pointer (temp) is not pointing to null
    while(temp)
    {
        //print data
        std::cout << temp->data << " ---> ";
        //jump to next node
        temp = temp->next;
    }
    std::cout << "\n";
}

template <typename T>
void LinkedList<T>::removeData(T data)
{
    Node<T>* curr = this->m_head;
    Node<T>* next = NULL;


    // first we check, if what we are deleting is in the head itself
    // if yes, then next node becomes head and we delete the old head
    if(curr && curr->data == data)
    {
        this->m_head = curr->next;
        std::cout << "Deleted: " << curr->data << " New Length is " << --length << std::endl;
        delete curr;
        return;
    }
    // having made sure that we aren't deleting the head, we iterate over the following node
    while(curr)
    {
        //looking one step ahead, if we are suppose to delete the next node
        next = curr->next;
        //if we yes, the current just points to the next of next
        if(next && next->data == data)
        {
            curr->next = next->next;
            std::cout << "Deleted: " << next->data << " New Length is " << --length << std::endl;
            //delete next when current safely points to next of next
            delete next;
            return;
        }
        curr = curr->next;
    }
    // in our remove implementation, the assumption is that the element to be removed definitely exists.
    // hence, we can be sure that something got removed when this function is called.
}

template <typename T>
void LinkedList<T>::updateAtIndex(T data, int index)
{
    //if the index is not in the range of the list, return error
    if(index > (length-1))
    {
        std::cout << "Invalid index\n";
        std::cout << (length-1) << index;
        return;
    }

    //start from head
    Node<T>* temp = this->m_head;
    int i = 0;
    while(temp)
    {
        // if the index is reached, change the data at that index
        if(i==index)
        {
            std::cout <<"Updating " << temp->data << " to " << data << std::endl;
            temp->data = data;
            return;
        }
        i++;
        temp = temp->next;
    }
}
template <typename T>
void LinkedList<T>::reverseList()
{
    std::cout << "Reversing list using iterative method:\n";
    reverseIterative(this->m_head);
    std::cout << "Reveresed list below\n";
    printFromStart();
    std::cout << "Reversing same list using recursive method:\n";
    m_head = reverseRecursive(this->m_head);
    std::cout << "Reveresed list below\n";
    printFromStart();
}

template <typename T>
Node<T>* LinkedList<T>::reverseRecursive(Node<T>* _node)
{
    if(_node==nullptr || _node->next == nullptr)
    {
        //std::cout << "Most latest head is " << _node->data << "\n";
        return _node;
    }

    //std::cout << "Current node passed to the recursive function is " << _node->data << "\n";
    Node<T>* newHead = reverseRecursive(_node->next);
    //std::cout << "After recursion we are here " << _node->data <<"\n";
    _node->next->next = _node;
    _node->next = nullptr;
    return newHead;
}

template <typename T>
void LinkedList<T>::reverseIterative(Node<T>* _head)
{
    //best explaination of this is given at: https://www.geeksforgeeks.org/reverse-a-linked-list/
    Node<T>* prev = nullptr;
    Node<T>* next = nullptr;
    Node<T>* current = _head;

    while(current!=nullptr)
    {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    }
    m_head = prev;
}




template class LinkedList<int>;
template class LinkedList<char>;
template class LinkedList<std::string>;
template class LinkedList<float>;
template class LinkedList<double>;


