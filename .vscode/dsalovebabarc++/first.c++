// // datatype and varialbe
// #include<iostream>
// using namespace std;

// int main (){
//     /*int a = 20;

//     cout<< a <<endl;

//     char b = 'a';
//     cout<< b <<endl;

//     float c = 3.14;
//     cout<< c <<endl;

//     bool f = true;
//     cout<< f <<endl;

//     double d = 0.23;
//     cout<< d <<endl;

//     int a = 'a';
//     cout<< a <<endl;
//     char ch = 98;
//     cout<< ch <<endl;


//     //how to print negative numbers
//     unsigned int a = -123;
//     cout<< a <<endl;*/


//     // float a = 2.8/5;
//     // cout<< a <<endl;

    
//     // // relational operators
//     // int a= 2;
//     // int b= 3;

//     // bool first = (a==b);
//     // cout<< first <<endl;

//     // bool second = (a>b);
//     //     cout<< second <<endl;

//     // bool third = (a<b);
//     //     cout<< third <<endl;

//     // bool fourth = (a>=b);
//     //         cout<< fourth <<endl;

//     // bool fifth = (a<=b);
//     //             cout<< fifth <<endl;
    
//     //     bool sixth = (a!=b);
//     //             cout<< sixth <<endl;



//     // // logical operators
//     bool a = true;
//     bool b = false;
// }


//conditional operator
// #include<iostream>
// using namespace std;

// int main (){
//     // int a;
//     // cin>>a;
//     // int b;
//     // cin>>b;
//     // //cout<<"hi i am kunal"<<endl;

//     // if(a>b){
//     //     cout<<"a is greater than b"<<endl;
//     // }else{
//     //     cout<<"b is greater than a"<<endl;
//     // }


//     // a = cin.get();
//     // cout<<"value of a is :"<<a<<endl;

//     // int a;
//     // cout<<"enter a number of a"<<endl;
//     // cin>>a;

//     // if(a>0){
//     //     cout<<"a is positive"<<endl;
//     // }
//     // else if(a<0){
//     //     cout<<"a is negative"<<endl;
//     // }

//     // int n;
//     // cin>>n;

//     // int i =1;
//     // int sum =0;

//     // while(i<=n){
//     //         sum = sum + i;
//     //         i++;
//     //     }

//     //     cout<<"value of sum is"<<sum<<endl;
// // find even number of
// // chage fehrenhiet to celcius


// // check number is prime or not

// int n;
// cin>>n;

// int i = 2;

// while(i<=n){
//     if (n%i==0)
//     {
//         cout<<"number is not prime"<<endl;
//         break;
//     }else{
//         cout<<"prime for"<< i << endl;
//     }
//     i = i+1;
//     }
// }



// 4:-pattern questions
// #include<iostream>
// using namespace std;

// int main (){
//     int n;
//          cin>>n;

//     int i = 1;
// int count = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<count<<"";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }

// triangle pattern

    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     int count = i;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i-j+1<<" ";
            
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

// int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A' + i -1;
//             cout<<ch<<" ";
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }

// int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A' + j - 1;
//             cout<<ch<<" ";
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }


// int i = 1;
// char ch = 'A';
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             //ch = ch + 1;
//             cout<<ch<<" ";
//             ch = ch+1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }



// int i = 1;
// char ch = 'A';

// while (i<=n){
//     int j = 1;
//     while(j<=n){
//         ch = 'A'+ i + j - 2;
//         cout<<ch<<" ";
//         j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }


// int i = 1;
// char ch = 'A';

// while (i<=n){
//     int j = 1;
//     while(j<=i){
//         ch = 'A'+ i  + j - 2;
//         cout<<ch<<" ";
//         j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }


// int i = 1;
// char ch = 'A';

// while (i<=n){
//     int j = 1;
//     ch = 'A'+ n - i ;
//     while(j<=i){
        
//         cout<<ch<<" ";
//         ch = ch + 1;
//         j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }


// int i = 1;
// while (i<=n){
//     int space = n - i ;
//     while(space){
//         cout<<" ";
//         space = space - 1;
//     }
//     int j = 1;
//     while(j<=i){
//         cout<<" * ";
//         j = j + 1;

// }
//     cout<<endl;
//     i = i + 1;
//     }

// int i = 1;
// while (i<=n) {
//     int space =i-1 ;
//     while(space){
//         cout<<" ";
//         space = space - 1;
//     }
//     int j = 1;
//     while(j<=n-i+1){
//        cout<<"*";
//        j = j + 1;
// }
//     cout<<endl;
//     i = i + 1;
//     }


