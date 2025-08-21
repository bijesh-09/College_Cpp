#include <iostream>
#include <cmath>

int isArmstrong(int n){
    int temp = n;
    int s = 0;
    while (n>0) {
        int r = n%10;
        s = s+ pow(r,3);
        n = n/10;
    }
    if (s==temp) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int num;
    std::cout << "Enter a number" << std::endl; 
    std::cin>>num;
    if (isArmstrong(num)) {
        std::cout<< num << " is Armstrong" << std::endl; 
        
    }
    else {
        std::cout<< num << " is not Armstrong" << std::endl; 
        
    }
    
    
    return 0;
}