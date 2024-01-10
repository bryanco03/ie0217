#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
    private: 
        int items[SIZE], front , rear;

    public:
        Queue(){
            front = -1;
            rear =  -1;
        }

        bool isEmpty(){
            if (front == -1){
                return true;
            }
            else {
                return false;
            }
        }

        bool isFull(){
            if (front == 0 && rear == SIZE -1){
                return true;
            }
            else {
                return false;
            }
        }
        void enQueue(int element){
            if (isFull()){
                cout << "Queue llena";
            }
            else{
                if (front == -1) front =0;
                rear++;
                items[rear] = element;
                cout << endl <<"Elemento introducido: " << element << endl;
            }
        }
        int deQueue(){
            int element;
            if (isEmpty()){
                cout << "Queue Vacia" << endl;
                return -1;
            }
            else{
                element = items[front];
            if (front >= rear){
                front = -1;
                rear = -1;
            } // solo habia un elemento, por lo cual se reinicia
            else{
                front++;
            }
            cout << endl<< "Elemento eliminado->" << element <<endl;
            return (element); 
            }
        }
        void display(){
            int i;
            if (isEmpty()){
                cout <<endl << "Queue Vacia" << endl;
            }
            else{
                cout << endl << "Front Index-> "<< front <<endl;
                cout << endl << "Items->";
                for (i = front; i <= rear; i++){
                    cout << items[i] << " ";
                }
                cout << endl << "Rear Index-> "<< rear <<endl;
                }
        }

};

int main(){
    Queue q;

    // no es posible debido a que esta vacia
    q.deQueue();

    // añadiendo 5 elementos
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // El sexto no se puede añadir debidoa que la queue esta llena
    q.enQueue(5);

    q.display();

    // quitar un elemento
    q.deQueue();

    q.display();
}