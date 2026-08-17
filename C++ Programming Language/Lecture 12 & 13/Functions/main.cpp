#include <iostream>
#include <cmath>
using namespace std ;

//                                                BASIC FUNCTIONS

// void suyash(){
//     cout << "Suyash" << endl ;
// }
// void pranjali(){
//     cout << "Pranjali" << endl ;
// }
// void anjali(){
//     cout << "Anjali" << endl ;
// }

// int main(){
//     pranjali() ;
//     suyash() ;
//     anjali() ;

//                                              ARGUMENT AND PARAMETER

// Write a function which recieves 3 numbers , and it prints their sum.
    // void sum (int a , int b , int c){ //Parameter
    //     cout << a+b+c << endl ;
    // } 
    // int main (){
    //     sum(10 , 13 , 15) ; //Argument  
    // }


// Take a , b , c as input and print the following pattern: a = 3 , b = 4 , c = 5 using funtions.
// *
// * *
// * * *
// *
// * *
// * * * 
// * * * *
// *
// * *
// * * *
// * * * * 
// * * * * *  
    // void starTriangle (int n){
    //     for(int i = 1 ; i <= n ; i++){
    //         for (int j = 1 ; j <= i ; j++){
    //             cout << "* " ;
    //         }
    //         cout << endl ;
    //     }
    // }  
    // int main (){
    //     int a , b , c ;
    //     cout << "Enter a: " ;
    //     cout << "Enter b: " ;
    //      cout << "Enter c: " ;
    //     cin >> a >> b >> c;
    //     starTriangle(a) ;
    //     starTriangle(b) ;
    //     starTriangle(c) ;
    // }

//                                                  RETURN KEYWORD

void fun(int n){
    cout << n << endl ;
    if (n > 20) return ;
    cout << n * n << endl ;
}
int main (){
    int a ;
    cin >> a ;
    fun (a) ;
}