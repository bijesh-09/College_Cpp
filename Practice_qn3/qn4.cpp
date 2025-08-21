#include <iostream>

class student{
    int roll;
    public:
        student(int r){
            roll = r;
        }
        void display(){
            std::cout << roll << std::endl;
        }
        ~student(){
            std::cout << "Destructor executed!!" << std::endl;

        }
};

int main(){
    student s1(1);
    s1.display();
    student s2 = s1;
    s2.display();
    return 0;
}