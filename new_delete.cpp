#include<iostream>

int main(){
    int num;
    float* p = new float[num];

    std::cout<<"Enter total numbers of student:"<<std::endl;
    std::cin>>num;
    for (int i = 0; i < num; i++)
    {
        std::cout<<"Enter marks of "<<i+1<<"th student"<<std::endl;
        std::cin>>*(p+i);
    }
    for (int i = 0; i < num; i++)
    {
        std::cout<<"Marks of "<<i+1<<"th student is: "<<*(p+i)<<std::endl;
    }
    delete[] p;
    return 0;
}