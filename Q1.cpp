#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    string publisher;

public:
    Book(string t, string a, string p)
        : title(t), author(a), publisher(p) {}

    void display() {
        cout << "Title     : " << title << endl;
        cout << "Author    : " << author << endl;
        cout << "Publisher : " << publisher << endl;
    }
};

class FictionBook : public Book {
private:
    string genre;
    string protagonist;

public:
    FictionBook(string t, string a, string p, string g, string pro)
        : Book(t, a, p), genre(g), protagonist(pro) {}

    void display() {
        cout << "//////// Fiction Book Details //////////" << endl;
        Book::display();
        cout << "Genre       : " << genre << endl;
        cout << "Protagonist : " << protagonist << endl;
        cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
    }
};

int main() {
    FictionBook fb("Les Miserables",
                   "Victor Hugo",
                   "A. Lacroix, Verboeckhoven & Cie",
                   "Historical Fiction",
                   "Jean Valjean");

    fb.display();
    return 0;
}
