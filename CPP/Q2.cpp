#include <iostream>
using namespace std;

struct Complex
{
   int real;
   int imag;
};

Complex add(Complex a,Complex b){//addition function
     Complex result;
     result.real= a.real+b.real;
     result.imag= a.imag+b.imag;
     return result;
}
Complex sub(Complex a,Complex b){  //subtraction function
     Complex result;
     result.real= a.real-b.real;
     result.imag= a.imag-b.imag;
     return result;
}
Complex mul(Complex a,Complex b){   //Multiplication function
     Complex result;
     result.real= (a.real*b.real) - (a.imag*b.imag) ;
     result.imag= (a.imag*b.real) + (a.real*b.imag) ;
     return result;
}
Complex div(Complex a,Complex b){   //Division function
     Complex result;
     int denom = (b.real*b.real) + (b.imag*b.imag);
     if(denom!=0){
     result.real= ((a.real*b.real) + (a.imag*b.imag))/((b.real*b.real) + (b.imag*b.imag)) ;
     result.imag=  ((a.imag*b.real) - (a.real*b.imag))/((b.real*b.real) + (b.imag*b.imag));
     return result;
     }else{
        cout<<"Division by zero is not defined"<<endl;
    }
}

void menu(){
     Complex a, b, result;
    int choice;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> a.real >> a.imag;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> b.real >> b.imag;

    cout << "Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            result = add(a, b);
            cout << "Result: " << result.real << " + " << result.imag << "i" << endl;
            break;
        case 2:
            result = sub(a, b);
            cout << "Result: " << result.real << " + " << result.imag << "i" << endl;
            break;
        case 3:
            result = mul(a, b);
            cout << "Result: " << result.real << " + " << result.imag << "i" << endl;
            break;
        case 4:
            result = div(a, b);
            cout << "Result: " << result.real << " + " << result.imag << "i" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}

int main(){
 menu();
 return 0;
}