#include <iostream>
using namespace std;

// //linear search

// bool search(int arr[], int size, int key){
//     for(int i = 0; i<size; i++){
//         if(arr[i] == key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     //int size = sizeof(arr)/sizeof(arr[0]);
//     int key;
//     cout << "Enter the key to be searched: ";
//     cin >> key;
//     if(search(arr, 10, key)){
//         cout << key << " is present in the array";
//     }
//     else{
//         cout << key << " is not present in the array";
//     }
//     return 0;
// }


//binary search

// int binarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end){
//         if(arr[mid] == key){
//             return mid;
//         }
//         if(key > arr[mid]){
//             start = mid + 1;
//         }else{
//             mid = mid - 1;
//         }
//         mid = start + (end-start)/2;
// }
// return -1;
// }

// int main(){
//     int even[6] = {0,1,2,3,4,5}; //
//     int odd[5] = {0,1,22,32,42}; //

//     int evenindex = binarySearch(even, 6, 3);

//     cout<< "Index is "<< evenindex<<endl;

//     int oddindex = binarySearch(odd, 5, 3);

//     cout<< "Index is "<< oddindex<<endl;

//     return 0;
// }


//problem for binary search
//first and last positions of an element i sorted array 
// #include<iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int key){
//     int s = 0, e = n-1;
//     int mid = s + (e - s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid]==key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(arr[mid] < key){
//             s = mid + 1;
//         }
//         else if(arr[mid] > key){
//             e = mid -1;
//         }
//         mid = s + (e - s)/2;
//     }
//     return ans;
// }
// int lastOcc(int arr[], int n, int key){
//     int s = 0, e = n-1;
//     int mid = s + (e - s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid]==key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(arr[mid] < key){
//             s = mid + 1;
//         }
//         else if(arr[mid] > key){
//             e = mid -1;
//         }
//         mid = s + (e - s)/2;
//     }
//     return ans;
// }

// int main(){
//     int even[11] = {0,1,3,2,3,3,3,7,8,9,10};
//     //int odd[5] = {0,1,2,3,4};
//     cout<<"first occurence of 3 is "<<firstOcc(even, 11, 3)<<endl;
//     cout<<"last occurence of 3 is "<<lastOcc(even, 11, 3)<<endl;

//     return 0;
// }

//Peak index in mountain address
// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     int peakIndexInMountainArray(vector<int>& arr){
//     int s =0;
//     int e = arr.size()-1;

//     int mid = s + (e-s)/2;

//     while(s<e){
//         if(arr[mid] < arr[mid+1]){
//             s = mid + 1;

//         }else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
//     }
// }


// //how to find pivot elements in array
// int getPivot(int arr[], int n){
//     int s=0;
//     int e = n - 1;
//     int mid = s + (e-s)/2;

//     while(s<e){
//         if(arr[mid]>= arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int binarySearch(int arr[], int s, int e, int k){
//     int start = s;
//     int end = e;

//     int mid = start + (end-start)/2;

//     while(start <= end){
//         if(arr[mid] == k){
//             return mid;
//         }
//         if(k > arr[mid]){
//             start = mid + 1;
//         }else{
//             mid = mid - 1;
//         }
//         mid = start + (end-start)/2;
// }
// return -1;
// }

// int findPosition(int arr[], int n , int k){
//     int pivot = getPivot(arr, n);
//     if(k>= arr[pivot] && k <= arr[n-1]){
//         return binarySearch(arr, pivot, n-1, k);
//     }else{
//         return binarySearch(arr, 0, pivot-1, k);
//     }
// }

// int main(){
//     int arr[6] = {33,88,225,99,11};
//     cout<<"pivot is "<<getPivot(arr, 6)<<endl;
// }


//square root using binary search

// long long int binarySearch(int n) {
//     int s = 0;
//     int e = n;
//     long long int mid = s + (e-s)/2;

//     int ans = -1;
//     while(s <=e){

//         long long int square = mid*mid;

//         if(square == n)
//             return mid;
//         if(square < n){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//         }
//         return ans;
        
//     }
//     int mySqrt(int x){
//             return binarySearch(x);
//     }


// //square root if decimal number
// long long int sqrtInt(int n) {
//     int s = 0;
//     int e = n;
//     long long int mid = s + (e-s)/2;

//     long long int ans = -1;
//     while(s <=e){

//         long long int square = mid*mid;

//         if(square == n)
//             return mid;
//         if(square < n){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//         }
//         return ans;
//     }

// double morePrecision(int n, int precision, int tempSol){
//     double factor = 1;
//     double ans = tempSol;

//     for( int i=0; i<precision; i++){
//         factor = factor/10;

//         for(double j=ans; j*j<n; j=j+factor){
//             ans = j;
//         }
//     }
//     return ans;
// }
    

// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;

//     int tempSol = sqrtInt(n);
//     cout<<"Answers: "<<morePrecision(n, 3, tempSol)<<endl;
//     return 0;

// }



// //Book alocation with binary search algorithm

// bool isPossible(int arr[], int n, int m, int mid){
//     int studentCount =1;
//     int pageSum = 0;

//     for(int i=0;i<n;i++){
//         if(pageSum + arr[i] >= mid){
//             pageSum += arr[i];
//         }else{
//             studentCount++;
//             if(studentCount > m || arr[i] > mid){
//                 return false;
//             }
//             pageSum = arr[i];
//         }   
//     }
//     return true;

// }

// int allocations(int arr[], int n, int m){
//     int s = 0;
//     int sum = 0;

//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(isPossible(arr,n,m,mid)){
//             ans = mid - 1;
//         }
//         else{
//             ans = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int ans = 0;

// }



//aggresive cows problem

// bool isPossible(int arr[] & stalls, int k, int mid){
//     int cowCount = 1;
//     int lastPos = stalls[0];

//     for(int i = 0; i < stall.size(); i++){
//         if(stalls[i]=lastPos >= mid){
//             cowCount++;
//             if(cowCount == k){
//                 return true;
//             }
//             lastPos = arr[i];
//         }
//     }
//     return false;
// }

// int aggresiveCows(int arr[] & stalls, int k){

//     sort(stalls.begin(), stalls.end());
//     int s= 0;
//     int maxi = -1;

//     for ( int i=0; i<stall.size(); i++)[
//         maxi = max(maxi, stall[i]);
//     ]
//     int e = masi;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(isPossible(stall, k, mid)){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }