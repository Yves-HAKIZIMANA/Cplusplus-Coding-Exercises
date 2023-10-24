#include <iostream>

using namespace std;

double celsiusToFahreneit(double celsius){
    return (celsius * (9 / 5)) + 32;
}

int main(){
    double temp;
    cout << "Input the temperature in Celsius : ";
    cin >> temp;
    cout << "Temperature in celsius is  " << celsiusToFahreneit(temp) << endl;
}