#include "LinkedList.h"

template<class Type>
Node<Type>* LinkedList<Type>::getNodeAt(int position) const {
	Node<Type>* node = headPtr;
	for (int i = 1; i < itemCount; i++) {
		node = node->getNext();
	}
	return node;
}

template<class Type>
LinkedList<Type>::LinkedList() {
	headPtr = NULL;
	itemCount = 0;
}

template<class Type>
LinkedList<Type>::LinkedList(const LinkedList& list) {
	headPtr = new Node<Type>();
	Node<Type>& node = headPtr;
	node.setItem(list.getFront());
	int i = 1;
	while (list.getNodeAt(i)) {
		node.setItem(list.getEntry(i));
		node.setNext(new Node<Type>());
		node = node.getNext();
		i++;
	}
	itemCount = i-1;
}

template<class Type>
LinkedList<Type>::~LinkedList() {
	delete[] headPtr;
}

template<class Type>
bool LinkedList<Type>::isEmpty() const{
	return (itemCount == 0);
}

template<class Type>
int LinkedList<Type>::getLength() {
	return itemCount;
}

template<class Type>
bool LinkedList<Type>::insert(int newPosition, const Type& newEntry) {
	if (newPosition > itemCount) {
		insertToEnd(newEntry);
	}
	else if (itemCount == 1) {
		Node<Type>* curr = new Node<Type>(newEntry);
		curr->setNext(headPtr);
		headPtr = curr;
		itemCount++;
	}
	else {
		Node<Type>* curr = getNodeAt(newPosition - 1);
		Node<Type>* ent = curr->getNext();
		curr->setNext(new Node<Type>(newEntry));
		curr->getNext()->setNext(ent);
		itemCount++;
	}
	return true;
}

template<class Type>
bool LinkedList<Type>::insertToEnd(const Type& newEntry) {
	if (itemCount == 0) {
		headPtr = new Node<Type>(newEntry);
		itemCount++;
	}
	else {
		getNodeAt(itemCount)->setNext(new Node<Type>(newEntry));
		itemCount++;
		getNodeAt(itemCount)->setNext(NULL);
	}
	return true;
}

template<class Type>
bool LinkedList<Type>::remove(int position) {
	Node<Type>* curr = getNodeAt(position - 1);
	Node<Type>* ent = getNodeAt(position + 1);
	curr->setNext(ent);
	itemCount--;
	return true;
}

template<class Type>
bool LinkedList<Type>::removeEnd() {
	Node<Type>* curr = getNodeAt(itemCount - 1);
	curr->setNext(NULL);
	itemCount--;
	return true;
}

template<class Type>
void LinkedList<Type>::clear() {
	itemCount = 0;
	this->~LinkedList();
}

template<class Type>
Type LinkedList<Type>::getEntry(int position) const{
	return getNodeAt(position)->getItem();
}

template<class Type>
Type LinkedList<Type>::getFront() const{
	return headPtr->getItem();
}

template<class Type>
Type LinkedList<Type>::replace(int position, Type newEntry) {
	Type return_val = getNodeAt(position)->getItem();
	getNodeAt(position)->setItem(newEntry);
	return return_val;
}

template<class Type>
LinkedList<Type> LinkedList<Type>::operator =(const LinkedList& right) {
	if (this != &right) {
		if (itemCount > 0)
			~LinkedList();
		itemCount = right->itemCount;
		headPtr = new Node(right->headPtr);
		
	}
	return *this;
}
