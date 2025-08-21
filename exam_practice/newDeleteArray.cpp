#include<iostream>
// #include<iomanip>
int main()
{
    int *p = new int[5];
    std::cout<<"Enter 5 numbers:"<<std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cin>>*(p+i);
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<*(p+i)<<std::endl;
    }
    delete[] p;
    // std::cout<< std::setw(5) << 42;
    
    return 0;
}