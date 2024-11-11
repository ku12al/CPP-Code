#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){
      //creation
      unordered_map<string, int> m;


      //insertion
      //1st method
      pair<string, int> p = make_pair("kumar", 3);
      m.insert(p);


      //2nd method
      pair<string, int> pair2("kunal", 2);
      m.insert(pair2);

      //3rd method
      m["kunal"] = 1;

      m["kunal"] = 2;



      cout<<m["kunal"]<<endl;

      cout<<m.at("kumar")<<endl;

      cout<<m.size()<<endl;

      cout<<m.erase("kunal")<<endl;

      return 0;
}