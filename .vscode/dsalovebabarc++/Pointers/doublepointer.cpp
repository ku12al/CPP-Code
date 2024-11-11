#include<iostream>
using namespace std;

void update(int **p2){
     // p2 = p2+1;

     // *p2 = *p2+1;

      **p2 = **p2+1;
}

int main(){
      int i=5;
      int *p = &i;
      int **p2 = &p;

      cout<< "printing "<< i << endl;
      cout<< "printing "<<*p<<endl;
      cout<<"printing "<<**p2<<endl;

      cout<< endl;

       cout<< "printing "<< &i<< endl;
      cout<< "printing "<<p<<endl;
      cout<<"printing "<<*p2<<endl;

      cout<< endl;

      cout<< "printing "<< i<< endl;
      cout<< "printing "<<*p<<endl;
      cout<<"printing "<<**p2<<endl;
      update(p2);
      cout<< "printing "<< i<< endl;
      cout<< "printing "<<*p<<endl;
      cout<<"printing "<<**p2<<endl;
      

      return 0;
}