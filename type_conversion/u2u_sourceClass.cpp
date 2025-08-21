#include<iostream>
//converting usd into npr
// NPR class is defined first cuz its members(like parameterized NPR constructor) are going to be used in USD class and compiler needs forward declaration (reassurance)

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
        void display(){
            std::cout<<"Rupees = "<<rupees<<" Paisa = "<<paisa<<std::endl;
        }
};

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
        operator NPR(){//u1 calls this operator fn having return type NPR(or NPR's obj)
            // the compiler knows that the "usd" and "cent" here belongs to the one who is calling this operator fn which is u1 obj here
            int rupees = usd * 138;//assuming 1 usd = 138 rupees
            int paisa = cent * 50;//assuming 1 cent = 50 paisa
            rupees += static_cast<int>( paisa/100 ); //1rs = 100 paisa and we want to only add integer part of the converted paisa into existing set rupees
            paisa = paisa%100;//the remainder gives how much paisa is left after normalizing the amount of paisa that can be added to the rupees
            //here the rupees and paisa does not belongs to any NPR class object, cuz its independent and has only scope within this fn
            NPR o1;
            o1.display();
            return NPR(rupees,paisa);//this NPR parameterized fn is called by a nameless object, which is returned by this operator fn
        }
        
        void display(){
            std::cout<<"Dollars = "<<usd<<"Cents = "<<cent<<std::endl;
        }
};

int main(){
    USD u1(10,51);// parameterized constructor called, u can pass the user input if u want
    NPR n1;//default constructor called
    n1=u1;//u1 calls the operator fn of return type NPR , and a nameless NPR object is returned and assigned to n1
    //NOTE here, '=' is a conversion operator not a binary operator 
    //conversion operator is always a member of the source class (the type you are converting from). cuz we are converting n1 into u1(source) 
    //now n1 has the USD members converted into NPR members (same as of that of nameless NPR obj)
    n1.display();
    return 0;
}