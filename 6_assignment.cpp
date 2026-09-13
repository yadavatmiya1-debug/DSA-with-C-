// Q-1
// #include <iostream>
// using namespace std;
// int main (){
//     int mat [2][3] = {{4,7,8},
//                       {8,8,7}
//     };
//     int count = 0;
//     int n = 2, m = 3;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if (mat[i][j] == 7){
//                 count ++;
//             }
//         }
//     }
//     cout << count;
//     return 0;
// }


// // Q-2
// #include <iostream>
// using namespace std;
// int main (){
//     int mat [3][3] = {{1,4,9},
//                       {11,4,3},
//                       {2,2,3}
//     };
//     int sum = 0;
//     int n = 3, m = 3;
//     for(int i=1; i<2; i++){
//         for(int j=0; j<m; j++){
//             sum += mat[i][j];
//         }
//     }
//     cout << sum;
//     return 0;
// }

// // another method 
// #include <iostream>
// using namespace std;
// int main (){
//     int mat [3][3] = {{1,4,9},
//                       {11,4,3},
//                       {2,2,3}
//     };
//     int sum = 0;
//     int n = 3, m = 3;
//     int i=1;
    
//         for(int j=0; j<m; j++){
//             sum += mat[i][j];
//         }
//     cout << sum;
//     return 0;
// }

// // Q3 transpose 
// #include <iostream>
// using namespace std;
// int main (){
//     int mat [3][3] = {{1,4,9},
//                       {11,4,3},
//                       {2,2,3}
//     };
//     int n = 3, m = 3;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout << mat[j][i] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }




// for 2*3
#include <iostream>
using namespace std;

int main() {
    int mat[2][3] = {
        {4,7,8},
        {8,8,7}
    };

    int n = 2, m = 3;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}