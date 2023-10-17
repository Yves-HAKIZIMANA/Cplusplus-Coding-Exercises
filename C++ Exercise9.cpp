#include <iostream>
#include <cmath>

using namespace std;

void solveQuadraticEquationSolver(){
    cout << "Enter the coefficients a , b , c: " ;
    double a , b ,c;
    cin >> a >> b >> c;

    double delta = sqrt(pow(b, 2) - (4 * a * c));
    double x1 = ( -b + delta ) / ( 2 * a);
    double x2 = ( -b - delta) / ( 2 * a);
    cout << "X1 =  " << x1 << " X2 = " << x2;
}
int main(){
    solveQuadraticEquationSolver();
}

