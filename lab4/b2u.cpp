#include<iostream>

class distance{
    int km, m;
    public:
        distance(float l){
            km = int(l);
            m = (l-km)*1000;
        }
        void display(){
            std::cout<<"Kilometer & Meter  = "<< km <<"km" << " " << m <<"m"<< std::endl;
        }
};

int main(){
    float length = 12.93;
    distance d1(length);
    d1.display();
    return 0;

}