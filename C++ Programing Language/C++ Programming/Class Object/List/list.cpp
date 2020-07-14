#include <cassert>
#include "list.h"

int Node::getData() const
{
    return this->data;
}

const Node* Node::getNext() const
{
    return this->next;
}

Node::Node(int data, const Node* next)
{
    this->data = data;
    this->next = (Node*)next;
}

std::ostream& operator<<(std::ostream& out, const List& rhs)
{
    rhs.print(out);

    return out;
}

void List::print(std::ostream& out) const
{
    Node* ptr = this->ptr->next;
    out << "[";
    while (ptr) {
        out << ptr->data << ((ptr->next) ? ", " : "");
        ptr = ptr->next;
    }
    out << "]";
}

List::List()
{
    this->ptr = new Node(-1, NULL);		// dummy node
}

List::~List()
{
    Node* ptr = this->ptr; // creating a pointer that points at Node type!
    while (ptr) {
        Node* tmp = ptr; // to delete without interfering with free 
        ptr = ptr->next;
        delete tmp;
    }
}

void List::insertFirstNode(int data)
{
    this->ptr->next = new Node(data, this->ptr->next);
}

void List::insertNode(int prevData, int data) {
    Node* ptr = this->ptr->next;
    while (ptr) {
        if (ptr->data == prevData)
            break;
        ptr = ptr->next;
    }

    if (ptr) {
        ptr->next = new Node(data, ptr->next);
    }
}

void List::deleteNode(int data) {
    Node* ptr1 = this->ptr->next;
    Node* ptr2 = this->ptr;

    while (ptr1) {
        if (ptr1->data == data)
            break;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if (ptr1) { //found the value
        ptr2->next = ptr1->next; //skipping the deleted node
        delete ptr1;
    }
}