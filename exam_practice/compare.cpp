#include<iostream>

class compare{
    int hour;
    int min;
    public:
        compare() {
            std::cout<<"Enter hour:"<<std::endl;
            std::cin>>hour;
            std::cout<<"Enter minutes:"<<std::endl;
            std::cin>>min;
        }
        bool operator >(compare t){
            hour += static_cast<int>(min/60);
            min %= 60;
            
            t.hour += static_cast<int>(t.min/60);
            t.min %= 60;

            if(hour>t.hour){
                return 1;
            }
            else{
                return 0;
            }
        }
};
int main(){
    compare t1,t2;
    if (t1>t2)
    {
        std::cout<<"t1 is greater."<<std::endl;
    }
    else{
        std::cout<<"t2 is greater."<<std::endl;

    }
    return 0;
}