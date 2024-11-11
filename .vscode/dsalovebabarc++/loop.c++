 #include<iostream>
 using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int sum=0;
//     for(int i=1;i<n;i++)
//     {
//         sum = sum+i;

//     }
//     cout<<sum<<endl;
//     return 0;
// }

// int main()
// {
//     /* int pocketMoney=3000;
//     // for(int date=1;date<=30;date++)
//     // {
//     //     if(date%2==0)
//     //     {
//     //         continue;
//     //     }
//     //     if(pocketMoney==0){
//     //         break;
//     //     }
//     //     cout<<"go out today!"<<endl;
//     //     pocketMoney=pocketMoney-300;

//     // }*/

//     /* for(int i=0;i<100;i++)
//     // {
//     //     if(i%3!=0)
//     //     {
//     //         cout<<i<<endl;
//     //     }
//     // }*/

//     /*int n;
//     cin>>n;
//     int i;
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0){
//             cout<<"NON Prime"<<endl;
//         break;
//         } 
//     }
//     if(i==n){
//         cout<<"prime"<<endl;
//     }*/

//     /*int a,b;
//     cin>>a>>b;
//     for(int num=a;num<=b;num++)
//     {
//         int i;
//         for(i=2;i<=num;i++)
//         {
//             if(num%i==0)
//             {
//                 break;
//             }
//         }
//         if(i==num)
//         {
//             cout<<num<<endl;
//         }
//     }*/

//     char button;
//     cout<<"Input a character:";
//     cin>>button;
//     // if(button=='a')
//     // {
//     //     cout<<"hello"<<endl;
//     // }
//     // else if(button='b')
//     // {
//     //     cout<<"Namaste"<<endl;
//     // }
//     // else if(button=='c')
//     // {
//     //     cout<<"salut"<<endl;
//     // }
//     // else if(button=='d')
//     // {
//     //     cout<<"salam"<<endl;
//     // }
//     // else if(button=='e')
//     // {
//     //     cout<<"welcome"<<endl;
//     // }
//     // else{
//     //     cout<<"i as still learning more"<<endl;
//     // }

//     switch (button)
//     {
//         case 'a':
//         cout<<"hello"<<endl;
//         break;
//         case 'b':
//         cout<<"Namaste"<<endl;
//         break;
//         case 'c':
//         cout<<"salut"<<endl;
//         // break;
//         case 'd':
//         cout<<"hello hi"<<endl;
//         break;
//         case 'e':
//         cout<<"salam"<<endl;
//         break;

//     default:
//     cout<<"I am still learning more!"<<endl;
//     }
//     return 0;
// }

// "*" pattern
int main()
{
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=4;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//   }
     int n;
     cin>>n;

    //  for(int i=1;i<=row;i++){
    //     for(int j=1;j<=col;j++){
    //         if(i==1 || i==row || j==1 || j==col){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";

    //         }
    //     }
    //     cout<<endl;
    //  }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    //floyd's triangle
    // int count=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }cout<<endl;
    // }


//    // Butterfly pattern 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         int space= 2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         int space= 2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// //}


//Inverted Pattern
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n+1-i;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// return 0;
// }

// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0){
//             cout<<"1 ";
//         }
//         else{
//             cout<<"0 ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }

//Rhombus Pattern
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"     ";
//     }
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

// //palindromic pattern
// for(int i=1;i<=n;i++){
//     int j;
//     for(j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     int k=i;
//     for(;j<=n;j++){
//         cout<<k--<<" ";
//     }
//     k=2;
//     for(;j<=n+i-1;j++){
//         cout<<k++<<" ";
//     }
//     cout<<endl;
// }

// //star pattern
// for(int i=1;i<=4;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// //Zig-Zag pattern
// for(int i=1;i<=3;i++){
//     for(int j=1;j<=n;j++){
//         if((i+j)%4==0 || (i==2 && j%4==0)){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }


}





















































































































