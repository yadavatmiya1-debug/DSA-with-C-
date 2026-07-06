#include <iostream>
using namespace std ;

void Trap(int *height, int n){
    int leftMax[20000], rightMax[20000]; // given rahta hai
    leftMax[0] = height[0];
    rightMax[n-1] = height[6];
    
    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
        cout << leftMax[i] <<"," ;
    }
    cout <<endl;
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], height[i+1]);
        cout << rightMax[i] <<",";
    }
    cout << endl;

    int waterTrapped =0;
    for(int i=0;i<n; i++){
         int currwater = min(leftMax[i], rightMax[i]) - height[i];
         if(currwater > 0 ){
            waterTrapped += currwater;
         }
    }

    cout << "water Trapped= " << waterTrapped << endl;




   
}
int main (){
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = 7;
    Trap(height, n);
    return 0;
}