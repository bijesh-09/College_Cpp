#include<iostream>

class number{
    int a,b;
    public:
        number(int a=1, int b=2){
            this->a = a;
            this->b = b;
        }
        friend void sumDisplay();
    };
void sumDisplay(){
    number n;
    std::cout<<"Sum = "<<n.a+n.b<<std::endl;
        
}
int main(){
    number n;
    sumDisplay();
    return 0;
}