// int i = 1;
// while (i<=n) 
// {
//     int space =n-i ;
//     while(space){
//         cout<<" ";
//         space = space - 1;
//     }

//     int j = 1;
//     while(j<=i){
//         cout<<"*";
//         j = j + 1;
//     }
//     int start = i -1;
//     while(start){
//        cout<<start;
//        start=start - 1;
//     }

// cout<<endl;
//     i = i + 1;

// }
//}



//5:-bitwise operator,For loops, Operators precedence & variable Scoping

// #include<iostream>
// using namespace std;
// int main(){
//     //bitwise operators
//     // int a = 4;
//     // int b = 5;
//     // cout<<"a&b"<< (a&b) << endl;
//     // cout<<"a|b"<< (a|b) << endl;
//     // cout<<"~a"<< ~a << endl;
//     // cout<<"a^b"<< (a^b) << endl;

//     //left shift and right shift
//     // cout<< (17>>1)<<endl;
//     // cout<< (17<<2)<<endl;
//     // cout<< (19<<1)<<endl;
//     // cout<< (21<<2)<<endl;

//     //increament and decrement
//     // int i = 7;
//     // cout<< (++i)<<endl;
//     // cout<< (i++)<<endl;
//     // cout<< (i--)<<endl;
//     // cout<< (--i)<<endl;

//     //sum of all numbers
//     // int n;
//     // cout<<"enter the value of n" << endl;
//     // cin>> n;

//     // int sum = 0;
//     // for(int i=1; i<=n;i++){
//     //     sum = sum + i;
//     // }
//     // cout<< sum << endl;


//     //fibonacci series
//     // int n = 10;

//     // int a =0;
//     // int b =1;

//     // cout<<a<< " "<<b<< endl; 

//     // for(int i=1; i<=n; i++){
//     //     int nextNumber = a + b;
//     //     cout<<nextNumber<< "  ";
//     //     a = b;
//     //     b = nextNumber;
//     // }


// // prime or not

// // int n;
// // cout<<"enter the value of the"<<endl;
// // cin>>n;
// // bool isPrime = 1;
// // for(int i=2; i<n; i++)
// // {
// //     if(n%i==0){
// //         isPrime = 0;
// //         break;
// //     }
// // }
// //     if(isPrime != 0){
// //         cout<<"prime"<<endl;
// //     }
// //     else
// //     {
// //         cout<<"not prime"<<endl;
// //     }
// //}


// // 6:- decimal to binary 
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// // int n;
// // cout<<"enter the value of the"<<endl;
// // cin>>n;

// // int i = 0;
// // int ans = 0;
// // while(n != 0 ){
    
// //     int bit = n & 1;
    

// //     ans = ((bit * pow(10, i) ) + ans);

// //     n = n >> 1;
// //     i++;
    
// // }
// // cout<<" Answer is "<< ans << endl;


// // // binary to decimal conversion

// // int n;
// // cin >> n;

// // int ans = 0;
// // int i = 0;

// // while(n != 0){
// //     int digit = n % 10;
// //     if(digit == 1){
// //         ans = ans + pow(2, i);
// //     }
// //     n = n/10;
// //     i++;
// // }
// // cout << ans << endl;
    
// }

// //HW:- write code convert negative number in binary



//8:- switch statement & function

// #include<iostream>
// using namespace std;

// int main(){
//     // char ch;
//     // int num;

//     // cin >>ch;
//     // switch(ch){
//     //     case 1 : cout<<"hi"; break;
//     //     case 2 : cout<<"hello"; break;
//     //     case 3 : cout<<"namashte"; break;
//     //     case 4 : cout<<"Bonjour"; break;
//     //     default : cout<<"nikal yahaan se"; 
//     // }

//     // int a , b;
//     // cout<<"Enter the value of a"<<endl;
//     // cin>>a;

//     // cout<<"Enter the value of b"<<endl;
//     // cin>>b;

//     // char op;
//     // cout<<"Enter the value of op"<<endl;
//     // cin>>op;

//     // switch(op){
//     //     case '+':cout << (a+b)<<endl; break;
//     //     case '-':cout << (a-b)<<endl; break;
//     //     case '*':cout << (a*b)<<endl; break;
//     //     case '/':cout << (a/b)<<endl; break;
//     //     case '%':cout << (a%b)<<endl; break;
//     //     default:cout <<"it invaled "<<endl;
//     // }

//     //HW:- note question money question

