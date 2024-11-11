#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p << endl;
}

void update(int *p){
     p=p+1;
    cout<<"inside "<<*p <<endl;

    //*p = *p+1; 
}

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int value =5;
    int *p = &value;

    //print(p)

    cout<<"before "<<p << endl;
    update(p);
    cout<<"after "<<p << endl;


    
    cout<<"before "<<*p << endl;
    update(p);
    cout<<"after "<<*p << endl;


    int arr[5] = {1,2,3,4,5};

    cout<< "sum is "<< getSum(arr,5)<<endl;
    return 0;
}

           //  ***  pointer lecture 2  ***
// int main()//part-2
// {
//     // int arr[10] = {23, 122, 42, 67};

//     // cout<<"address of first memory block is "<< arr << endl;
//     // cout<< arr[0] << endl;
//     // cout<<"address of first memory block is"<< &arr[0] << endl;

//     // cout<<"4th "<< *arr << endl;
//     // cout<<"5th"<< *arr+1 << endl;
//     // cout<<"6th "<< *(arr+1) << endl;
//     // cout<<"7th "<< *(arr)+1 << endl;
//     // cout<<"8th "<< arr[2] << endl;
//     // cout<<"9th "<< *(arr+2) << endl;

//     // int i=3;
//     // cout<<i[arr]<<endl;


//     // int temp[10];
//     // cout<< sizeof(temp)<<endl;
//     // cout<<"1st"<<sizeof(*temp)<<endl;
//     // cout<<"1st"<<sizeof(&temp)<<endl;

//     // int *ptr = &temp[0];
//     // cout<<sizeof(ptr)<<endl;
//     // cout<<sizeof(*ptr)<<endl;
//     // cout<<sizeof(&ptr)<<endl;

//     /*int a[20] = {1,2,3,5};
//     cout<< "->" << &a[0]<<endl;
//     cout<< "->" << &a<<endl;
//     cout<< a << endl;

//     int *p = &a[0];
//     cout<< p << endl;
//     cout<< *p << endl;
//     cout<<"-> " << &p << endl;
// */
// /*
// int arr[10];

// int *ptr = &arr[0];
// cout<< ptr << endl;
// ptr = ptr + 1;
// cout<< ptr << endl;
// */

// /*int arr[5] = {1,2,3,4,5};
// char ch[6] = "abcde";

// cout << arr << endl;//it print only address of a arr first element
// cout << ch << endl; 
// //conclusion in characters pointer print its value

// char *c = &ch[0];
// cout << c << endl;//it print value not address of memory alocated for char


// char temp = 'z';
// char *p = &temp;
// cout << p << endl;//it gives some other values
// */
    
// }




//            **   pointer concept lecture one 1  **


// int main(){ //part 1
//     // int num = 5;
//     // cout<<num<<endl;


   //address of operator - &
//     // cout<< " address of num is" << &num << endl;
//     // int *ptr = &num;

//     // cout << "Address is:"<<ptr<<endl;
//     // cout<<"value is :"<<*ptr << endl;

//     // double d = 4.5;
//     // double *p2 = &d;
//     // cout << "Address is:"<<p2<<endl;
//     // cout<<"value is :"<<*p2 << endl;

//     // cout<<"size is"<<sizeof(num)<<endl;
//     // cout<<"size is"<<sizeof(ptr)<< endl;
//     // cout<<"size is"<<sizeof(p2)<< endl;

    
// //     int i = 5;

// //     int *q = &i;
// //     cout<< q << endl;
// //     cout<< *q << endl;


// //     int *p = 0;
// //     p = &i;

// //     cout<< p << endl;
// //     cout<< *p << endl;

// // return 0;


// //how to copy one pointer to another pointer

// int num = 5;
// int a = num;
// cout<<"a before"<< num << endl;
// a++;
// cout<<"after "<<num << endl;

// int *p = &num;
// cout<< "before"<< num << endl;
// (*p)++;
// cout<< "after"<< num << endl;


    // copying a pointer
// int *q = p;
// cout<<p<< "~ "<< q<< endl;

// cout<<*p << "~" << *q << endl;

   // //important concept
// int i = 3;
// int *t = &i;

// *t = *t+1;
// cout<< *t << endl;
// cout<< " before"<<t<<endl;
// t = t+1;
// cout<<"after"<<t<<endl;

// //home work in code studio pointer related questions
// return 0;
// }
