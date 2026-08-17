#include <iostream>
#include <cmath>
using namespace std ;

//                                        GLOBAL VARIABLE
// int a = 7 ;
// int main (){
//     cout << a ;
// }


// int x = 25 ;
// int main (){
//     int x = 76 ;
//     cout << x ;
// }


//                                       Nested Scope Shadowing 
// int main (){
//     int x = 6 ;
//     {
//         int x = 8 ;
//         cout << x << endl ;
//     }
//     cout <<  x ;
// }


//                                 Accessing A Shadowed Global Variable
// int x = 8 ;
// int main (){
//     int x = 56 ; 
//     cout << x << endl ;
//     cout << ::x << endl ;
// }


//                                     Default Parameter
// void fun(int a = 24) {
//     cout << "I am " << a << " years old." ;
// }
// int main (){
//     fun(21)  ;

// }


//                                      Function Overloading 
//                                           Case - 1
// Problem
// void fun(){
//     cout << "Suyash Chandra Tripathi" ;
// } 
// void fun(){
//     cout << "Pranjali Tripathi" ;
// }
// int main (){
//     fun() ;
// }

// Solution
// void fun(){
//     cout << "Suyash Chandra Tripathi" << endl ;
// }
// void fun(int a) {
//     cout << "Pranjali Tripathi" ;
// }
// int main (){
//     fun() ;
//     fun(8) ;
// }

//                                            Case - 2 
// void fun(char x){
//     cout << "Suyash Chandra Tripathi" ;
// }
// void fun(int x){
//     cout << "Pranjali Tripathi" ;
// }
// void fun(double x){
//     cout << "Anjali Tripathi" ;
// }
// int main (){
//     fun('A') ;
// }

//                                          Case - 3 
// void fun(int x , char y){
//     cout << "Suyash" << endl ;
// }
// void fun(char y , int x) {
//     cout << "Pranjali" ;
// }
// int main (){
//      fun(34 , 23) ;  // error
// }