#include<iostream>

class NPR{
    int rupees;
    int paisa;
    public:
        NPR(){
            rupees = 0;
            paisa = 0;
        }
        NPR(int r, int p){
            rupees = r;
            paisa = p;
        }
        void show(){
            std::cout<<"Rupees = "<<rupees<<" Paisa = "<<paisa<<std::endl;
        }
};

class USD{
    int usd;
    int cent;
    public:
        USD(){
            usd = 0;
            cent = 0;
        }
        USD(int dollar, int c){
            usd = dollar;
            cent = c;
        }
        operator NPR(){
            int r = usd * 138;
            int p = cent * 50;
            r += static_cast<int>(p/100);
            p %= 100;
            return NPR(r,p);
        }
        void show(){
            std::cout<<"USD = "<<usd<<" Cent = "<<cent<<std::endl;
        }
};

int main(){
    USD u1(10,51);
    NPR n1;
    u1.show();
    n1 = u1;
    n1.show();
    return 0 ;
}