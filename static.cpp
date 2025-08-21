#include <iostream>

class car{
    static int carNumber;  // Declaration of static member variable
    public:
        car(){
            std::cout << "This is car number:" << carNumber << std::endl;
            carNumber++;
        }
};

int car::carNumber = 0;  // Definition of static member variable

int main(){
    car c1,c2,c3;
    return 0;
}