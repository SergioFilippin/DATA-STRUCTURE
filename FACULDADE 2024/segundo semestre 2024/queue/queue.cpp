#include "queue.h"
#include <iostream>

using namespace std;

#ifndef QUEUE_H
#define QUEUE_H

Queue::Queue(){
    count = 0;
    tail = 0; 
    head = 1;
}

Queue::~Queue(){
    cout << "Fila destruida!" << endl;
}

bool Queue::Full(){
    return count == MaxQueue;
}

bool Queue::Empty(){
    return count == 0;
}
void Queue::Append(int x){
    if(Full()){
        cout<< "Fila cheia! nao ha espaco para novos elementos." << endl;
        abort();
    }
    tail = (tail % MaxQueue) + 1;
    Entry[tail] =x;
    count ++;
}
void Queue::Serve(int &x){
    if(Empty());{
        cout<< "Fila vazia! nao ha elemento para remover." << endl;
        abort();
}
    x = Entry[head];
    head = (head % MaxQueue) +1 ;
    count --;
}
int Queue::Size(){
    return count;
}
void Queue::Front(int &x){
    if (Empty()){
        cout << "Fila vazia! Sem elementos no inicio" << endl;
        abort();
    }
    x = Entry[head];
}

void Queue::Rear(int &x){
    if(Empty()){
        cout << "Fila vazia! Sem elemento no fim da fila" << endl
        abort();
    }
    x = Entry[tail];
}

void Queue::Clear(){
    int x;
}
#endif