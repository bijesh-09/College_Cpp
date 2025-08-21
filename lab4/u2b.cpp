#include<iostream>

class distance{
    int kilometer, meter;
    public:
        distance(int km,int m){
            kilometer = km;
            meter = m;
        }
        float u2b(){
            return kilometer + (float)meter/1000;
        }
        void display(){
            std::cout<<"Kilometer & Meter  = "<< kilometer <<"km" << " " << meter <<"m"<< std::endl;
        }
    };
    
int main(){
    distance d1(12,930);
    d1.display();
    float length = d1.u2b();
    std::cout<<"Total length = "<<length<< std::endl;

    return 0;

}