#include <iostream>
using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};
int main(){
    double a, b, c;
    triangleType triangle;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if(a + b <= c || a + c <= b || b + c <= a){
        triangle = noTriangle;
    }else if (a == b && b == c){
        triangle = equilateral;
    }else if (a == b || a == c || b == c){
        triangle = isosceles;
    }else{
        triangle = scalene;
    }
    
    if(triangle == equilateral){
        cout << "Equilateral triangle" << endl;
    }else if (triangle == isosceles){
        cout << "Isosceles triangle" << endl;
    }else if (triangle == scalene){
        cout << "Scalene triangle" << endl;
    }else{
        cout << "Not a triangle" << endl;
    }
    return 0;
}