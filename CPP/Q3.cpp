#include <bits/stdc++.h>
using namespace std;

struct Arithmetic
{
    int no1;
    int no2;

};

 void add(Arithmetic nums){   //addition function
    cout<<"Addition"<<nums.no1+nums.no2<<endl;
    }

void sub(Arithmetic nums){  //subtraction function
    cout<<"Subtraction"<<nums.no1-nums.no2<<endl;
    }

void mul(Arithmetic nums){   //Multiplication function
    cout<<"Multiplication"<<nums.no1*nums.no2<<endl;
    }

void div(Arithmetic nums){   //Division function
    if(nums.no2!=0){
    cout<<"Division"<< static_cast<float>(nums.no1/nums.no2)<<endl;
    }else{
      cout<<"Division by zero is not defined"<<endl;
    }
    }

void menu(){
    Arithmetic nums;
    int choice;
    

    cout<<"Enter two numbers"<<endl;
    cin>>nums.no1>>nums.no2;

    cout << "Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

     switch (choice) {
        case 1:
            add(nums);
            
            break;
        case 2:
           sub(nums);
           
           break;
      
        case 3:
            mul(nums);
            
            break;
        case 4:
            div(nums);
            
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}

int main(){
 menu();
 return 0;
}
