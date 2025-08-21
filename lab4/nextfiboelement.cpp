#include<iostream>

class fibo{
    int a, b;
    public:
        fibo(){
            std::cout<<"Enter any two consecutive elements in fibonnaci series:"<<std::endl;
            std::cin>>a>>b;
        }
        void operator ++(int){
            std::cout<<"The next element in fibonnaci series is: "<< a + b<<std::endl;
        }   
};

int main(){
    fibo f1;
    f1++;
    return 0;
}