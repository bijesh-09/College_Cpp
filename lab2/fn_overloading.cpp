#include <iostream>
#include <cmath>
#define PI 3.14

void volume(float r, float h){
    float result = PI * pow(r,2) * h;
    std::cout<<"Volume of cylinder = "<<result<<std::endl;
}
void volume(int l){
    std::cout<<"Volume of cube = "<<pow(l, 3)<<std::endl;
}

int main(){
    double radius, height;
    std::cout<<"Enter the radius and height of a cylinder"<<std::endl;
    std::cin>>radius>>height;
    volume(radius,height);
    int length;
    std::cout<<"Enter the length of a cube"<<std::endl;
    std::cin>>length;
    volume(length);
    
    return 0;
}