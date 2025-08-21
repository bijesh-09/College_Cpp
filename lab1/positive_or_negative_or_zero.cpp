#include <iostream>

void isPositive(int n){
    if (n>0) {
        std::cout<< n << " is positive" << std::endl; 
    }
    else if (n<0) {
    
        std::cout<< n << " is negative" << std::endl; 
    } 
    else {
        
        std::cout<< n << " is zero" << std::endl; 
    }
}

int main(){
    int num;
    std::cout << "Enter a number" << std::endl; 
    std::cin>>num;
    isPositive(num);
    
    return 0;
}