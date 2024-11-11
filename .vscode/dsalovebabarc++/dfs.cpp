#include<iostream>
using namespace std;

void makeLayer(int layer){
    if(layer%2 == 0){
        for(int i = layer;i<=n=layer){
            arr[layer][i] = "#";
            arr[i][layer] ="#";
            arr[n-layer][i] = "#";
            arr[i][n-layer] = "#";
        }
    }
}

// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//         cout<<"# ";
//         }
//         cout<<"O ";
//     }

//     // for(int i=0;i<m;i++){
//     //     for(int i=1;i<m;i++){
//     //     cout<<"#"<<endl;
//     // }
//     //     cout<<"O"<<endl;
//     // }
    
    
    
// }