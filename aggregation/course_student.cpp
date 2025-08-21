#include<iostream>

class student{
    int roll;
    std::string name;
    public:
        student(){
            roll = 1;
            name = "Shazon";
        }
        void display(){
            std::cout << "Roll = "<< roll 
                      << std::endl << "Name = " << name <<std::endl;
        }       
        
};
class course{
    student s;
    public:
        course(){
            s.display();
        }
};
int main(){
    course c;
    return 0;
}