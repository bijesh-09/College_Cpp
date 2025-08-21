#include<iostream>
//converting usd into npr
// USD class is defined first cuz its members are going to be used in NPR class and compiler needs forward declaration (reassurance)
class USD{//source class
    int usd;
    int cent;
    public:
        USD(){// for the objects of USD using default constructor
            usd = 0;
            cent = 0;
        }
        
        USD(int u, int c){// for setting the value of USD objects
            usd  = u;
            cent = c;
        }
        int getUSD(){// for getting acces ot USD's private members in destination class
            return usd;
        }
        int getCENT(){
            return cent;
        }
        void display(){
            std::cout<<"Dollars = "<<usd<<"Cents = "<<cent<<std::endl;
        }
};

class NPR{//destination class
    int rupees;
    int paisa;
    public:
        NPR(){// for the objects of NPR using default constructor
            rupees = 0;
            paisa = 0;
        }
        
        NPR(int r, int p){// for setting the value of NPR objects
            rupees = r;
            paisa = p;
        }  
        NPR(USD u){//parameterized constructor as a CONVERSION constructor
            rupees = u.getUSD() * 138;//assuming 1 usd = 138 rupees
            paisa = u.getCENT() * 50;//assuming 1 cent = 50 paisa
            rupees += static_cast<int>( paisa/100 ); //1rs = 100 paisa and we want to only add integer part of the converted paisa into existing set rupees
            paisa = paisa%100;// the remainder gives how much paisa is left after normalizing the amount of paisa that can be added to the rupees
        }
        void display(){
            std::cout<<"Rupees = "<<rupees<<" Paisa = "<<paisa<<std::endl;
        }
};

int main(){
    USD u1(10,51);// parameterized constructor called, u can pass the user input if u want
    NPR n1;//default constructor called
    n1=u1;//n1 calls the NPR(USD u) constructor and passes u1(obj of another class) as arg.
    // Conversion constructor is a constructor in the destination class (NPR) that takes a source class (USD) as an argument.
    //     The compiler sees you are assigning a USD to an NPR.
    // It calls the conversion constructor: NPR n1 = NPR(u1);
    // If n1 already exists, it does: n1 = NPR(u1);
    n1.display();
    return 0;
}