#include<iostream>
using namespace std;

int func(int a){
      int num = a;
      int & ans = num;
      return ans;
}
void update2(int &n){
      n++;
}
void update1(int n){
      n++;
}

int main(){
      int i=5;

      int& j=i;

      cout<<i<<" "<<j<<endl;
      i++;
      j++;
      cout<<i<<" "<<j<<endl;
      update1(i);
      cout<<i<<" "<<j<<endl;
      update2(i);
      cout<<i<<" "<<j<<endl;

      return 0;
}