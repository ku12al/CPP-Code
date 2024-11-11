#include<iostream>
using namespace std;
void printSubset(int n){
    for(int Row=(1<<n); Row>0; Row--){
        for(int j=1; j<=n;j++){
            if(Row & (1<< (j-1))){
                cout<<j<<' ';
            }
        }
        cout<<endl;
    }
}

int main(){
    
    printSubset(3);

    string s;
    cin >> s;

    int sum = 0;
    int n= s.size();
    for(int i = n-1; i>=0; i--){
        if(s[i]=='1')
        sum += (1<<(n-1-i));
    }
    cout<<sum<<endl;
}