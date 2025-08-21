#include<iostream>

// Forward declaration
class USD;

class NPR{
    int rs;
    int paisa;
    public:
        NPR(){
            rs = 0;
            paisa = 0;
        }
        
        NPR(int r, int p){
            rs = r;
            paisa = p;
        }  
        
        void display(){
            std::cout<<"Rs = "<<rs<<" Paisa = "<<paisa<<std::endl;
        }
        
        // Friend function declaration
        friend NPR operator+(NPR n, USD u);
};

class USD{
    int dollar;
    int cent;
    public:
        USD(){
            dollar = 0;
            cent = 0;
        }
        
        USD(int d, int c){
            dollar = d;
            cent = c;
        }
        
        void display(){
            std::cout<<"Dollar = "<<dollar<<" Cent = "<<cent<<std::endl;
        }
        
        // Friend function declaration - MUST be here too
        friend NPR operator+(NPR n, USD u);
};

// Friend function definition - adds NPR and USD
NPR operator+(NPR n, USD u){
    int total_rs = n.rs + (u.dollar * 133);  // 1 dollar = 133 rs
    int total_paisa = n.paisa + (u.cent * 60);  // 1 cent = 60 paisa
    
    // Normalize paisa (if >= 100, convert to rs)
    total_rs += total_paisa / 100;
    total_paisa = total_paisa % 100;
    
    return NPR(total_rs, total_paisa);
}

int main(){
    NPR n1(50, 25);  // 50 rs and 25 paisa
    USD u1(2, 30);   // 2 dollars and 30 cents
    
    std::cout<<"NPR: ";
    n1.display();
    std::cout<<"USD: ";
    u1.display();
    
    NPR result = n1 + u1;  // Uses friend function operator+
    std::cout<<"After adding NPR + USD: ";
    result.display();
    
    return 0;
}