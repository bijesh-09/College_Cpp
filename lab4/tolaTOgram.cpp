#include<iostream>

class tola{
    float t;
    public:
        tola(){
            t=10.0;
            std::cout<<"Displaying tola:" << t<<std::endl;
        }
        float getKG(){
            return t;
        }
};
class gram{
    float gm;
    public:
    gram(){
        gm = 0;
    }
    gram(tola k){
        gm = k.getKG() * 11.664;
        std::cout<<"Displaying in gram:" << gm;
    }
};

int main(){
    tola t1;
    gram g1;
    g1 = t1;
    return 0;
}