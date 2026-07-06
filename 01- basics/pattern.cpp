// #include <iostream>
// using namespace std ;
// int main () {
//     cout<<"* * * *\n* * *\n* *\n*";
//     return 0;
// }
//--------OR---------
// #include <iostream>
// using namespace std ;
// int main () {
//     cout<<"* * * *\n";
//     cout<<"* * *\n";
//     cout<<"* *\n";
//     cout<<"*";

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=4; i++){
//         for(int j=1; j<=4; j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//         cout<<i<<" ";// output 1111/2222/3333/4444
//     }
//     cout<<endl;
// }
// }

// // *
// // * *
// // * * *
// // * * * *
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4 ;
//     // outer loop
//     for(int i=1; i<=n; i++){
//         // inner loop
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// //for inverted 
// #include <iostream>
// using namespace std ;
// int main() {
//     int n=4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// // 1
// // 12
// // 123
// // 1234
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;

//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// //A
// //BC
// //DEF
// //GHIJ
// #include <iostream>
// using namespace std ;
// int main(){
//     char ch='A';
//     int i,j=1;
//     int n=4;

//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;

//     }
//     return 0;

// }

// // *****
// // *  *
// // *  *
// // *****
// #include <iostream>
// using namespace std;
// int main(){
//     int i , j = 1;
//     int n=4;
//     for(i=1; i<=n; i++){
//         cout<<"*";//first
//         for(j=1; j<=n-1; j++){
//             if(i==1 || i==n){
//                 cout<<"*";
//             } else{
//                 cout<<" ";
//             }
//         }
//         cout<<"*" <<endl; //last
//     }
// }

// //       *(inverted and rotated half pyramid)
// //     * *
// //   * * * 
// // * * * * 
// #include <iostream>
// using namespace std ;
// int main (){
//     int i , j = 1;
//     int n = 4;

//     for(i=1; i<=n; i++){
//         //spaces
//         for(j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         // star
//         for(j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10
// // 11 12 13 14 15
// #include <iostream>
// using namespace std;
// int main(){
//     int i ,j = 1;
//     int n=5;
//     int num = 1;

//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

