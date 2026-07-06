// #include <iostream>
// using namespace std;

// void sayHellow(){
//     cout<<"Hellow :)\n" ;
// }
// int main(){
//     sayHellow(); // function call
//     sayHellow(); 
//     sayHellow(); 
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void assistant(){
//     cout<<"hellow shradha mam: \n";
// }

// void sayHellow(){
//     assistant();
//     cout<<"work done :)\n" ;
// }

// int main(){
//     sayHellow(); // function call
    
//     return 0;
// }



// // syntax with parameter
// #include <iostream>
// using namespace std;

// int sum(int a , int b){ // a and b are parameter
//     int sum = a+b;
//     return sum;
// }
// int diff(int a , int b){
//     int diff = a-b;
//     return diff;
// }

// int main(){
//     int s = sum(2,4); // 2 and 4 are arguments
//     cout<<"sum = "<<s <<endl;
//     int d = diff(4,10);
//     cout<<"diff ="<<d<<endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int sum(int a , int b = 1 ){ // a and b are parameter
//     int sum = a+b;
//     return sum;
// }

// int main(){
//     int s = sum(2); // 
//     cout<<"sum = "<<s <<endl; // output 2+1=3(default)
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int sum(int a , int b=7 ){ // a and b are parameter
//     int sum = a+b;
//     return sum;
// }

// int main(){
//     int s = sum(2, 6); // 
//     cout<<"sum = "<<s <<endl; // output 2+6=8(default)
    
//     return 0;
// }



// //WAF to find  the product  of 2 number a & b.
// #include <iostream>
// using namespace std ;

// int prod(int a, int b){
//     return a*b;
// }
// int main(){
//     cout<<"product = "<< prod(5,8)<<endl;
    
//     return 0;
// }



// //WAF to print if a number is odd or even.
// #include <iostream>
// using namespace std ;
// bool isEven(int n){
//     if(n%2==0){
//         return true;
//     } else{
//         return false;
//     }
// }
// int main(){
//     cout<<isEven(23)<<endl;
//     return 0;
// }



// //WAF to print a factorial of a number , n.
// #include <iostream>
// using namespace std ;
// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     cout<<"factorial of n is= " <<fact<<endl;
// }
// int main(){
//     factorial(0);
//     factorial(1);
//     factorial(3);
//     factorial(5);
//     return 0;
// }



// #include <iostream>
// using namespace std ;

// int x=25;// global scope variable (fun ke bahar defined kar do aur output kisi bhi function ke ander kara sakte ho)
// void sum(int a , int b){
//     int s = a+b;// local scope (output wahi karo jaha defined karo)
//     cout<<s<<endl;
//     cout<<x<<endl;
// }
// int main(){
//     sum(5,4);
//     int s = 10;
//     cout<<s<<endl;
//     cout<<x;
//     return 0;
// }



// #include <iostream>
// using namespace std ;
// bool isprime(int n){
//     if(n==1){
//         return false;
//     }
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     cout<<isprime(3)<<endl;// output 1(prime hai)
//     cout<<isprime(1)<<endl;//0
//     cout<<isprime(9)<<endl;//0
//     cout<<isprime(17)<<endl;//1
//     return 0;
// }



//WAF to print a binomaial coefficient of n, r 
// #include <iostream>
// using namespace std;
//  int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
//  }
//  int bincoeff(int n , int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);
//     int result = val1 / (val2 * val3);
//  }

//  int main(){
//     cout<<bincoeff(4,2)<<endl;
//     cout<<bincoeff(5,2)<<endl;
//     cout<<bincoeff(8,5)<<endl;
//  }
    


// //print all prime to 2 to n;
// #include <iostream>
// using namespace std;

// bool isprime (int n){
//     if(n==1){
//         return false;
//     }
//     for(int i=2;i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void allprime(int n){
//     for(int i=2; i<=n; i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }

// int main(){
//      allprime(100);
//      return 0;
// }

//print all prime to 2 to n;
