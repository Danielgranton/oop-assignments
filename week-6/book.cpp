// BCS-05-0068/2025
// Sifuna Daniel Granton
// Library management system   

#include <iostream>
#include <string>

using namespace std;

class Book {
    public:
        string bookTitle, Author;
        int copies = 0;

    void inputDetails() {
        
        for (int i = 1; i <= 3; i++ ) {

            if ( i == 1 ) {

                cout << i << ".Enter the book title:  ";
                getline(cin, bookTitle);

            } else if ( i == 2 ) {

                cout << i << ".Enter the author name: " ;
                getline(cin, Author);

            } else if ( i == 3 ) {

                cout << i << ".Enter the number of copies: " ;
                cin >> copies;
                cin.ignore();

            }
        }
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "You have borrowed the book: " << bookTitle << endl;
        } else {
            cout << "Sorry, the book is not available for borrowing." << endl;  
        }
    }

    void displayDetails() {
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << Author << endl;
        cout << "Number of Copies: " << copies << endl;
    }

};


int main() {

    Book myBook;

    myBook.inputDetails();
    myBook.borrowBook();
    myBook.displayDetails();

    return 0;

}