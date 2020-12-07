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
    int i = newPosition;
    for(i = maxItems - 1; i > newPostion; i--){
        item[i+1] = item[i];
    }
    
    i = newPosition - 1;
    items[i] = newEntry;
    return true;
}
template<class ItemType>
bool ArrayList<ItemType>::remove(int position){
    for(i = position; i < itemCount; i++){
        items[i] = items[i+1];
    }
    items[itemCount] = null;
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