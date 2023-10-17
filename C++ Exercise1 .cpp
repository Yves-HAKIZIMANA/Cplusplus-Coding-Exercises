#include <iostream>

using namespace  std;

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
                 result = a +b;
                 cout << "Result: " << result << endl;
                 break;
             case 2:
                 result = a -b;
                 cout << "Result: " << result << endl;
                 break;
             case 3:
                 result = a *b;
                 cout << "Result: " << result << endl;
                 break;
             case 4:
                 result = a /b;
                 cout << "Result: " << result << endl;
                 break;
             case 5:
                 result = a %b;
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
