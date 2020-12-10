#include "Node.h"

template<class Type>
Node<Type>::Node() {
	next = NULL;
}
template<class Type>
Node<Type>::Node(Type item) {
	this->item = item;
	next = NULL;
}
template<class Type>
Node<Type>::Node(Type item, Node<Type>* nextNodePtr){
	this->item = item;
	next = nextNodePtr;
}

template<class Type>
void Node<Type>::setItem(Type item) {
	this->item = item;
	this->next = NULL;
}
template<class Type>
void Node<Type>::setNext(Node<Type>* nextNodePtr) {
	next = nextNodePtr;
}
template<class Type>
Type Node<Type>::getItem() {
	return item;
}
template<class Type>
Node<Type>* Node<Type>::getNext() {
	return next;
}