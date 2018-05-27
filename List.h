//
// Created by hartings on 23.05.18.
//

#ifndef OOA3_LIST_H
#define OOA3_LIST_H

#include "Execption.h"

template <class T>
class Entry {
public:
    T _value;
    Entry<T> *_next;
    Entry(T value) {
        _value = value;
        _next = nullptr;
    }
};

template <class T>
class List{
private:
    Entry<T> *_head;
    Entry<T> *_tail;
    unsigned int listSize;
public:
    List<T>(){
        _head = nullptr;
        _tail = nullptr;
        listSize = 0;
    }

    unsigned int getListSize(){
        return listSize;
    }

    T getValueAtPos(unsigned int pos){ //TODD: ueberpruefen
        Entry<T> *referenceEntry = _head;
        unsigned int count;

        if(listSize < pos)
            throw MyExecption("Error: Out of bounds.");

        do {
            referenceEntry = referenceEntry->_next;
            count++;
        } while (count < pos);
        return referenceEntry->_value;
    }

    void insertNewEntry(T value){
        Entry<T> *entry = new Entry<T>(value);
        if(!listSize){
            _head = entry;
            _tail = entry;
        } else {
            _tail->_next = entry;
            _tail = entry;
        }
        listSize++;
    }

   T getHeadElement(void) {
        return _head;
    }
    /*
    T getTailElement(void) {
        return _tail;
    }
*/

};

#endif //OOA3_LIST_H
