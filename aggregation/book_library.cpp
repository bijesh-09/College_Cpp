#include<iostream>

class Book{
    int book_id;
    std::string author;
    public:
        Book(){
            book_id = 1234;
            author = "Shazon";
        }
        void display(){
            std::cout << "Book Id = "<< book_id 
                      << std::endl << "Author = " << author <<std::endl;
        }       
        
};
class Library{
    Book b;
    public:
        Library(){
            b.display();
        }
};
int main(){
    Library l;
    return 0;
}