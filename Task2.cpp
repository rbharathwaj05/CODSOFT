// SIMPLE CALCULATOR
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char operation;
    double number1, number2;
    
    cout << "Enter First Number: ";
    cin >> number1;
    
    cout << "Enter Second Number: ";
    cin >> number2;
    
    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;

     switch(operation){
        case '+':
        cout << number1 << " + " << number2 << "= " << number1+number2<< endl;
        break;
        
        case '-': 
        cout << number1 << " - " << number2 << " = " << number1-number2 << endl;
        break;
        
        case '*': 
        cout << number1 << " * " << number2 << " = " << number1*number2 << endl;
        break;
        
        case '/': 
        cout << number1 <<" / " << number2 << " = " << number1/number2 << endl;
        break;
        
        default:
        cout << "Invalid Operation" << endl;

    }
}

    
        
        
       
        