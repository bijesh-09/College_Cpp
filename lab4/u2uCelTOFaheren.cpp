#include<iostream>

class Celcius{
    float Ce;
    public:
        Celcius(){
            Ce=24.0;
            std::cout<<"Displaying tempr in celcius:" << Ce <<std::endl;
        }
        float getCelcius(){
            return Ce;
        }
};
class Fahrenheit{
    float Fa;
    public:
    Fahrenheit(){
        Fa = 0;
    }
    Fahrenheit(Celcius c){
        Fa = float(9.0/5) * c.getCelcius() + 32;
        std::cout<<"Displaying tempr in fahrenheit:" << Fa;
    }
};

int main(){
    Celcius c1;
    Fahrenheit f1;
    f1 = c1;
    return 0;
}