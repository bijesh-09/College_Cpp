#include<iostream>

class distance{
    int feet ;
    int inch;
    public:
        distance(int f, int i){//conversion constructor
            feet = f;
            inch = i;
        }
        operator float(){
            return feet + inch/12.0;
        }
};
int main(){
    distance d(8,6);

    float x = float(d);
    std::cout<<"x = "<<x;
    return 0;
}