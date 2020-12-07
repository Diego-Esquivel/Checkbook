template<class ItemType>
ArrayList<ItemType>::ArrayList() : itemCount(0), maxItems(DEFAULT_CAPACITY){

}
   // Copy constructor and destructor are supplied by compiler
template<class ItemType>  
bool ArrayList<ItemType>::isEmpty() const{
    return !static_cast<bool>(itemCount);
}
template<class ItemType>
int ArrayList<ItemType>::getLength() const{
    return itemCount;
}
template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry){
    int i = newPosition-1;
    ItemType entry1 = items[i].getEntry();
    ItemType entry2;
    for(i = newPosition; i < itemCount; i++){
        entry2 = items[i + 1].getEntry();
        items[i].set(entry1);
        entry1 = entry2;
    }
    
    i = newPosition - 1;
    items[i].set(newEntry);
    return true;
}
template<class ItemType>
bool ArrayList<ItemType>::remove(int position){
    int i = newPosition-1;
    auto entry1 = items[i];
    auto entry2 = items[i+1].getEntry();
    for(i = position - 1; i < itemCount; i++){
        items[i].set(entry2);
    }
}
template<class ItemType>
void ArrayList<ItemType>::clear(){

}
  
   /** @throw  PrecondViolatedExcept if position < 1 or position > getLength(). */
template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcept){

}

   /** @throw  PrecondViolatedExcept if position < 1 or position > getLength(). */
template<class ItemType>
void ArrayList<ItemType>::setEntry(int position, const ItemType& newEntry) 
                               throw(PrecondViolatedExcept){

                               }