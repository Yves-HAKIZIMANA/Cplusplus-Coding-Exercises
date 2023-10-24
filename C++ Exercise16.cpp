#include <iostream>
#include <cmath>

using namespace std;

double area(double radius){
    return (M_PI * pow(radius, 2));
}

double circumference(double radius){
    return (M_PI * radius * 2);
}

int main(){
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is : " << area(radius) << endl
        << "The circumference of the circle is " << circumference(radius) << endl;
}

/// optimizing the algorithm