#include<iostream>
#include<cmath>
#define PI 3.14 

int main(){
    double r, degree;
    std::cout<<"Enter r and theta:"<<std::endl;
    std::cin>>r>>degree;
    double rad = degree * (PI/180);
    double x = r * cos( rad ); 
    double y = r * sin( rad ); 
    std::cout<<"Rectangular coordinate is:"<<x<<" "<<y<<std::endl;
    return 0;
}