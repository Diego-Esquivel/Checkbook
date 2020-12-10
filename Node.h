#ifndef NODE_
#define NODE_

template<class Type>
class Node {
private:
	Type item;
	Node<Type>* next;
	
public:
	Node();
	Node(Type item);
	Node(Type item, Node<Type>* nextNodePtr);

	void setItem(Type item);
	void setNext(Node<Type>* nextNodePtr);
	Type getItem();
	Node<Type>* getNext();
};

#include "Node.cpp"
#endif