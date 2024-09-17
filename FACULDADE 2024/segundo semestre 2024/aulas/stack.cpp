//Arquivo de implementação da classe Stack

#include "stack.h"
 using namespace std;
 #include <iostream>


#ifdef stack_h
#define stack_h

 Stack::Stack(){
    top =0;
 }

 Stack::Stack(){
    cout << "Pilha destuida. " << endl;
 }

 bool Stack::FULL(){
    return top == MaxStackSize;
 }
 bool Stack::EMPTY(){
    return top ==0;

 }

 void Stack::push(int x){
    if(FULL()){
        cout << "Pilha cheia!" << endl;
        abort();
    }
    x = entry [top];
    top--;
 }

 int Stack::size(){
    return top;
 }

 void Stack::Clear(){
    //possivel implementar com um laço de repetição
    top = 0;
 }

 void Stack::Top(int &x){
    if(EMPTY()){
        cout << "Não ha elementos no topo" << endl;
        abort();
    }
    x = entry[top];
 }
 #endif