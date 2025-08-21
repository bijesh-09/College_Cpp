#include <iostream>
#include <cstdlib>

int sum(int a , int b){
    return a+b;
}
int diff(int a , int b){
    return a-b;
}
int product(int a , int b){
    return a*b;
}
double division(int a , int b){
    if (b==0) {
        std::cout<<"The denominator is zero."<<std::endl;
        std::cout<<"This will result undefined value."<<std::endl;
        std::cout<<"Try again."<<std::endl;
        std::cout<<"Terminating program..."<<std::endl;
        exit(1);
    }
    return double(a)/b;
}
int main(){
    int x,y;
    std::cout<<"Enter any two numbers:"<<std::endl;
    std::cin>>x>>y;
    char ch;
    std::cout<<"Enter any choice:"<<std::endl
            <<"A. Addition"<<std::endl
            <<"B. Subtraction"<<std::endl
            <<"C. Multiplication"<<std::endl
            <<"D. Division"<<std::endl;
    std::cin>>ch;

    switch (ch) {
        case 'A':
        case 'a':
            std::cout<<"Sum = "<<sum(x, y)<<std::endl;
            break;
        case 'B':
        case 'b':
            std::cout<<"Difference = "<<diff(x, y)<<std::endl;
            break;
        case 'C':
        case 'c':
            std::cout<<"Product = "<<product(x, y)<<std::endl;
            break;
        case 'D':
        case 'd':
            std::cout<<"Quotient = "<<division(x, y)<<std::endl;
            break;
        default:
            std::cout<<"Invalid Choice!"<<std::endl;
            std::cout<<"Please, Try again!"<<std::endl;
            break;
            
    }


    return 0;
}
