#include<iostream>
using namespace std;


/*
//Binary search
int print(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout << arr[i] <<" ";
    }cout << endl;
}
int binarySearch(int arr[], int s, int e, int k){
    //base case
    print(arr, s,e);

    if(s>e) return -1;
    int mid = s + (e-s)/2;
    cout<<"value of mid "<<arr[mid]<<endl;
    if(arr[mid] == k) return true;
    
    if(arr[mid]< k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }

}
int main(){
    int arr[6] = {11,23,3,4,5,6};
    int size = 6;
    int key = 22;

    cout<< "present or not " << binarySearch(arr,0,5,key)<<endl;

    return 0;
}*/
 





/*
// //linear search with recursion
// int printArray(int arr[], int size){
//     cout<< "size of array is "<< size<<endl;    this code just print how searching is work
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// int linearSearch(int *arr, int size, int k)
// {
//     printArray(arr, size);
//     if(size==0) return false;//base case
//     if(arr[0]==k)return true;
//     //recursive case
//     int remainingPart = linearSearch(arr+1,size-1,k);
//     return remainingPart;
// }

// int main(){
//     int arr[5] = {2,6,7,5,4};
//     int size = 5;
//     int key = 4;
//     bool ans = linearSearch(arr, size, key);
//     if(ans){
//         cout<<"present"<<endl;

//     }
//     else{
//         cout<<"Not present"<<endl;
//     }
//     return 0;
// }*/
//H.W sum of array


/*
//sorted array

// bool isSorted(int *arr, int size){
//     //base case
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0] > arr[1]){
//         return false;
//     }else{
//         bool remainingPart = isSorted(arr +1, size-1);
//         return remainingPart;
//     }

//     //recursive case
//     isSorted(arr, size);
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //int arr[5] = {5,2,1,4,6};
//     int size = n;

//     bool ans = isSorted(arr, size);

//     cout<<ans<<endl;
// }*/