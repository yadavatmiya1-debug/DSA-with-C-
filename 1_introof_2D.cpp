// #include <iostream>
// using namespace std;
// int main(){
//     int student[3][3] = { {100, 100, 100},
//                           {85, 74, 89},
//                           {63, 72, 65}};
//     cout << student[1][1];
// return 0;
// }

// input and output 
#include <iostream>
using namespace std;
int main(){
    int arr[3][4];
    int m=3, n=4;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] <<",";
        }
        cout  << endl;
    }
    return 0;
}