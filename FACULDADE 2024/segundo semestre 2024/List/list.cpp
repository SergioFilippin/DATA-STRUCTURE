#include "list.h"
#include <iostream>
using namespace std;

#ifndef LIST_H
#define LIST_H


list::list(){
    count =0;
}

list::~list(){
    cout << "lista destruida" << endl;
}

bool list::empty(){
     return count ==0;
}

bool list::full(){
    return count==MaxList;
}

void list::insert(int x, int p){
    if(full()){
        cout << "lista cheia, sem espaco para novo elemento" << endl;
        abort();
    }
    if( p < 1 || p > count + 1){
        cout << "posicao invalida" <<endl;
        abort();
    }
    for (int i = count; i >=p; i--){
        entry [i+1]= entry[i];
    }
    entry[p] = x;
    count ++;
}
void list::Delete(int &x, int p){
    if (empty()){
        cout << "lista vazia nao ha elementos para retirar"<<endl;
        abort();
    }
    if (p < 1 || p > count){
        cout << "posicao invalida" << endl;
        abort();
    }
    for(int i = p; i<=count; i++){
        entry[i] = entry[ i +1];
    }
    count --;
}

int list::size(){
    return count;
}
void list::clear(){
    count =0;
}



#endif