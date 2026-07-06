// #include <iostream>
// using namespace std;

// void maxSubarray(int *arr, int n){
//     for(int st=0; st<n; st++){
//         for(int end=st; end<n; end++){
//             int currsum = 0;
//             for(int i=st; i<=end;i++){
//                 currsum +=arr[i];
//             }
//             cout << currsum <<",";
//         }
//         cout << endl; 
//     }
// }

// int main(){
//     int arr[] = {2, -3, 6, -5, 4, 2};
//     int n = 6;
//     maxSubarray(arr , n);
//     return 0;
// }




// #include <iostream>
// using namespace std;

// void maxSubarray(int *arr, int n){
//     int maxSum =INT16_MIN;
//     for(int st=0; st<n; st++){
//         for(int end=st; end<n; end++){
//             int currsum = 0;
//             for(int i=st; i<=end;i++){
//                 currsum +=arr[i];
//             }
//             cout << currsum <<",";
//             maxSum = max(maxSum, currsum); // for comparison and find largest
//         }
//         cout << endl; 
//     }
//     cout << "maximum subarray sum = " << maxSum << endl;
// }

// int main(){
//     int arr[] = {2, -3, 6, -5, 4, 2};
//     int n = 6;
//     maxSubarray(arr , n);
//     return 0;
// }




// KADANE's Algorithm
#include <iostream>
using namespace std;

void maxSum(int *arr, int n){
    int currSum = 0;
    int maxSum = INT16_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

int main(){
    int arr[] = {2,-3, 6, -5, 4, 2};
    int n = 6;
    maxSum(arr, n);
}
