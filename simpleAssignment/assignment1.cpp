/*
1. Create a class rectangle having public attributes: length and breadth.
a. Create a public function calc_area(). That calculates and displays area as
l*b.
b. Create an object r1 and set its length and breadth to 17 and 4 respectively.
c. Calculate and print the area of object r1.

*/

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

/*
Output:
Area of rectangle = 68
*/