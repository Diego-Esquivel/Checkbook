template<class ItemType>
Node<ItemType>* LinkedList<ItemType>::getNodeAt(int position) const{
    Node *cur = headPtr;
      
      int i = 2;

      for (; i < position && cur->next; i++)
        cur = cur->next;

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
    Node *cur = getNodeAt(newPosition - 1);
    Node *ent = cur->next;
    cur->next = Node(newEntry);
    cur->next->next = ent;
    itemCount++;
    return true;
}
template<class ItemType>
bool LinkedList<ItemType>::remove(int position){
    if(position == 1){
        headPtr = head->next;
        itemCount--;
        return true;
    }
    Node *cur = getNodeAt(newPosition - 1);
    Node *ent = cur->next->next;
    
    cur->next = ent;
    itemCount--;
    return true;
}
template<class ItemType>
void LinkedList<ItemType>::clear(){
    ~LinkedList();
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
void LinkedList<ItemType>::replace(int position, const ItemType& newEntry)
                              throw(PrecondViolatedExcept){
                                  getNodeAt(position)->setItem(newEntry);
                              }