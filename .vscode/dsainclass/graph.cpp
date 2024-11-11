#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> graph[n+5];

    int q;cin>>q;

    while(q--){
        int u,v;
        int weight;
        cin>>u>>v;
        cin>>weight;

        graph[u].push_back(v,weight);
        graph[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cout<<i << "->";
        for(auto it:graph[i]){
            cout<<it<<' ';
        }
        cout<<endl;
    }
}