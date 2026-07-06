// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     int x;
//     n = 15 ;
//     for(x=2; x<n; x++){
//         if (n%x==0){
//             cout<<"composite number ";
//             break;
//         }
//     }
//         if(x==n){
//             cout<<"prime number";
        
//         }
//         }

// #include <iostream>
// using namespace std ;
// int main (){
//     int n = 7;
//     bool isprime = true;
//     for(int i=2; i<n-1; i++){
//         if(n % i == 0){
//             isprime = false;
//             break;

//         }

//     }
//     if(isprime == true){
//         cout<<"number is prime"<<endl;
//     }
//     else{
//         cout<<"number is not prime"<<endl;
//     }


    
//         }


// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"enter a number :";
//     cin>>n;


//     bool isprime = true;
//     for(int i=2; i<n-1; i++){
//         if(n % i == 0){
//             isprime = false;
//             break;

//         }

//     }
//     if(isprime == true){
//         cout<<"number is prime"<<endl;
//     }
//     else{
//         cout<<"number is not prime"<<endl;
//     }
//         }


#include <iostream>
using namespace std ;
int main (){
    int n = 7;
    bool isprime = true;
    for(int i=2; i<n-1; i++){
        if(n % i == 0){
            isprime = false;
            break;

        }

    }
    if(isprime == true){
        cout<<"number is prime"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }


    
        }