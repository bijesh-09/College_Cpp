#include<iostream>

void display(int*);
int main(){
        int a[2][2] = {1,2,3,4};
        display(&a[0][0]);
        return 0;
    }
    void display(int* p){
        
    for (int i = 0; i < 4; i++)
    {
        std::cout<<*(p+i)<<std::endl;
    }
    }
    
    