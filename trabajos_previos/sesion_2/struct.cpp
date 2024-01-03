#include <iostream>
#include <cstring>

using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id; 
};

int main(){
    struct Books Book1; // Se declara book1 de tipo Books
    struct Books Book2;  // Se declara book1 de tipo Books

    // Especificafiones de book1

    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ programming");
    Book1.book_id = 6495407;


    // Especificafiones de book2

    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Se Imprime la info de Book1

    cout << "Book 1 title:  " << Book1.title << endl;
    cout << "Book 1 author:  " << Book1.author << endl;
    cout << "Book 1 subject:  " << Book1.subject << endl;
    cout << "Book 1 Id:  " << Book1.book_id << endl;
    

    // Se Imprime la info de Book2

    cout << "Book 2 title:  " << Book2.title << endl;
    cout << "Book 2 author:  " << Book2.author << endl;
    cout << "Book 2 subject:  " << Book2.subject << endl;
    cout << "Book 2 Id:  " << Book2.book_id << endl;

    return 0;
}
