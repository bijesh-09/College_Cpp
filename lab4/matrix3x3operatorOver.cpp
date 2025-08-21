#include<iostream>

class Matrix{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    public:
        void set1stmatrix(){
            std::cout<<"Enter elements of 1st matrix:"<<std::endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    std::cin>>a[i][j];
                }
                
            }
        } 
        void set2ndmatrix(){
            std::cout<<"Enter elements of 2nd matrix:"<<std::endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    std::cin>>b[i][j];
                }
                
            }
        }
        
        void operator + (Matrix m){
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    c[i][j] = a[i][j] + m.b[i][j];
                }
                
            }
            
        }
        void display(){
            std::cout<<"Sum of two matrices = "<<std::endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    std::cout<< c[i][j]<<" ";
                }
                std::cout<<"\n";
                
            }
        }
};

int main(){
    Matrix m1,m2;
    m1.set1stmatrix();
    m2.set2ndmatrix();
    m1 + m2;
    m1.display();
    return 0;
}