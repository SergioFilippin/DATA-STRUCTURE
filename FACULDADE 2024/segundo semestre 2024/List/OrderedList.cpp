#include "OrderedList.h"
#include <iostream>

using namespace std;

#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H

OrderedList::OrderedList(){
    sentinel = new ListNode;
    if(sentinel == NULL){
        cout << "memoria insuficiente" << endl;
        abort();
    }
    head = sentinel;
    count = 0;
}
OrderedList::~OrderedList(){
    ListPointer q;
    while(head != sentinel){
        q = head;
        head = head ->NextNode;
        delete q;
    }
    delete sentinel;
}

bool OrderedList::Empty(){
    return head == sentinel;
}

void OrderedList::Insert(int x){
    ListPointer p, q;
    sentinel -> Entry= x;
    p= head;

    while(p -> Entry < x){
        p = p ->NextNode;
    }
    q = new ListNode;
    if (q == NULL){
        cout << "Memoria insuficiente" << endl;
        abort();
    }
    if( p == sentinel){
        p ->NextNode = q;
        sentinel = q;
    }
    else{
        *q = *p;
        p->Entry = x;
        p ->NextNode = q;   
    }
    count ++;
}

int OrderedList::Size(){
    return count;
}

void OrderedList::Delete(int x){
    ListPointer p = NULL, q = head;
    sentinel ->Entry = x; 

    while (q->Entry < x){
        p = q; 
        q = q->NextNode;
    }
    if(q ->Entry != x || q == sentinel){
        cout << "elemento nao encontrado!" << endl;
        abort();
    }
    if (q == head){
        head = head ->NextNode;
    }else{
        p->NextNode = q ->NextNode;
    }
    delete q;
    count --;
    
}










#endif