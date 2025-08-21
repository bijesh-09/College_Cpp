#include <iostream>

int& compare (int& x, int& y ){//return type is reference var
    if (x>y) {
        return x;
    }
    else {
        return y;
    }
}

int main(){
    int a , b;
    std::cout<<"Enter any two nums:"<<std::endl;
    std::cin>>a>>b;
    int result =  compare(a,b);
    std::cout<<"Greater = "<<result<<std::endl;
    return 0;
}