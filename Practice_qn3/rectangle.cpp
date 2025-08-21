#include <iostream>

class rectangle{
    int length;
    int breadth;
    public:
        rectangle(){}
        rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        void calc_area(){
            std::cout<<"Area of rectangle = " << length * breadth << std::endl;
        }
};

int main(){
    int x,y;
    std::cout<<"Enter length and breadth of rectangle:" << std::endl;
    std::cin>> x >> y;

    rectangle r1(x,y);
    r1.calc_area();
    return 0;
}