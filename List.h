//
// Created by hartings on 23.05.18.
//

#ifndef OOA3_LIST_H
#define OOA3_LIST_H

#include "Execption.h"


template <class T>
class List{
private:
    Entry<T> *_head, *_tail;
    unsigned int listSize;
public:


    List<T>(){
        _head = nullptr;
        listSize = 0;
    }

    unsigned int getListSize(){
        return listSize;
    }

    T getValueAtPos(unsigned int pos){
        Entry<T> *referenceEntry;
        unsigned int count;

        if(listSize < pos)
            throw MyExecption("Error: Out of bounds.");

        referenceEntry = _head;

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

#endif //OOA3_LIST_H
