#include <bits/stdc++.h>
using namespace std;

// bool isPrime(int n)
// {

//       int count = 0;
//       for (int i = 1; i <= sqrt(n); i++)
//       {
//             if (n % i == 0)
//             {
//                   count++;

//                   if (n / i != i)
//                   {
//                         count = count + 1;
//                   }
//             }
//       }

//       if (count == 2)
//       {
//             return true;
//       }
//       else
//       {
//             return false;
//       }
// }

bool isPrime(int n){
      
      int count = 0;
      for(int i=1;i<=n;i++){
            if(n%i==0){
                  count++;

            //       if(n / i != i){
            //     count = count + 1;
            // }
            }

      }

      if(count==2){
            return true;
      }else{
            return false;
      }
}

int printDivisor(int n){

      for(int i=1;i<=n;i++){
            if(n%i==0){
                  cout<<i<<" ";
            }
      }
      return 0;
}
int main()
{
      int n;
      cin >> n;

      // bool result = isPrime(n);
      // if (result)
      // {
      //       cout << "It is prime No." << endl;
      // }
      // else
      // {
      //       cout << "It is prime not No." << endl;
      // }

      vector<int> printDiv;
      for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                  printDiv.push_back(i);
                  if (i != n / i) {
                // Add the counterpart
                // divisor to the list
                printDiv.push_back(n / i); 
            }
            }
      }

      for(int i=0;i<printDiv.size();i++){
            cout<<printDiv[i]<<" ";
      }

      return 0;
}