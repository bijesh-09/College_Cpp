#include<iostream>

class op{
    int value;
    public:
        op(){
            value = 10;
        }
        op(int a){
            value = a;
        }
        op operator ++(){
            return op(++value);
        }
        int show(){
            return value;
        }
};
int main(){
    op o1,o2;
    std::cout<<"o1 Before = "<<o1.show() <<std::endl;
    std::cout<<"o2 Before = "<<o2.show() <<std::endl;
    o2 = ++o1;
    std::cout<<"o1 after = "<<o1.show() <<std::endl;
    std::cout<<"o2 after = "<<o2.show() <<std::endl;
    ++o1;
    std::cout<<"o1 again = "<<o1.show() <<std::endl;
    return 0;
}