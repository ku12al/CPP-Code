#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year"<<endl;
    cin>>year;

    if((year%4)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;

}