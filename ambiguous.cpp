#include <iostream>

class car{
    int make;
    std::string brand;
    static int count;
    public:
        car(){
            make = 2025;
            brand = "BMW";
            count++;
        }
        static void display(){
            std::cout << "Total object = " <<count << std::endl;
        }
        void show(){
            std::cout << "Make year = " <<make << std::endl;
            std::cout << "Brand = " <<brand << std::endl;

        }
};

int car::count = 0;

int main(){
    car c1;
    c1.show();
    car::display();
    car c2;
    c2.show();
    car::display();
    
    return 0;
}