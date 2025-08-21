#include<iostream>

class distance{
    int feet ;
    float inch;
    public:
        distance(float l){//conversion constructor
            feet = int(l);
            inch = (l-feet);
        }
        void show(){
            std::cout<<"feet = "<<feet<<std::endl   
                <<"inch = "<<inch<<std::endl;
        }
};
int main(){
    float length = 3.5;
    distance d = length;
    d.show();
    return 0;
}