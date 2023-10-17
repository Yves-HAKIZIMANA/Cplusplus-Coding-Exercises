#include <iostream>

using namespace  std;

namespace arithmetic{
    int add(int a, int b){return a + b ;}
    int subtract(int a, int b) {return a - b ;}
    int multiply(int a , int b) {return a * b ;}
    int divide(int a, int b) { return a /b ;}
    int modulus(int a , int b){ return a %b ;}
}



void calculator(){
     while(true){

         cout << "1.Add" << endl;
         cout << "2.Subtract" << endl;
         cout << "3.Multiply" << endl;
         cout << "4.Divide" << endl;
         cout << "5.Modulus" << endl;

         int choice;
         cout << "Enter your choice : ";
         cin >> choice;
         int a , b;
         cout << "Enter two integers : ";
         cin >> a >> b;

         int result;
         switch (choice) {
             case 1:
                 result = arithmetic::add(a, b);
                 cout << "Result: " << result << endl;
                 break;
             case 2:
                 result = arithmetic::subtract(a,b);
                 cout << "Result: " << result << endl;
                 break;
             case 3:
                 result = arithmetic::multiply(a, b);
                 cout << "Result: " << result << endl;
                 break;
             case 4:
                 result = arithmetic::divide(a, b);
                 cout << "Result: " << result << endl;
                 break;
             case 5:
                 result = arithmetic::modulus(a, b);
                 cout << "Result: " << result << endl;
                 break;
             default:
                 cout << "The choice entered is not valid here";
         }

         char action;
         cout << "Continue: ";
         cin >>  action;
         if(action == 'y') continue;
         break;

     }
}


int main(){
    calculator();
}
