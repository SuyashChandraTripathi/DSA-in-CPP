// THESE ARE JUST NOTES OF TIME COMPLEXITY WITH SOME PROBLEMS. 



// Time complexity is a way to measure how the running time of an algorithm grows as the input
// size n increases. It helps us compare algorithms and choose the more efficient one. It has a 
// representation "O(n)" --> called the big O.  

// RULE 1 --> For n , kn , n + k , n - k , n/k time complexity will be O(n)

// Ques. 1 --> Find the TC for loop iteration.
// int n ;
// cin >> n ;
// for(int i = 1 ; i <= n ; i++){
//     cout << "Suyash" ;  
// }
// Ans. --> TC = O(n)

// Ques. 2 --> Find the TC if we increment ‘i’ by 2
// int n ;
// cin >> n ;
// for(int i = 1; i <= n; i+=2) {
// cout << ("Suyash");
// Ans. --> TC = O(n/2) --> O(n)

// Ques. 3 --> Find the time complexity
// int n ;
// cin >> n ;
// for(int i = 1 ; i <= 10 ; i++){
//     cout << "Suyash" ;  
// }
// Ans. --> TC = O(10) --> O(10*1) --> O(1)

// Ques. 4 --> Find the time complexity
// int n , m ;
// cin >> n >> m ;
// for(int i = 1 ; i <= n ; i++){
//     cout << "Suyash" ;  
// }
// for(int i = 1 ; i <= m ; i++){
//     cout << "Pranjali" ;  
// }
// Ans. --> TC = O(m+n) or O(max(m,n))

// Ques.5 --> Find the time complexity
// int n ;
// cin >> n ;
// for(int i = 1; i <= n; i++) {
// for(int j = 1; j<= n; j++) {
// cout << (Suyash);
// }
// }
// Ans. --> O(n^2)

// Ques. 6 --> Find the time complexity
// int n ;
// cin >> n ;
// for(int i = 1; i <= n; i++) {
// for(int j = 1; j<= i; j++) {
// cout << ("Suyash");
// }
// }
// Ans. --> O(n^2/2 + n/2) --> O(n)

// Ques. 7 -->  Calculate the time complexity
// int n ;
// cin >> n ;
// for(int i = 1; i <= n; i*=2){
// cout << ("Suyash");
// }
// Ans. --> O(logn base 2) --> O(logn)

// Ques. 8 --> Find the time complexity
// int n ;
// cin >> n ;
// for(int i = 1; i <= n; i*=2) {
// for(int j = 1; j<= n; j++) {
// cout << ("Suyash");
// }
// }
// Ans. --> O((logn)^2)

// ***Ques: Find the time complexity
// int n ;
// cin >> n ;
// for(int i = 1; i <= n; i*=2) {
// for(int j = 1; j<= i; j++) {
// cout << ("Suyash");
// }
// }
// Ans. --> 
