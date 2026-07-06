// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<&a;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout<<ptr<<" = "<<&a<<endl;
    
//     float pi = 3.14;
//     float *ptr2 = &pi;
//     cout<<ptr2<<" = "<<&pi<<endl;

//     cout<<sizeof(ptr)<<"\n"; 
//     cout<<sizeof(ptr2)<<"\n";

//     int **pptr = &ptr;// pointer to pointer address
//     cout<<&ptr <<" = "<<pptr;//
// }


// // dereference operator (*ptr)
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout<<"value of a = "<<*ptr<<endl;
//     cout<<"address of a = "<<ptr<<endl;
    
//     *ptr = 20;
//     cout<<a;
//     return 0;
// }


// //null ptr
// #include <iostream>
// using namespace std ;
// int main (){
//     int *ptr = NULL;
//     cout<<ptr<<endl;// 0

//     int *ptr2;
//     cout<<ptr2<<endl;// random address
// }


// pass by value or call by value
// #include <iostream>
// using namespace std;

// void changeA(int a){
//     a = 20;
//     cout<<a<<endl;
// }

// int main(){
//     int a = 10;
//     changeA(a);

//     cout<< a <<"\n";
//     return 0;
// }


// // pass by reference 
// #include <iostream>
// using namespace std;

// void changeA(int *ptr){
//     *ptr = 20;
//     cout<<*ptr<<endl;
// }

// int main(){
//     int a = 10;
//     changeA(&a);

//     cout<< a <<"\n";
//     return 0;
// }


// reference val
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;
    b = 20;
    
    cout<< a <<"\n"<< b;
    return 0;
}