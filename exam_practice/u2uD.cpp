#include<iostream>
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
        int getUSD(){
            return usd;
        }
        int getCENT(){
            return cent;
        }
        void show(){
            std::cout<<"USD = "<<usd<<" Cent = "<<cent<<std::endl;
        }
};

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
        NPR(USD u){
            rupees = u.getUSD() * 138;
            paisa = u.getCENT() * 50;
            rupees += static_cast<int>(paisa/100);
            paisa %= 100;
        }
        void show(){
            std::cout<<"Rupees = "<<rupees<<" Paisa = "<<paisa<<std::endl;
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