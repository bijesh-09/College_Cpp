#include<iostream>

void volume(int l, int b, int h = 1){
    std::cout<<"Volume = "<<l*b*h<<std::endl;
}

int main()
{
    int l,b,h;
    std::cout<<"Enter length, breadth and heigth:"<<std::endl;
    std::cin>>l>>b>>h;
    volume(l,b,h);
    volume(l,b);
    return 0;
}