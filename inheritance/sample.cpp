#include<iostream>

class base{
    public:
        int a;
    protected:
        int b;
    private:
    int c;
    public:
        base(){
            a=23; b= 50; c=234;
        }
};

class derived1 : public base{
    public:
    void display(){
        std::cout<<a<<" "<<b<<std::endl;
    }
};
int main(){
    derived1 d1;
    d1.display();
    return 0;
}