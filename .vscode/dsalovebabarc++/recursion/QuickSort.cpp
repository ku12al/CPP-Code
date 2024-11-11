#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    //place pivot at right position
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    //left ans right wala  
    //int i = s , j= e;


    while(s< pivotIndex && e>pivotIndex) {
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]> pivot){
            e--;
        }

        if(s<pivotIndex && e>pivotIndex){
            swap(arr[s++],arr[e--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int start, int end){
    //base case
    if(start>=end){
        return ;
    }

    //partition karenge
    int p = partition(arr, start, end);

    //left part sort
    quickSort(arr, start, p-1);

    //right part sort
    quickSort(arr, p+1, end);

    //recursive call
    


}

int main(){
    int arr[8] = {5, 81, 3, 6 ,7, 10 ,8, 55,};
    int n = 8;

    quickSort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;

    return 0;
}