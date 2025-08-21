#include <iostream>
#include "mul.cpp"
int main(){
    auto i = 21.3;
    if (i>20) {
        int n = 100;
        std::cout<<"n = "<<n<<std::endl;
    }
    extern int test;
    mul(3);
    std::cout<<"From other file, test = "<<test<<std::endl;
    mutable int var = 23;
    return 0;
}