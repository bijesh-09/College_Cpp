#include <iostream>

class student{
    static int count;
    public:
        static void display(){
            std::cout<<count<<std::endl;
            count++;

        }
};

int student::count = 0;

int main(){
    student::display();
    student::display();
    student::display();
}