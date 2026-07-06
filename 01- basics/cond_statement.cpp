// #include <iostream>
// using namespace std ;
// int main(){
//     int num ;
//     cout<<"enter a number : ";
//     cin>>num;
     
//     if(num%2==0){
//         cout<<"even number";
//     }
//     else{
//         cout<<"odd number";
//     }
//     return 0;
// }

// //else if (for two condition)
// #include <iostream>
// using namespace std ;
// int main(){
//     int marks ;
//     cout<<"enter a marks :";
//     cin>>marks;

//     if (marks >=90){
//         cout<<"A";
//     }
//     else if(marks >=80){
//         cout<<"B";
//     }
//     else{
//         cout<<"C";
//     }

//     return 0;
// }


// //if (run one by one )
// #include <iostream>
// using namespace std ;
// int main(){
//     int marks ;
//     cout<<"enter a marks"; // 99 = AB output
//     cin>>marks;

//     if (marks >=90){
//         cout<<"A";
//     }
//     if(marks >=80){
//         cout<<"B";
//     }
//     else{
//         cout<<"C";
//     }

//     return 0;
// }


// //crete an income Tax calculator
// #include <iostream>
// using namespace std ;
// int main (){
//     float income ;
//     int tax;
//     cout<<"enter income (in Lakhs) :";
//     cin>>income;
//     if (income < 5 ){
//        tax = 0 ;
//     }
//     else if (tax>=5 && tax<=10){
//         tax = 0.2*income;
//     }
//     else {
//         tax = 0.3*income;
     
//     }     cout<<"Tax  = " << tax*100000 <<endl;


//     return 0;
// }


// //Teranary operator "variable =  condition? statement1(true): statement2(false);"
//#include <iostream>
// using namespace std ;
// int main(){
//     bool isadult;
//     int age ;
//     cout<<"enter age :";
//     cin>>age;
//     // if(age>18){
//     //     cout<<"True";
//     // }
//     // else {
//     //     cout<<"False";
// //     // }

//      isadult = age >=18 ? true : false;
//        cout<<isadult;
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// int main(){
//     int a = 10;
//     int b = 5;
//     int largest = a>=b ? a: b;
//     cout<<"largest is:"<<largest;

//     return 0 ;
// }

// // switch statement
// #include <iostream>
// using namespace std ;
// int main(){
//     int day = 76;
//     switch(day) {
//         case 1: cout<<"monday"<<endl;
//         break;
//         case 2: cout<<"tuesday"<<endl;
//         break;
//         case 3: cout<<"wednesday"<<endl;
//         break;
//         case 4: cout<<"thursday"<<endl;
//         break;
//         case 5: cout<<"friday"<<endl;
//         break;
//         case 6: cout<<"saturday"<<endl;
//         break;
//         case 7: cout<<"sunday"<<endl;
//         break;
//         default: cout<<"invalid day"<<endl;
//         break;
//     }

//     return 0 ;
// }

// // make calculator by switch statement

