//
// Created by hartings on 23.05.18.
//

#ifndef OOA3_LIST_H
#define OOA3_LIST_H

template <class T>
class Liste{
public:
    Entry<T> *_head , *_tail;
    unsigned int siZe;
    Liste<T>(){
        _head = NULL;
        _tail = NULL;
        siZe = 0;
    }
    unsigned int size(){
        return siZe;
    }
    T* getValueAt(int i){
        Entry<T> *temp;

        if(i>= siZe)
            throw;
        temp = _head;
        for(i;i>0;i--){
            temp = temp->_next;
        }
        return temp->_value;
    }
    void insert(T* value){
        Entry<T> *entry = new Entry<T>(value);
        if(_head == NULL){
            _head = entry;
            _tail = entry;

        }
        else {
            _tail->_next = entry;
            _tail = entry;
        }
        siZe++;
    }

    T search(T find){
        Entry<T*> *temp;
        while(temp != NULL){

        }
    }

};

#endif //OOA3_LIST_H
