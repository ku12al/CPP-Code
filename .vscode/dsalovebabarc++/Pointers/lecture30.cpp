#include<iostream>
using namespace std;



            // MACROS - A piece of code in a program that is replace by a macro
// // #define PI 3.14

// // int main(){
// //       int r;
// //       cin>>r;

// //       double area = PI * r * r;

// //       cout<<area<<endl;
// // }




           // //Global Variables
// int score = 15;
// void a(int &i){
//       cout<< score << " int a "<< endl;
//       cout<< i << endl;
// }
// void b (int &i){
//       cout<< score << " int b "<< endl;
//       cout<< i << endl;
// }
// int main(){
//       cout<< score << " int main "<< endl;
//       int i=5;
//       a(i);
//       b(i);
//       cout<< i << endl;

//       return 0;
// }



            //inline function - if any function which condition in single line that why use inline function
// inline int getMax(int &a, int &b) {
//       return (a>b) ? a : b;
// }

// int main(){
//       int a = 1, b=2;
//       int ans = 0;

//       ans = getMax(a, b);

//       cout<< ans<< endl;
//       a = a+ 3;
//       b = b+ 4;
//       ans = getMax(a, b);
//       cout<< ans<< endl;

//       return 0;
// }



            // default arguments
void print(int arr[], int n, int start =0){
      for(int i=start; i<n; i++){
            cout<< arr[i]<< endl;
      }
}

int main(){
      int arr[5] = {1,4,7,8,9};
      int size = 5;

      print(arr, size);
      cout<<endl;
      print(arr, size, 2);

      return 0;
}


