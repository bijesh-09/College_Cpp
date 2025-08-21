#include<iostream>

class student{
    int roll;
    std::string name;
    public:
        student(int r, std::string nm){
            roll = r;
            name = nm;
        }
        student(student &s){
            roll = s.roll;
            name = s.name;
        }
        void show(){
            std::cout<<"Name = "<<name<<std::endl;
            std::cout<<"Roll = "<<roll<<std::endl;
        }

};
int main(){
    student s1(1,"Ram"), s2 = s1;
    s1.show();
    s2.show();
    return 0;
}