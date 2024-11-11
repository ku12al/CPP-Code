#include<iostream>
using namespace std;

int getSum(int *arr, int n){
      int sum=0;
      for(int i=0; i<n; i++){
            sum += arr[i];
      }
      return sum;
}

// int main(){
//       int n;
//       cin>>n;

//       //variable size array
//       int * arr = new int[n];

//       //taking inputs in array
//       for(int i=0;i<n;i++){
//             cin>> arr[i];
//       }
//       int ans = getSum(arr, n);

//       cout << " answer is "<< ans << endl;

//       return 0;
// }



// how to create dynamic 2d array  lecture 29

int main(){
      // int n;
      // cin>>n;

      // int ** arr = new int *[n];

      // for(int i=0; i<n; i++){
      //       arr[i] = new int [n];
      // }

      int row;
      cin >> row;

      int col;
      cin >> col;
      

      //creating a 2d array
      int ** arr = new int *[row];
      for(int i=0; i<row; i++){
            arr[i] = new int [col];
      }
      // taking input

      for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                  cin>> arr[i][j];
            }
      }

      // taking output
      
      for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
      }

      //releasing memory

      for(int i=0; i<row; i++){
            delete [] arr[i];
      }
      delete [] arr;
      return 0;
}



