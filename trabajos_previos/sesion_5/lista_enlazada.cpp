#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// crear nodo 

class Node{
    public:
        int value;
        Node* next;
};

int main(){
    
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;


    // reservar memoria
    one = new Node();
    two = new Node();
    three = new Node();

    // Asignar valores a los nodos
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Conectar nodos
    one->next = two;
    two->next = three;
    three->next = NULL;


    // Imprimir la lista

    head = one;
    while (head != NULL){
        cout <<head->value;
        head =  head->next;
    }

    return 0;

}