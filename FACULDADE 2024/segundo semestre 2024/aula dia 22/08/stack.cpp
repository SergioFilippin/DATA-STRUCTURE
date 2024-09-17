#include "Stakc.h"
#include <iostream>
using namespace std;

#ifndef STACK_H
#define STACK_H

Stack::Stack(){
    top = 0;
}
bool Stack::Empty(){
    return top == 0;

}
/*nao implementaremos método full*/
/*informado pela alocação dinamica*/

void Stack::Push(int x){
    StackPointer p;
    p = new StackNode;
    if ( p == 0){
        cout << "Nao ha espaco para mais elementos na pilha " << endl;
        abort();
    }   
    p ->Entry = x;
    p->NextNode= top;
}
    void Stack::Pop(int &x){
       if(Empty()){
        cout << "nao ha elementos para remover" << endl;
        abort();
       } 
       x = top-> Entry;
       StackPointer p = top;
       top = top ->NextNode;
       delete p;
    }

    void Stack::Clear(){
        int x;
        while(!Empty()){
            Pop(x);
        }
    }

Stack::~Stack(){
    Clear();
}


#endif