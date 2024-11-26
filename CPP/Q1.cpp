#include <bits/stdc++.h>
using namespace std;

struct Arithmetic
{
    int no1;
    int no2;
};

 void add(Arithmetic nums){ //addition function
    cout<<"Addition"<<nums.no1+nums.no2<<endl;
    }

void sub(Arithmetic nums){  //subtraction function
    cout<<"Subtraction"<<nums.no1-nums.no2<<endl;
    }

void mul(Arithmetic nums){  //Multiplication function
    cout<<"Multiplication"<<nums.no1*nums.no2<<endl;
    }

void div(Arithmetic nums){   //Division function
    if(nums.no2!=0){
    cout<<"Division"<< static_cast<float>(nums.no1/nums.no2)<<endl;
    }else{
      cout<<"Division by zero is not defined"<<endl;
    }
    }


int main(){
   Arithmetic numbers;
   cout<<"Enter two numbers"<<endl;
   cin>>numbers.no1>>numbers.no2;
   add(numbers);
   sub(numbers);
   mul(numbers);
   div(numbers);

    return 0;
    
}
