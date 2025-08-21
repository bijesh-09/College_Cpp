#include <iostream>
#include <string>

class cat{
    std::string breed;
    std::string color;
    double weight;
    public:
        cat();
        void setDetails(std::string, std::string, double);
        void display();

};

cat::cat(){
    breed = "Husky";
    color = "Brown";
    weight = 3.5;
}

void cat::setDetails(std::string b, std::string c,double w){
    breed = b;
    color = c;
    weight = w;
}

void cat :: display(){
    std::cout << "Breed of cat = " << breed << std::endl;
    std::cout << "Color of cat = " << color << std::endl;
    std::cout << "Weight of cat = " << weight << "kg" << std::endl;
}

int main(){
    cat c1;
    c1.display();

    std::string br,clr;
    double wt;
    std::cout << "Enter breed of cat = " << std::endl;
    std::cin>>br;
    std::cout << "Enter color of cat = " << std::endl;
    std::cin>>clr;
    std::cout << "Enter weigth of cat = " << std::endl;
    std::cin>>wt;


    cat c2;
    c2.setDetails(br, clr,  wt);
    c2.display();
    return 0;
}
