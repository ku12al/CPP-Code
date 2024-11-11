#include<iostream>
#include<vector>

using namespace std;
int main(){

    int n=5;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    
    // for(auto &it:a){
    //     it=1;
    // }
    for(auto it:a){
        cout<<it<<" ";
    }
}
//     vector<int> v;
//     vector<int> a(5,1);
//     vector<int> last(a);
//     cout<<"print last "<<endl;
//     for(int i:last){
//         cout<<i<<" ";
//     }cout<<endl;


//     cout<<"Size-> "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"Size-> "<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"Size-> "<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"Size-> "<<v.size()<<endl;
//     cout<<"capacity-> "<<v.capacity()<<endl;

//     cout<<"Element at 2nd Index "<<v.at(2)<<endl;

//     cout<<"front "<<v.front()<<endl;
//     cout<<"back "<<v.back()<<endl;

//     cout<<"before pop "<<endl;
//     for(int i:v){
//         cout<<i<<endl;
//         }cout<<endl;

//         v.pop_back();

//         cout<<"after pop"<<endl;
//         for(int i:v){
//             cout<<i<<" "<<endl;
//         }

//         cout<<"before clear size "<<v.size()<<endl;
//         v.clear();
//         cout<<"after clear size "<<v.size()<<endl;
// }