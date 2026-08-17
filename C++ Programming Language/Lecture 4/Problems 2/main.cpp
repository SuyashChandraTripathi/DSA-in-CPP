#include <iostream>
using namespace std ;
int main () {
     
// Q1. Take two integers as input from the user. Determine and print whether their multiplica
// tion product is positive, negative, or zero without calculating the absolute numeric valuation
// value if possible.
    //   int a ,b;
    //   cout << "Enter the first integer: ";
    //   cin >> a;
    //   cout << "Enter the second integer: ";
    //   cin >> b;
    //   if ((a*b)>0) cout << "Product is positive";
    //   else if ((a*b)<0) cout << "Product is negative";
    //   else cout << "Product is 0";
    //   return 0;


// Q2. Take a positive integer input from the user and check if it is divisible by both 3 and
// 5. Do not use the logical AND (&&) operator inside your conditional test statement. (Hint:
// Think about how mathematical properties like the Lowest Common Multiple (LCM) can reduce
// multi-step rules).
    //    int a;
    //    cout << "Enter a integer: ";
    //    cin >> a;
    //    if ( a % 15 == 0) cout << "The integer is both divisible by 3 and 5";
    //    else cout << "The integer is not divisible by both 3 and 15";
    //    return 0;


// Q3. Given the number of sides n of a simple polygon and the sum of all its interior angles
// S, write a program to check if the user has provided valid dimensional specifications. Use the
// structural formula: (formula given in the DPP)
    // int n , S;
    // cout << "Enter the number of sides: ";
    // cin >> n;
    // cout << "Enter the sum of all the interior angles: ";
    // cin >> S;
    // if (S == (n-2)*180) cout << "Valid Polygon";
    // else cout << "Invalid Polygon";
    // return 0;
    

// Q4. Take two integers as input. If exactly one of them is odd, print "One is odd". If
// both are odd, print "Both are odd". If neither of them is odd, print "None is odd". Use
// conditional constructs effectively.
    //  int a,b ;
    //  cout << "Enter the first integer: ";
    //  cin >> a;
    //  cout << "Enter the second integer: ";
    //  cin >> b;
    // if ((a % 2 == 0) && (b % 2 ==0)) cout << "Both are odd";
    // else if ((a % 2 != 0) && (b % 2 == 0)) cout << "One is odd";
    // else if ((a % 2 == 0) && (b % 2 != 0)) cout << "One is odd";
    // else cout << "None is odd";
    // return 0;


// Q5. Write a menu-driven application using a C++ switch-case structure that accepts an
// integer number representing a month (1 to 12). Print the corresponding month’s standard
// calendar name. If the input falls outside the standard scope, default cleanly with an error flag
// message.
    //  int a ;
    //  cout << "Enter any integer: ";
    //  cin >> a;
    //  switch (a){
    //     case 1 : cout << "January" ; break ;
    //     case 2 : cout << "February" ; break ;
    //     case 3 : cout << "March" ; break ;
    //     case 4 : cout << "April" ; break ;
    //     case 5 : cout << "May" ; break ;
    //     case 6 : cout << "June" ; break ;
    //     case 7 : cout << "July" ; break ;
    //     case 8 : cout << "August" ; break;
    //     case 9 : cout << "September" ; break ;
    //     case 10 : cout << "October" ; break ;
    //     case 11 : cout << "November" ; break ;
    //     case 12 : cout << "December" ; break ;
    //     default : cout << "Invalid Response" ;
    //     return 0;
    //     }


// Q6. Take a character input from the keyboard. Write a conditional structure to evaluate whether the
// provided letter is an uppercase English alphabet (A-Z), a lowercase alphabet (a-z), a numerical
// digit (0-9), or a special symbolic character.
    // char ch;

    // cout << "Enter a character: ";
    // cin >> ch;

    // if (ch >= 'A' && ch <= 'Z') {
    //     cout << "Uppercase Alphabet";
    // }
    // else if (ch >= 'a' && ch <= 'z') {
    //     cout << "Lowercase Alphabet";
    // }
    // else if (ch >= '0' && ch <= '9') {
    //     cout << "Numerical Digit";
    // }
    // else {
    //     cout << "Special Symbolic Character";
    // }

    // return 0;


// Q7. Write a program that takes a positive integer representing a year (e.g., 2024) and checks whether
// it is a leap year or not. Your logical conditions must accurately check for standard four-year
// intervals while handling century-year bounds correctly (100 and 400 rules).
    // int year;

    // cout << "Enter a year: ";
    // cin >> year;

    // if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    //     cout << year << " is a Leap Year";
    // } else {
    //     cout << year << " is Not a Leap Year";
    // }

    // return 0;


// Q8. Given the three coordinate points A(x1,y1), B(x2,y2), and C(x3,y3) as floating-point inputs,
// write a program to determine if all three points sit sequentially on the same straight line
// (collinear points). Use the slope comparison formulation: (formula is given in the DPP)
        // float x1 , x2 , x3 , y1 , y2 , y3 ;
        // cout << "Enter the first coordinate: ";
        // cin >> x1 >> y1 ;
        // cout << "Enter the second coordinate: ";
        // cin >> x2 >> y2 ;
        // cout << "Enter the third coordinate: ";
        // cin >> x3 >> y3 ;
        // if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2-x1)) cout << "Points are collinear";
        // else cout << "Point are non-collinear";
        // return 0;


// Q9. Take three numerical values denoting the side dimensions (a,b,c) of a shape. First, use a vali
// dation structure to test whether these segments can structurally assemble into a valid triangle
// (a +b >c, b+c >a, and c+a>b). If valid, further categorize the object as an Equilateral,
// Isosceles, or Scalene triangle.
            // int a,b,c ;
            // cout << "Enter the first side of the polygon: ";
            // cin >> a;
            // cout << "Enter the second side of the polygon: ";
            // cin >> b;
            // cout << "Enter the third side of the polygon: ";
            // cin >> c;
            // if ((a + b > c) && (b + c > a) && (a + c > b)){ cout << "The given polygon is a triangle" << endl;
            //      if ((a == b) && (b == c) && (c == a)) cout << "The given polygon is an equilateral triangle";
            //      else if ((a == b) || (b == c) || (a == c)) cout << "The given polygon is an isoceles triangle";
            //      else  cout << "The given polygon is a scalene triangle";
            // }
            // else cout << "The given polygon is not a triangle";
            // return 0;


// Q10. An energy cooperative charges electricity rates dynamically depending on consumer usage units.
// Write a program to compute total charges based on the input consumption units:
// • First 100 units: $1.50 per unit
// • Next 200 units (101 to 300): $2.50 per unit
// • Above 300 units: $4.00 per unit
// An additional structural safety surcharge of 15% is appended to the total amount generated.
// Find the net bill payable.
        //    double units ;
        //    cout << "Enter the no. of units consumed: ";
        //    cin >> units;
           
        //    if (units <= 100) cout << "Your total charges to be paid is $" << (units*1.5) + 0.15*(units*1.5) << endl;
          
        //    else if ((units > 100) && (units <= 300)) cout << "Your total charges to be paid is $"  << (((double)100*1.5) + ((double)((units - 100)*2.5))) + 0.15*(((double)100*1.5) + ((double)((units - 100)*2.5))) << endl;
           
        //    else if (units > 300) cout << "Your total charges to be paid is $" << (((double)100*1.5) + ((double)200*2.5)  + ((double)((units -300)*4))) + 0.15*(((double)100*1.5) + ((double)200*2.5)  + ((double)((units -300)*4))) << endl;
        //    return 0;


}