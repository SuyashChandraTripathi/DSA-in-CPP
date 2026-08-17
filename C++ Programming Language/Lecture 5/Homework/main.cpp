#include <iostream>
using namespace std ;
int main() {

    // Q1. Take integer input and tell if its magnitude is smaller than 69 or not
    // int num;
    // cout << "Enter an integer: ";
    // cin >> num;
    // if (num > 69 || num < -69) cout << "Magnitude of this number is greater than 69";
    // else cout << "Magnitude of this number is smaller than 69";
    // return 0;


    // Take 3 positive integers input and print the least of them.
    // int a , b , c ;
    // cout << "Enter the first integer: ";
    // cin >> a;
    // cout << "Enter the second integer:";
    // cin >> b;
    // cout << "Enter the third integer: ";
    // cin >> c;
    // if (a < b && a < c) cout << a << " is the least integer among all";
    // else if (b < a && b < c) cout << b << " is the least integer among all";
    // else if (c < a && c < b) cout << c << " is the least integer among all";
    // return 0;


    // Given a point (x,y), write a program to find out if it lies in the first quadrant, second quadrant, third quadrant, fourth quadrant, on the x-axis, y-axis or at the origin.
    // int x ;
    // int y ;
    // cout << "Enter the x coordinate: ";
    // cin >> x;
    // cout << "Enter the y coordinate: ";
    // cin >> y;
    // if (x > 0 && y > 0) cout << "The given point lies in the 1st Quadrant";
    // else if (x < 0 && y > 0) cout << "The given point lies in the 2nd Quadrant";
    // else if (x < 0 && y < 0) cout << "The given point lies in the 3rd Quadrant";
    // else if (x > 0 && y < 0) cout << "The given point lies in the 4th Quadrant";
    // else if (y == 0 && (x < 0 || x > 0)) cout << "The given point lies on the x-axis";
    // else if (x == 0 && (y < 0 || y > 0)) cout << "The given point lies on the y-axis";
    // else if (x == 0 && y == 0) cout << "The given point is on the origin";
    // return 0;


    
 int x = 5;
 int y = x++ + ++x;
 cout << y << endl;
 cout << x << endl;
 return 0;
}
