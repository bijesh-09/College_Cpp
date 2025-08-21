#include<iostream>


class distance{
    float feet;
    float inch;
    public:
        distance(float x, float y){
            feet = x;
            inch = y;
        }
        operator float(){
            return feet + inch/12;
        }
        
};
int main(){
    distance d(8,6);
    std::cout<<(float)d;
    return 0;
}