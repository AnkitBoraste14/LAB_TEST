/*Q.No 1. Bookshop Management System
File handling has been effectively used for each feature of this project
Operations
1. Add Book Records:
2. Show Book Records:
 3. Check Availability:
4. Modify Book Records:
5. Delete Book Records: */

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class Bookshop{
		public:
			int book_id;
			string book_name;
			string author_name;
			int book_price;
};
	void addbook_rec() 
	{
    ofstream myfile;
    myfile.open("Bookshop.txt", ios::app);
    
    Bookshop book;
    cout << "Enter Book ID: ";
    cin >> book.book_id;
    cout << "Enter Book Name: ";
    cin >> book.book_name;
    cout << "Enter Book Author Name: ";
    cin >> book.author_name;
    cout << "Enter Book Price: ";
    cin>>book.book_price;
    
    myfile << book.book_id << " " << book.book_name << " " <<  book.author_name << " " << book.book_price << endl;
   myfile.close();
   
   cout << "Book Added Successfully.\n";
}
   
   void showbook_rec() 
   {
    ifstream myfile;
    myfile.open("Bookshop.txt");
    
    Bookshop book;
    cout << "Book Records: \n";
    while (myfile >> book.book_id >> book.book_name >> book.author_name>> book.book_price) {
        cout << "Book ID: " << book.book_id << ", Book Name: " << book.book_name << ", Author name: " << book.author_name << ", Book price: " << book.book_price << endl;
    }
    myfile.close();
}

int main()
{
	int choice;
    do {
        cout << "1. Add Book\n";
        cout << "2.  Show Book Record\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addbook_rec();
                break;
            case 2:
                showbook_rec();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}




























