// staircase serach
// #include <iostream>
// using namespace std ;

// bool search(int mat[][4], int n, int m, int key){
//     int i = 0, j = m-1;

//     while( i<n && j>=0) {
//         if(mat[i][j] == key) {
//             cout << "Found at cell(" << i << "," << j << ")\n";
//             return true;
//         }
//         else if(mat[i][j] > key){
//             // left
//             j--;
//         }
//         else {
//             // down
//             i++;
//         }
//     }
//     cout << "key not found";
//     return false;
// }
// int main(){
//     int matrix[4][4] = {{10,20,30,40},
//                       {15,25,35,45},
//                       {27,29,37,48}, 
//                       {32,33,39,50}};
//     search(matrix, 4, 4, 300);
//     return 0;
// }


// staircase search (from down side )
#include <iostream>
using namespace std ;

bool search(int mat[][4], int n, int m, int key){
    int i = n-1, j = 0;

    while( i>=0 && j<n) {
        if(mat[i][j] == key) {
            cout << "Found at cell(" << i << "," << j << ")\n";
            return true;
        }
        else if(mat[i][j] > key){
            // left
            i--;
        }
        else {
            // down
            j++;
        }
    }
    cout << "key not found";
    return false;
}
int main(){
    int matrix[4][4] = {{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48}, 
                      {32,33,39,50}};
    search(matrix, 4, 4, 25);
    return 0;
}