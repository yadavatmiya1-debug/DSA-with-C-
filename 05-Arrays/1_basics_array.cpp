// #include <iostream>
// using namespace std;
// int main(){
//     int marks1=90;
//     int marks2=98;
//     int marks3=99;
//     cout<<marks1<<endl;
//     cout<<marks2<<endl;

// }


// // creating an array
// #include <iostream>
// using namespace std;
// int main(){
//     int marks[50];
//     cout << marks[0] << endl;
//     cout << marks[2] << endl;
//     cout << marks[49] << endl;
//     cout << marks[50] << endl;
//     cout << marks[90] << endl;

// }


// // creating an array
// #include <iostream>
// using namespace std;
// int main(){
//     int marks[50] = {1, 2, 3};
//     cout << marks[0] << endl;
//     cout << marks[2] << endl;
//     cout << marks[4] << endl;
//     cout << marks[50] << endl;
//     cout << marks[90] << endl;
// return 0;
// }



// creating an array
#include <iostream>
using namespace std;
int main(){
    int marks[] = {1, 2, 3}; 
    cout << marks[0] << endl;
    cout << marks[2] << endl;
    cout << marks[4] << endl;
    cout << marks[50] << endl;
    cout << marks[90] << endl;
    cout << sizeof(marks) << endl; // 
    cout << sizeof(marks) / sizeof(int); // array ka size bata rha hai(length of array)
return 0;
}