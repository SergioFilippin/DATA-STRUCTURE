#include "queue2.h"
#include <iostream>
using namespace std;

#ifndef QUEUE_H
#define QUEUE_H

Queue::Queue(){
    count = 0;
    head = tail = NULL;
}
// DESTRUTOR
Queue::~Queue(){
    //Clear
    int x;
    while(!Empty()){
        Serve(x);
    }
}
bool Queue::Empty(){
    return head== NULL;
}
//nao eh preciso implementar full()
//sera verificado pela logica do append()

void Queue::Append(int x){
    QeuePointer p;

    p= new QueueNode;
    if (p == NULL){
        cout << "memoria insuficiente!" << endl;
        abort();
    }
    p-> Entry =x;
    p->NextNode = NULL;
    count ++;

    if(Empty()){
        head = tail =p;

    }else{

    tail -> NextNode= p;
    tail =p;
}
}
void Queue::Serve(int &x){
    if (Empty()){
        cout << "Fila vazia nao ha elementos para servir."<< endl;
        abort();
    }
    QeuePointer p = head;
    x = head -> Entry;
    count --;
    head = head -> NextNode;
    delete p;
    if (head == NULL)
        tail = NULL;
}

void Queue::Clear(){
    int x;
    while(!Empty()){
        Serve(x);
    }
}

int Queue::Size(){
    return count;
}

void Queue::Front(int &x){
    if(Empty()){
        cout<< "Nao ha elementos no inicio da fila!"<< endl;
        abort();
    }
    x = head ->Entry;
}

void Queue::Rear(int &x){
    if(Empty()){
        cout << "nao ha elemento no final da fila" << endl;
        abort();
    }
    x = tail->Entry;
}
#endif
