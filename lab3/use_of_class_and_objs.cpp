#include <iostream>

class rectangle{
    public:
        double length;
        double breadth;
        void calc_area();

};
void rectangle :: calc_area(){
    double area = length * breadth;
    std::cout << "Area of rectangle = " << area << std::endl;
}

int main(){
    rectangle r1;
    r1.length = 17;
    r1.breadth = 4;
    r1.calc_area();
    return 0;
}