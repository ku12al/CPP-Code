#include<iostream>
#include<bits/stdc++.h>//any stl functions use this library
using namespace std;
// //selection sort
// int main(){
//     int arr[5];
//     cin>>arr[5];
//     int n;
//     int minIndex = 0;

//     for(int i = 0; i<n-1; i++){
//         minIndex = i;

//         for(int j = j+1; j<n; j++){
//         minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]);
//     }

//     cout<<"sorted array"<<arr[5]<<endl;

// }


// //Bubble sort
// int main(){

//     int arr[5],temp,i,j,n;
//     cin>>n;
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     for(i=0; i<n; i++){
//         for(j=0; j<n-i; j++){
//             if(arr[j]>arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     return 0;
// }



// //Insertion sort
// int insertionSort(int n, vector<int> &arr){
//     for(int i=1;i<n;i++){
//         int temp = arr[i];
//         int j=j-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }

//         arr[j+1] = temp;
//     }
// }