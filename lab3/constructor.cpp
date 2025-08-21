#include <iostream>

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }

        Number(Number &obj){

            std::cout << "Copy constructor called!!!"<<std::endl;
            a=obj.a;
        }
        
        void display(){
            std::cout << "Number is: "<<a<<std::endl;
        }
};

int main(){
    Number z(45);
    z.display();
    Number z1(z);
    z1.display();
    return 0;
}
