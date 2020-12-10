#ifndef _LIST_INTERFACE
#define _LIST_INTERFACE

template <class Type>
class ListInterface {
public:
	virtual bool isEmpty() const = 0;
	virtual bool insert(int newPosition, const Type& newEntry) = 0;
	virtual bool insertToEnd(const Type& newEntry) = 0;
	virtual bool remove(int position) = 0;
	virtual bool removeEnd() = 0;
	virtual void clear() = 0;
	virtual Type getEntry(int position) const = 0;
	virtual Type getFront() const = 0;
	virtual Type replace(int position, Type newEntry) = 0;
	
};
#endif