// # include <iostream>
// using namespace std ;
// int main (){
//     int arr[] = {5, 4, 3, 9, 2};
//     int n = sizeof(arr) / sizeof(int);
//     int max = arr[0];

//     for(int i=0; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout << "Largest = " << max << endl;
// return 0;     
// }


// print smallest 
# include <iostream>
using namespace std ;
int main (){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < max){
            max = arr[i];
        }
    }
    
    cout << "Smallest = " << max << endl;
return 0;     
}