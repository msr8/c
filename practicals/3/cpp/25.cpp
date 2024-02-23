#include <iostream>
using namespace std;


class Media {
protected:
    string title;
    float price;
public:
    Media(string title, float price) {
        this->title = title;
        this->price = price;
    }
    virtual void display() {}
};

class Book : public Media {
private:
    int pages;
public:
    Book(string title, float price, int pages) : Media(title, price) {
        this->pages = pages;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Media {
private:
    float time;
public:
    Tape(string title, float price, float time) : Media(title, price) {
        this->time = time;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Time: " << time << endl;
    }
};


int main() {
    Media* obj1 = new Book("Harry Potter", 500, 100);
    Media* obj2 = new Tape("Avengers", 1000, 2.5);

    obj1->display();
    cout << endl;
    obj2->display();

    return 0;
}
