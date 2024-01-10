
#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10

int size = 0;

// Creando la pila

struct stack
{
    int  items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st *s){
    s->top = -1;
}

// verificar si la pila esta llena
int  isfull(st *s){
    if (s->top == MAX - 1){
        return 1;
    }    
    else{
        return 0;
    }
    
}

// verificar si esta vacia

int  isempty(st *s){
    if (s->top == -1){
        return 1;
    }    
    else{
        return 0;
    }
    
}

// añadir elementos a la pila

void push (st *s, int newitem){
    if (isfull(s)){
        cout << "Pila LLena";
    }
    else{
        s->top++;
        s->items[s->top] = newitem;
    }
    size++;
}

// quitar elementos de la pila

void pop(st *s){
    if (isempty(s)){
        cout << "Pila vacia"<<endl;
    }
    else{
        cout << "Item quitado =" << s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}

// imprimir la pila

void printStack(st *s){
    cout << "Pila: " <<endl;
    for ( int i =0; i < size; i++ ){
        cout << s->items[i] << " ";
    }
    cout << endl;
}

int main(){
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);

    printStack(s);

    pop(s);

    cout <<"Despues de sacar un elemento"<< endl;

    printStack(s);

    return 0;

}

