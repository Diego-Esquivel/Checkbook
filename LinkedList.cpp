#include "LinkedList.h"

template<class ItemType>
Node<ItemType>* LinkedList<ItemType>::getNodeAt(int position) const{
    Node<ItemType> *cur = headPtr;
      
      int i = 2;

      for (; i < position && cur->getNext(); i++)
        cur = cur->getNext();

      if (i != position) 
        throw std::out_of_range("Index is out of bounds");

      return cur;
}

template<class ItemType>
LinkedList<ItemType>::LinkedList() : headPtr(NULL), itemCount(0){

}
template<class ItemType>
LinkedList<ItemType>::LinkedList(const LinkedList<ItemType>& aList) : headPtr(aList), itemCount(aList.size()) {

}
template<class ItemType>
LinkedList<ItemType>:: ~LinkedList(){
    itemCount = 0;
    delete[] headPtr;
}

template<class ItemType>
bool LinkedList<ItemType>::isEmpty() const{
    return !(static_cast<bool>(itemCount));
}
template<class ItemType>
int LinkedList<ItemType>::getLength() const{
    return itemCount;
}
template<class ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry){
    Node<ItemType> *cur = getNodeAt(newPosition - 1);
    Node<ItemType> *ent = cur->getNext();
    cur->setNext(new Node<ItemType>(newEntry));
    cur->getNext()->setNext(ent);
    itemCount++;
    return true;
}
template<class ItemType>
bool LinkedList<ItemType>::remove(int position){
    if(position == 1){
        headPtr = headPtr->getNext();
        itemCount--;
        return true;
    }
    Node<ItemType> *cur = getNodeAt(position - 1);
    Node<ItemType> *ent = cur->getNext()->getNext();
    
    cur->setNext(ent);
    itemCount--;
    return true;
}
template<class ItemType>
void LinkedList<ItemType>::clear(){
    this->~LinkedList();
}
   
   /** @throw PrecondViolatedExcept if position < 1 or
                                       position > getLength(). */
template<class ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcept){
    return getNodeAt(position)->getItem();
}

   /** @throw PrecondViolatedExcept if position < 1 or
                                       position > getLength(). */
template<class ItemType>
ItemType LinkedList<ItemType>::replace(int position, const ItemType& newEntry)
                              throw(PrecondViolatedExcept){
                                  ItemType item = getNodeAt(position)->getItem();
                                  getNodeAt(position)->setItem(newEntry);
                                  return item;
                              }