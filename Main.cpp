#include <iostream>
using namespace std;

class LibraryBook {
public:
    string bookTitle;
    string bookID;
    string authorName;
    bool isAvailable;

    void addBook() {
        cout << "Enter Book Title: ";
        getline(cin, bookTitle);

        cout << "Enter Book ID: ";
        getline(cin, bookID);

        cout << "Enter Author Name: ";
        getline(cin, authorName);

        isAvailable = true;
    }

    void borrowBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "Book is currently not available.\n";
        }
    }

    void returnBook() {
        isAvailable = true;
        cout << "Book returned successfully.\n";
    }

    void displayBook() {
        cout << "\n----- BOOK DETAILS -----\n";
        cout << "Title: " << bookTitle << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Author: " << authorName << endl;
        cout << "Availability: ";
        if (isAvailable)
            cout << "Available\n";
        else
            cout << "Borrowed\n";
    }
};

int main() {
    LibraryBook lb;
    lb.addBook();
    lb.displayBook();

    lb.borrowBook();
    lb.displayBook();

    lb.returnBook();
    lb.displayBook();

    return 0;
}