//     // int note;
//     // cout<<"Enter the amount of notes"<<endl;
//}


// //fuctions in c++

// #include<iostream>
// using namespace std;

// // power of number code
// // // int power(){
// // //     int x ,y;
// // //     cin>> x >> y;
// // //     int ans = 1;
// // //     for(int i = 0; i < y; i++){
// // //         ans = ans * x;
// // //     }
// // //     return ans;
// // // }


// // // int main(){
// // //     //int a, b;
// // //     int ans = power();
// // //     cout<<"answer is "<<ans<<endl;

// // //     //int a, b;
// // //      ans = power();
// // //     cout<<"answer is "<<ans<<endl;

// // //     //int a, b;
// // //      ans = power();
// // //     cout<<"answer is "<<ans<<endl;

// // //     return 0;
// // //}

// // To check even or odd in function
// // // bool isEven(int a){
// // //     if(a%2 == 0){
// // //         return true;
// // //     }
// // //     else{
// // //         return false;
// // //     }

// // // }
// // // int main(){
// // //     int num;
// // //     cin>>num;

// // //     if(isEven(num)){
// // //         cout<<"even"<<endl;
// // //     }
// // //     else{
// // //         cout<<"odd"<<endl;
// // //     }
// // //     //return isEven;
// // // }

// // // how to find permutation of a numbers

// // int factorial(int n){
// //     //function body
// //     int fact = 1;

// //     for(int i=1; i<=n; i++){
// //         fact = fact * i;
// //     }
// //     return fact;
// // }

// // int nCr(int n, int r){
    
// //     int num = factorial(n);

// //     int denom = factorial(r) * factorial(n-r);

// //     return num/denom;
// // }

// // int main(){
// //     int n, r;
// //     cin>>n>>r;
// //     //funtion call
// //     cout<<"answer is "<< nCr(n, r) <<endl;
// // }

// // // To find if number is prime or not using functions

// // bool isPrime(int n){
// //     //function body
// //     for(int i=2; i<n; i++){
// //         if(n%i==0){
// //             return 0;
// //         }
// //     }
// //     return 1;
// // }
// // int main (){
// //     int n;
// //     cin>>n;
// //     if(isPrime(n)){
// //         cout<<"prime"<<endl;
// //     }
// //     else{
// //         cout<<"not prime"<<endl;
// //     }
// // }


// // 9:- Array in c++

// #include<iostream>
// using namespace std;
// //int main(){
//     // //declare variables
//     // int number[10];

//     // cout<<"value at 9 index "<< number[9] <<endl;

//     // cout<<"value at 20 index "<< number [20] <<endl;

//     // cout<< endl << "Everything is fine"<< endl << endl;

//     // int second[3] = {5, 7, 9};
    
//     // cout<<"value at 9 index "<< second[1] <<endl;

//     // cout<< endl << "Everything is fine"<< endl << endl;
    
//     // int third[15] = {2, 7};
    
//     // int n = 15;
    
//     // cout<<"printing the array"<< endl;
    
//     // for(int i = 0 ; i <n; i++){
//     //     cout<< third[i]<< " ";
//     // }
//     // return 0;
// //}


// // array with functions

//     // void printArray(int arr[], int size){
//     //     cout<<"print the array"<<endl;
//     //     for(int i = 0; i<size; i++){
//     //         cout<< arr[i] <<" ";
//     //     }
//     //     cout<<"printing done"<<endl;
//     // }

//     // int main(){
//     //     int number[30];
//     //     cout<<"value of 4 index"<< number[4] <<endl;

//     //     int second[4] = {0,1,2,3};
//     //     cout<<"value of 3 index"<< second[3] <<endl;

//     //     int third[15] = {2, 7};
//     //     cout<<"value of 15 index"<< third[0] <<endl;

//     //     int n = 15;
//     //     printArray(third, 15);

//     //     int fourth[10] = {0};
//     //     n = 10;
//     //     printArray(fourth, 10);
//     //     char ch[7] = {'a', 'b', 'c', 'd', 'e', 'f'};
//     //     cout<< ch[3] <<" ";

//     //     cout<<"printing the array"<<endl;

//     //     for(int i = 0; i < 5; i++){
//     //         cout << ch[i] << " ";
//     //     }
//     //     cout<<"done"<<endl;
//     //     return 0;
//     // }


// // reverse the array 

// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n - 1;
//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[6] = {-9,8,7,3,14,45};
//     int brr[5] = {90,1,27,3,45};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);
// }

