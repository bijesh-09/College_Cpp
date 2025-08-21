#include <iostream>

int count =0;//global variable

class num{
    public:
        num(){
            count ++;
            std::cout<<"Constructor is called for object number: "<<count <<std::endl;
        }
        ~num(){ 
            std::cout<<"Destructor is called for object number: "<<count <<std::endl;
                count--;
        }
};
int main(){
    std::cout<<"Inside the main function"<<std::endl;
    std::cout<<"Creating object n1,n2,n3"<<std::endl;
    num n1, n2,n3;
    std::cout<<"Exiting the main function "<<std::endl;
    
    return 0;
}