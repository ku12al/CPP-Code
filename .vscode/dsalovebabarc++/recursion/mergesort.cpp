#include<iostream>
using namespace std;

// home work:-
//use index and sort
// inversion count

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];//it is a dynamic memory of array 
    int *second = new int[len2];//when its work has been done then delete the array in last

    //copy values
    int k = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }
    k = mid+1;
    for(int i=0; i<len1; i++){
        second[i] = arr[k++];
    }

    //merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;

    k = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }else{
            arr[k++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[k++] = first[index1++];
    }
    while(index2<len2){
        arr[k++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}



void mergesort(int *arr, int s, int e){
    //base case
    if(s >= e)return ;

    int mid = (s+e)/2;
    //left part sort
    mergesort(arr, s, mid);

    //right part sort
    mergesort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main(){
    int arr[8] = {5,8,2,75,69,4,10,51};
    int n = 8;
    
    mergesort(arr , 0, n-1);


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

    
    return 0;
}