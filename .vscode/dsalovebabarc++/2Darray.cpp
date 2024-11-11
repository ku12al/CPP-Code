#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // int m;
    // cin>>m;
    // int arr[n][m];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // int target;
    // cin>>target;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(arr[i][j]==target){
    //             cout<<i<<" "<<j<<endl;
    //         }
    //     }
    // }
    return 0;
}
/*
// int largestRowSum(int arr[][4], int n, int m){
//     int maxi = INT_FAST8_MIN;
//     int rowIndex = -1;

//     for(int n = 0;n <3; n++){
//         int sum = 0;
//         for(int m = 0; m <4; m++){
//             sum += arr[n][m];

//         }
//         if(sum > maxi){
//             maxi = sum;
//             rowIndex = n;
//         }
//     }
//     cout<<"the maximum sum is"<<maxi<<endl;
//     return rowIndex;
// }



// int main(){
//     int arr[3][4];

//     cout<<"Enter the number of elements in the array"<<endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     //int ansIndex = largestRowSum(arr, n, m);
//     cout<<"Max row is at index "<< largestRowSum(arr, 3, 4)<<endl;
//     return 0;
// }*/



// // int main(){
// //     int arr[3][4];

// //     cout<<"Enter the number of elements in the array"<<endl;
// //     for(int i=0; i<3; i++){
// //         for(int j=0; j<4; j++){
// //             cin>>arr[i][j];
// //         }
// //     }

// //     for(int i=0; i<3; i++){
// //         for(int j=0; j<4; j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }

// //     printSum(arr, 3, 4);
// //     return 0;
// // }




// To check if element is found in 2d array
// // bool isPresent(int arr[][4], int target, int n, int m){
// //     for(int i = 0; i <n; i++){
// //         for(int j = 0; j < m; j++){
// //             if(arr[i][j] == target){
// //                 return true;
// //             }
// //         }
// //     }
// //     return 0;
// // }

// // int main()
// // {
// //     int arr[3][4];
// //     // int arr[3][4]={2,3,2,3,23,23,2,2,3,3,2,3};
// //     //int arr[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};

// //     for(int i=0; i<3; i++){
// //         for(int j=0; j<4; j++){
// //             cin>>arr[i][j];
// //         }
// //     }

// //     // for(int i=0; i<3; i++){
// //     //     for(int j=0; j<4; j++){
// //     //         cout<<arr[i][j]<<" ";
// //     //     }
// //     //     cout<<endl;
// //     // }

// //     cout<<"Enter the element of search "<<endl;
// //     int target;
// //     cin>>target;

// //     if(isPresent(arr, target, 3, 4)){
// //         cout<<"Element found "<<endl;
// //     }else{
// //         cout<<"Element not found "<<endl;
// //     }
// // return 0;

// // }


/*gfg practic question
    // for(int i=n;i>0;i--){
    //     for(int j=n;j>0;j--){
    //         for(int k=1;k<i;k++){
    //             cout<<j<<" ";
    //         }
    //     }
    //     cout<<"$";
    // }*/
