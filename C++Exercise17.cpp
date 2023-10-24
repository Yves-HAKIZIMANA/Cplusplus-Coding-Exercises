#include <iostream>
#include <cmath>


using namespace std;

double calculateVolumeOfCube(double length){
    return pow(length, 3);
}

int main(){
    double length;
    cout << "Input the length of the cube : ";
    cin >> length;
    cout << "The volume of the cube is : " << calculateVolumeOfCube(length) << endl;
}