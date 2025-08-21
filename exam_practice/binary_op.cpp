#include<iostream>

class bin{
    int feet;
    int inch;
    public:
        bin(){
            std::cout<<"Enter feet:"<<std::endl;
            std::cin>>feet;
            std::cout<<"Enter inch:"<<std::endl;
            std::cin>>inch;
        }
        bin(int f, int i){
            feet = f;
            inch = i;
        }
        bin operator +(bin b){
            return bin(feet + b.feet, inch + b.inch);
        }
        void show(){
            std::cout<< "Feet = " << feet << " Inch = " << inch<<std::endl;
        }

};
int main(){
    bin b1,b2;
    b1.show();
    b2.show();
    bin b3 = b1+b2;
    b3.show();

    return 0;
}