#ifndef LINKED_LIST_
#define LINKED_LIST_

#include "Node.h"
#include "ListInterface.h"

template<class Type>
class LinkedList : public ListInterface<Type> 
{
private:
	Node<Type>* headPtr;
	int itemCount;
	Node<Type>* getNodeAt(int position) const;
	
public:
	LinkedList();
	LinkedList(const LinkedList& list);
	~LinkedList();

	bool isEmpty() const;
	int getLength() const;
	bool insert(int newPosition, const Type& newEntry);
	bool insertToEnd(const Type& newEntry);
	bool remove(int position);
	bool removeEnd();
	void clear();
	Type getEntry(int position) const;
	Type getFront() const;
	Type replace(int position, Type newEntry);
	LinkedList<Type> operator =(const LinkedList& right);
};

#include "LinkedList.cpp"
#endif