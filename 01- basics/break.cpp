// #include <iostream>
// using namespace std ;
// int main (){
//     int i = 1;
//     while (i<=100){
//         if(i%2==0){
//             i++;
//             continue;
             
//         } 
//         cout<<i<<" ";
//         i++;
        
//         }
//     return 0;    
//     }

// #include <iostream>
// using namespace std ;
// int main (){
//     for(int i =1;i<10;i++){
//         if(i==3){
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }

// #include <iostream>
// using namespace std ;
// int main (){
//     for(int i =1;i<100;i++){
//         if(i%2==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }


// //wap to show number entered by the user except multiplles of 10
// #include <iostream>
// using namespace std ;
// int main (){
//     int i;
//     int n;

//     cout<<"enter a number :";
//     cin>>n;

//     for( i=1; i<=n; i++){
//         if(n%10==0){
//             continue;
//         }
//         cout<<"you entered="<<n<<endl;
//         break;
//     }
        
//     }

#include <iostream>
using namespace std ;
int main (){
    int n ;
    int x;
    n = 15 ;
    for(x=2; x<n; x++){
        if (n%x==0){
            cout<<"composite number ";
            break;
        }
    }
        if(x==n){
            cout<<"prime number";
        
        }
        }
    







    



