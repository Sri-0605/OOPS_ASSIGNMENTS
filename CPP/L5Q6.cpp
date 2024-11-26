#include <iostream>
using namespace std;

class B;
class A
{
    int a;

    public:
       void inputData(){
        cout<<"enter the value of first number"<<endl;
        cin>>a;
       }

       friend void calcMean(A ,B );

};

class B
{
    int b;

    public:
       void inputData(){
        cout<<"enter the value of second number"<<endl;
        cin>>b;

       }
       
       friend void calcMean(A ,B );

};

void calcMean(A num1,B num2){
    
    cout<<"mean ="<<(num1.a+num2.b)/2.0<<endl;
}

int main(){
       
    A num1;
    B num2;
    num1.inputData();
    num2.inputData();
    calcMean(num1,num2);
    return 0;


}