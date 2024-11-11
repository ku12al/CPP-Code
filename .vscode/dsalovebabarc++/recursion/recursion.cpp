#include<iostream>
using namespace std;



/*

//couting number
int print(int n){
    if(n==0) return 1;
    cout<<" "<<n<<endl;
    return print(n-1);
}

int main(){
    int n;
    cin >> n;

    print(n);

    return 0;
}*/


/*
//power question
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recusive case
    return n*n;
}

int main(){
    int n;
    cin>>n;

    int ans = power(n);
    cout<< ans << endl;

    return 0;
}*/


/*int fib(int n, int counter){
    cout << counter << "* ";
    if(n<=1)return n;
    return fib(n-1,counter+1)+fib(n-2,counter+1);

}

signed main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        fib(i,0);
        cout<< endl;
    }
}
*/



// int fact(int n){
//     if(n==0 || n==1)return 1;
//     return n*fact(n-1);
//     //cout<<fact<<endl;

    
// }

// void rec(int i, int n){
//     if(i*i>n) return;

//     cout<<i<<" ";
//     rec(i+i,n);
    
// }

// void rec(int i, int n){
//     if(i>n) return;

    
//     rec(i+1,n);
//     cout<<i<<" ";
// }
// int main(){



    
//     // int n=5;
//     // cout<<fact(5);
//     // return 0;


//     //int i=1;
//     // int f = fact(5);
//     // cout<<f;
    
//     //rec(5,n);
//     // for(int i=5;i*i<=n;i+=i){
//     //     cout<<i<<" ";
//     // }
// }