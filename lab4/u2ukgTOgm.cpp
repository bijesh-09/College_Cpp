#include<iostream>

class kilogram{
    int kg;
    public:
        kilogram(){
            kg=10;
            std::cout<<"Displaying kilogram:" << kg<<std::endl;
        }
        int getKG(){
            return kg;
        }
};
class gram{
    int gm;
    public:
    gram(){
        gm = 0;
    }
    gram(kilogram k){
        gm = k.getKG() * 1000;
        std::cout<<"Displaying in gram:" << gm;
    }
};

int main(){
    kilogram k1;
    gram g1;
    g1 = k1;
    return 0;
}