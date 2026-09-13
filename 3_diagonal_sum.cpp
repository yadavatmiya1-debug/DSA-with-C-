// // for even n=2,4,6_ _ _ _ _ _ _ _ _
// #include <iostream>
// using namespace std;

// void diagonalSum(int mat[4][4], int n){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i == j){ // pd
//                 sum += mat[i][j];
//             }else if(j == n-i-1){ //sd
//                 sum += mat[i][j]; 
//             }
//         }
//     }
//     cout << "sum = " << sum << endl;
// }
// int main(){
//     int matrix[4][4] = {{1,2,3,4},
//                      {5,6,7,8},
//                      {9,10,11,12},
//                      {13,14,15,16} 
//     };
//     diagonalSum(matrix, 4);
  
//     return 0;
// }

// // for  n=3
// #include <iostream>
// using namespace std;

// void diagonalSum(int mat[][3], int n){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i == j){
//                 sum += mat[i][j];
//             }else if(j == n-i-1){
//                 sum += mat[i][j]; 
//             }
//         }
//     }
//     cout << "sum = " << sum << endl;
// }
// int main(){
//     int matrix[3][3] = {{1,2,3,},
//                         {4,5,6,},
//                         {7,8,9,}
                        
//     };
//     diagonalSum(matrix, 3);
//     return 0;
// }



// for single loop 0(n)
#include <iostream>
using namespace std;

    void diagonalSum(int mat[][3], int n){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += mat[i][i]; //pd
            if(i != n-i-1){
                sum += mat[i][n-i-1]; // sd
            }
        }
    
    cout << "Sum =" << sum << endl;
    }

    int main(){
    int matrix[3][3] = {{1,2,3,},
                        {4,5,6,},
                        {7,8,9}                 
    };
    diagonalSum(matrix, 3);
    return 0;
} 