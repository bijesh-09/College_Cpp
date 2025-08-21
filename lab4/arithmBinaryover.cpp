#include <iostream>

class weight{
    int kilograms;
    int grams;
    public:
        weight(){
            kilograms = 0;
            grams = 0;
        }
        weight(int kg, int gm){
            kilograms = kg;
            grams = gm;
        }
        void display(){
            std::cout<<"Time = "<<kilograms<<" "<<grams<<std::endl;
        }
        weight operator - (weight o2){
            return weight(kilograms - o2.kilograms,grams - o2.grams);
        }
        
};

int main(){
    weight w1(55, 36), w2(65, 70), w3;
    w1.display();
    w2.display();
    w3 = w1 - w2;
    w3.display();
    return 0;
}