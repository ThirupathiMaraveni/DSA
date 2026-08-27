#include <iostream>
using namespace std;
// int libraryCode = 101;
class libraryBook{
    public:
    int bookId;
    string bookName;
    string author;
    double price;
    static int totalBooks;
    

void inputBook(){
    cout<<"Enter bookId: ";
    cin>>bookId;
    cout<<"Enter book Name: ";
    cin>>bookName;
    cout<<"Enter author Name: ";
    cin>>author;
    cout<<"Enter price of the book: ";
    cin>>price;
    cout<<"Total books: ";
    cin>>totalBooks;

}
void dispalyBook(){
    cout<<"Book id: "<<bookId<<endl;
    cout<<"Book Name: "<<bookName<<endl;
    cout<<"author: "<<author<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Total Books: "<<totalBooks;
}

//void searchBook(int id){

//}
//void searchBook(string name){

//}
void displayPrice(double discount=0){
    if (discount != 0){
        price = price - discount;
        cout<<"Total Price after Discount: "<<price<<endl;
    }
    else{
        cout<<"Original Price"<<price<<endl;
    }
}
};



int main()
{
    //int libraryCode = 202;
     libraryBook obj1;
     obj1.bookId;
     obj1.bookName;
     obj1.author;
     obj1.price;
     obj1.totalBooks;
    obj1.inputBook();
    obj1.dispalyBook();
     libraryBook obj2;
     obj2.bookId;
     obj2.bookName;
     obj2.author;
     obj2.price;
     obj2.totalBooks;
    obj2.inputBook();
    obj2.dispalyBook();
    // cout<<libraryCode;
    // cout<<::libraryCode;
}