// // 2d array name behaves as row pointer
// #include <iostream>
// using namespace std;
// int main(){
//     int mat[4][4] = {{1,2,3,4},
//                      {5,6,7,8},
//                      {9,10,11,12},
//                      {13,14,15,16}
//     };
//     cout << mat << endl; // 1st row 
//     cout << mat +1 << endl; // 2nd row
//     return 0;
// }


// // passing Matrix pointers to functions
// #include <iostream>
// using namespace std;

// void func(int mat[][4], int n, int m){
//     cout << "0th row of ptr " << mat << endl;
//     cout << "1st row of ptr " << mat+1 << endl;
//     cout << "2nd row of ptr " << mat+2 << endl;
// }

// void func2(int (*mat)[4], int n, int m){
//     cout << "0th row of ptr " << mat << endl;
//     cout << "1st row of ptr " << mat+1 << endl;
//     cout << "2nd row of ptr " << mat+2 << endl;
// }
// int main(){
//     int mat[4][4] = {{1,2,3,4},
//                      {5,6,7,8},
//                      {9,10,11,12},
//                      {13,14,15,16}
//     };
//     func(mat, 4, 4);
//     func2(mat, 4, 4);
//     return 0;
// }



// print exactly value 
#include <iostream>
using namespace std;
int main(){
    int mat[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}
    };
    cout << *(*(mat + 1) + 3) << endl;
    cout << *(*(mat + 2) + 3) << endl;
    cout << *(*(mat + 3) + 3) << endl;
    return 0;
}