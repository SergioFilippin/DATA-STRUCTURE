#include "list2.h"
#include <iostream>
using namespace std;

#ifndef LIST2_H
#define LIST2_H

List::List(){
    count = 0;
    head = NULL;
}

List::~List(){
    ListPointer q;
    while(head != NULL){
        q = head;
        head = head->NextNode;
        delete q;
    }
}

bool List::Empty(){
    return head == NULL;
}

void List::Insert(int x, int p){
    if(p < 1 || p > count + 1){
        cout << "Posicao invalida" << endl;
        abort();
    }

    ListPointer NewNode;
    NewNode = new ListNode;
    if(NewNode == NULL){
        cout << "Falha na alocacao de memoria!" << endl;
        abort();
    }

    NewNode->Entry = x;
    if(p == 1){
        NewNode->NextNode = head;
        head = NewNode;
    } else {
        ListPointer q;
        SetPosition(p - 1, q);
        NewNode->

    }
#endif
