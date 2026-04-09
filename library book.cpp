//Marshon Sellers

#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
    string book_title;
    int copies_available;

public:
    LibraryBook()
    {
        book_title = "C++ Basics";
        copies_available = 3;
    }

    void set_title(string new_title)
    {
        if (new_title.size() > 0)
        {
            book_title = new_title;
        }
    }

    string get_title()
    {
        return book_title;
    }

    int get_copies()
    {
        return copies_available;
    }

    void borrow_book()
    {
        if (copies_available > 0)
        {
            copies_available -= 1;
        }
        else
        {
            cout << "Not available!" << endl;
        }
    }
};


int main()
{
    LibraryBook book;
    string new_title;
    int requests;

    cin >> new_title;
    cin >> requests;

    book.set_title(new_title);

    for (int i = 0; i < requests; i++)
    {
        book.borrow_book();
    }

    cout << "Title: " << book.get_title() << endl;
    cout << "Copies left: " << book.get_copies() << endl;

    return 0;
}
