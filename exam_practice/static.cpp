#include<iostream>

class student{
    int roll;
    static int count;
    public:
        void setData(){
            std::cout<<"Enter roll:"<<std::endl;
            std::cin>>roll;
            count++;
        }
        static void show(){
            std::cout<<"Count = "<<count<<std::endl;
        }
};
int student::count ;

int main(){
    student s;
    s.show();
    student::show();
    s.setData();
    student::show();
    return 0;
}