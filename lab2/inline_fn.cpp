#include<iostream>

inline void sum(int a, int b){
    std::cout<<"Sum = "<<a+b<<std::endl;
}

int main(){
    int a,b;
    std::cout<<"Enter any two numbers:"<<std::endl;
    std::cin>>a>>b;
    sum(a,b);
    sum(a,b);
    sum(a,b);
    return 0;
}
