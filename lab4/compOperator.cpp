#include <iostream>

class samaya{
    int hours;
    int minutes;
    public:
        samaya(){
            hours = 0;
            minutes = 0;
        }
        samaya(int hrs, int mins){
            hours = hrs;
            minutes = mins;
        }
        void display(){
            std::cout<<"Time = "<<hours<<"hrs"<<" "<<minutes<<"mins" <<std::endl;
        }
        int operator >(samaya o2){
            int total1 = hours * 60 + minutes ;
            int total2 = o2.hours * 60 + o2.minutes ;
            if (total1 > total2) 
            {
                return 1;
            }
            else if(total1 < total2){
                return 0;
            }
            else return -1;
        } 
};

int main(){
    samaya t1(2,30),t2(2,30);
    t1.display();
    t2.display();
    int check = t1 > t2; 
    if (check==1)
    {
        std::cout <<"t1 is greater!"<<std::endl;
    } 
    else if(check == 0) {
        
        std::cout <<"t2 greater!"<<std::endl;
    }
    else{
        
        std::cout <<"t1 = t2 "<<std::endl;
    }
    return 0;
}