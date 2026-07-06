// // output in array
// #include <iostream>
// using namespace std ;
// int main(){
//     int marks[5] = {1, 3, 5, 7, 9};
//     int length = sizeof(marks) / sizeof(int);

//     for(int idx=0; idx < length; idx++ ){
//         cout << marks[idx] << " "; // idx=0,1,2,3,4
//     }
// }


// // basic 
// #include <iostream>
// using namespace std ;
// int main(){
//     int arr[5] = {1, 3, 5, 7, 9};
//     int n = sizeof(arr) / sizeof(int);

//     for(int i=0; i<n; i++ ){
//         cout << arr[i] << " "; // idx=0,1,2,3,4
//     }
//  }



// // input in array
// #include <iostream>
// using namespace std ;
// int main(){
//     int arr[5];
//     int n = sizeof(arr) / sizeof(int);

//     // input
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
// }    




// // input and output  in array
// #include <iostream>
// using namespace std ;
// int main(){
//     int arr[5]; // we give the length
//     int n = sizeof(arr) / sizeof(int);

//     // input
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     // output
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<",";
//     }

// }
    

// input and output  in array
#include <iostream>
using namespace std ;
int main(){
    int n;
    cout << "enter length of array :";
    cin >> n;
    
   int arr[n];
    // input
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // output
    for(int i=0; i<n; i++){
        cout << arr[i] <<",";
    }

}
    