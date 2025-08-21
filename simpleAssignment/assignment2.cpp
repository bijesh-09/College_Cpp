/*
2. Create a class cat having private attributes: breed, color and weight.
a. Create a public function setdetails() that accepts the data provided and
assigns to the private attributes.
b. Also create another public function display() that displays the attributes.
c. Create an object c1 and assign some values of your choice to c1 and display
the values.
*/

#include <iostream>

class cat{
    std::string breed;
    std::string color;
    double weight;
    public:
        void setDetails(std::string, std::string, double);
        void display();

};

void cat::setDetails(std::string b, std::string c,double wt){
    breed = b;
    color = c;
    weight = wt;
}

void cat :: display(){
    std::cout << "Breed of cat = " << breed << std::endl;
    std::cout << "Color of cat = " << color << std::endl;
    std::cout << "Weight of cat = " << weight << "kg" << std::endl;
}

int main(){
    cat c1;
    c1.setDetails("cute", "orange",  5);
    c1.display();
    return 0;
}
/*
Output:
Breed of cat = cute
Color of cat = orange
Weight of cat = 5kg
*/