#include <iostream>
#include <cmath>

using namespace std;

double calculateSphereVolume(double& radius){
    return (4.0/3.0) * M_PI * pow(radius, 3);
}


int main(){
    double radius;
    cout << "Enter the radius of sphere: " << endl;
    cin >> radius;
    double volume = calculateSphereVolume(radius);
    cout << "The Volume of the sphere is " << volume << endl;
}
