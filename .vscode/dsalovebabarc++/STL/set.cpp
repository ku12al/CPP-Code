#include<iostream>
#include<bits/stdc++.h>
//#include<set>
using namespace std;
int main(){
    set<int> s;//set is always be sorted and unique values

    // s.insert(5);
    // s.insert(5);
    // s.insert(3);
    // s.insert(1);
    // s.insert(6);
    // s.insert(6);
    // s.insert(0);
    // s.insert(0);
    // s.insert(0);

    //cout<<*s.begin()<<"\n";//print the value of first element

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        s.insert(arr[i]);
    }

    for(auto it:s){
        cout<<it<<" ";
    }

    for(auto &it:s){
        cout<<it<<" ";
    }
    // set<int>::iterator it = s.begin();//begin is starting value of sets
    // it++;

    // s.erase(it);//delete the element

    
    
    // for(auto i:s){
    //     cout<<i<<endl;
    // }
    // cout<<endl;

    // cout<<"-5 is present or not  -> "<<s.count(-5)<<endl;

    // set<int>::iterator itr = s.find(3); //find for searching the element
    // if(itr == s.end()){
    //     cout<<"Not present: "<<endl;
    // }else{
    //     cout<<"Present: "<<distance(s.begin(),itr)<<endl;
    // }

    // for(auto it=itr;it!=s.end();it++){
    //     cout<<*it<<" ";
    // }cout<<endl;

   

}