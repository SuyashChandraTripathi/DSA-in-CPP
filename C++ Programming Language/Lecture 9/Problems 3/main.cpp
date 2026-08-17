#include <iostream>
using namespace std;
int main (){
     
// Take a positive integer N as input and compute the sum of all natural numbers from 1 upto N using a loop.
//      int n , sum = 0;
//      cout << "Enter a positive integer: " ;
//      cin >> n;
//      for (int i = 1 ; i <= n ; i++){
//         sum += i ;
//      }
//      cout << sum ;



// Write a program that takes two integer N as input and prints all the even numbers located strictly between them.
    // int a , b ;
    // cout << "Enter the first integer: " ;
    // cin >> a ;
    // cout << "Enter the second integer: ";
    // cin >> b ;
    // for (int i = a+1 ; i < b ; i++){
    //     if (i % 2 == 0) cout << i << " " ;
    // }


// Write a program to take a number as input and compute the product of all its individual digits.
    // int a , rem , prod = 1;
    // cout << "Enter a number: " ;
    // cin >> a ;
    // while (a != 0){
    //     rem = a % 10 ;
    //     prod *= rem ; 
    //     a /= 10 ;
    // }
    // cout << prod ;


// Given a positive integer N, write a program to find and print all of its divisors.
    // int N ;
    // cout << "Enter a positive integer: " ; 
    // cin >> N ;
    // for (int i = 1 ; i <= N ; i++){
    //     if (N % i == 0) cout << i << " ";
    // }


// Write a program to find if a given positive integer is a Perfect Number. A perfect number
// is a positive integer that is equal to the sum of its proper divisors. (A proper divisor of a number
// is a positive divisor of the number, excluding the number itself.)
    // int a , sum = 0 ;
    // cout << "Enter a positive integer: " ;
    // cin >> a ;
    // for (int i = 1 ; i < a ; i++){
    //     if (a % i == 0) {
    //         sum += i ;
    //     }
    // }
    // if (sum == a) cout << "Given integer is a Perfect Number" ;
    //     else cout << "Given integer is not a Perfect Number" ;


// Write a program to print all integers from 1 to 500 that are not divisible by 3. You must use the continue keyword.
    // for (int i = 1 ; i <= 500 ; i++){
    //     if (i % 3 == 0) continue ;
    //     else cout << i << " " ;
    // }


// Take an integer a as input and print the fibonacci series up to a terms. 
    // int N , a = 0 , b =1 , sum = 0;
    // cout << "Enter number of terms: " ;
    // cin >> N ;
    // for (int i = 0 ; i <= N ; i += 1){
    //     cout << a << " " ;
    //     sum = a + b ;
    //     a = b ;
    //     b = sum ; 
    // }


// Write a program to check if a given number is a Palindrome. A palindrome number reads the same forward and backwards.
    // int a , digit , reverse = 0 , original ;
    // cout << "Enter a number: " ;
    // cin >> a ;
    // original = a ;
    // while (a != 0){
    //     digit = a % 10 ;
    //      reverse = reverse*10 + digit ;
    //     a /= 10 ;
    // }
    // if (original == reverse) cout << "The given number is a palindrome" ;
    // else cout << "The given number is not a palindrome" ;


// Take an integer K as input. Two variables a and b can take any integer value from 1 to K. 
// Write a program to print all possible ordered combinations of (a,b) on a new line.
    // int K , i , j;
    // cout << "Enter a integer: " ;
    // cin >> K ;
    // for (int i = 1 ; i <= K ; i++){
    //     for (int j = 1 ; j <= K ; j++){
    //         cout << "(" << i << "," << j << ")" << " " ;
    //     }
    // }


// Write a program that prints all integers from 1 to 500 that contains the digit 2, the digit 7,
// or both , anywhere within there numerical representation.
     // int a , original = 0 , digits , n ;
    // cout << "Enter a number: " ;
    // cin >> a ;
    // for (int i = 1 ; i <= a ; i++){
    //     original = i ;
    //     n = i ;
    //     while (n != 0){
    //         digits = n % 10 ;
    //         if (digits == 2 || digits == 7) {
    //             cout << original << " " ;
    //             break ;}
    //         n /= 10 ; 

    //     }
        
    // }


// Write a program to iterate through the numbers from 1 to 1000 and 
// print only those numbers whose sum of digits is exactly 17.
    // int a , n , original  , digits ;
    // cout << "Enter a number: " ;
    // cin >> a ;
    // for (int i = 1 ; i <= a ; i++){
    //     original = i ;
    //     n = i ;
    //     int sum = 0 ;
    //     while(n != 0){
    //         digits = n % 10 ;
    //         sum += digits ;
    //         n /= 10 ;
    //     }
    //     if (sum == 17) cout << original << " " ;
    // }
    

// Write a program that takes two positive integers as input and 
// prints all the prime numbers that lie strictly between them.
    // int a , b ;
    // cout << "Enter the first number: " ;
    // cin >> a ;
    // cout << "Enter the second number: " ;
    // cin >> b ;
    // for (int i = a+1 ; i <= b ; i++){
    //     int factor = 0 ;
    //     int original = i ;
    //     int n = i ;
    //     for (int j = 1 ; j<= n ; j++){
    //         if(n % j == 0) {
    //             factor++ ; 
    //         }
            
    //     }
    //     if (factor == 2) cout << original << " " ;
    // }


// Write a program that prints numbers starting from 1 up to 1000. However, the loop must terminate immediately as soon as 
// it encouters a number whose sum of digits equals 23.
    // int a , n  ;
    // cout << "Enter the last number: " ;
    // cin >> a ;
    // for (int i = 1 ; i <= a ; i++){
    //     int digit , sum = 0 ;
    //      n = i ;
    //     while (n != 0){
    //         digit = n % 10 ;
    //         sum += digit ;
    //         n = n/10 ;
    //     }
    //     cout << i << " " ;
    //     if (sum == 23) {
    //         break ; } 
    // }
    
    
// Take an integer as input and mathematically subtract 293 from it. Compute and print the reversed value 
//  of this new resulting integer. Ensure your logic correctly handles negative results.
    // int a , subtract ;
    // cout << "Enter a number: " ;
    // cin >> a ;
    // if (a == 293) cout << 0 ;
    // subtract = (a-293) ;
    // if (subtract > 0) {
    // while (subtract != 0){
    //     int digit ;
    //     digit = subtract % 10 ;
    //     subtract /= 10 ;
    //     cout << digit ; 
    //     }
    // } 
    // if (subtract < 0){
    //     int reversed = 0;
    //     subtract *= -1 ;
    //     while (subtract != 0){
    //         int digit ; 
    //         digit = subtract % 10 ; 
    //         subtract /= 10 ;
    //          reversed = reversed*10 + digit ;
    //     }
    //     cout << (reversed)*(-1) ;   
    // }


// Write a program to print all upper case English alphabets from 'A' to 'Z' along with there corresponding 
// ASCII values using a loop .
    // for (int i = 65 ; i <= 90 ; i++){
    //     cout << char(i) << " --> " << i << endl ;
    // }


// Write a program that accepts an integer input and finds the strictly next prime number that appears after it .
// If the user provides an input greater than 500, immediately print "Invalid Input" and terminate.
    // int a ;
    // cout << "Enter an integer less than or equal to 500: " ;
    // cin >> a ;
    // if (a > 500) {
    //     cout << "Invalid Input" ; 
    //     return 0 ;
    // }
    // for (int i = a+1 ; ; i++){
    //     int n = i ;
    //     int factor = 0 ;
    //     for (int j = 1 ; j <= n ; j++){
    //         if (n % j == 0){
    //             factor++ ;
    //         }
            
    //     }
    //     if (factor == 2){ cout << n ;
    //             break ; }
        
    // }


// Take a positive integer input from the user and print its prime factors. 
    // int a ;
    // cout << "Enter a positive integer: " ;
    // cin >> a ;
    // for (int i = 2 ; i <= a ; i++){
    //     int factor = 0 ;
    //     if (a % i == 0){
    //         int n = i ;
    //         for (int j = 1 ; j <= n ; j++){
    //             if (n % j == 0){
    //                 factor++ ;
    //             }
                
    //         }
    //         if (factor < 3) cout << n << " " ;
             
    //     }
    // }



// Write a program to compute a^b (a raised to the power b) where a is a decimal value and
// b is an integer (which can be positive, negative, or zero) entered by the user. Do not use the
// pow() function from <cmath>.
    // long double a, n = 1;
    // int b;

    // cout << "Enter value of base: "; 
    // cin >> a;

    // cout << "Enter value of power: ";
    // cin >> b;

    // if (b > 0) {
    //     for (int i = 1; i <= b; i++) {
    //         n = n * a;
    //     }
    // }
    // else if (b < 0) {
    //     for (int i = 1; i <= -b; i++) {
    //         n = n * a;
    //     }
    //     n = 1 / n;
    // }
    // else {
    //     n = 1;
    // }

    // cout << n;


}