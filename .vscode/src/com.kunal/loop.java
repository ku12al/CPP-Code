//import java.util.*;

public class loop{
    public static void main(String[] args){ 
        // Scanner sc = new Scanner(System.in);
        //int n = sc.nextInt();

    //     int sum = 0;
    //     for(int i=0; i <= n; i++){
    //     sum = sum + i;
    // }
    // System.out.println("sum = " + sum);



    // for(int i=1 ; i<=4 ; i++){
    //     for(int j=1 ; j<=4; j++){
    //         if(i==1 || j==1 || i==4 || j==4){
    //             System.out.print("*");
    //         }else{
    //             System.out.print(" ");
    //         }
    //     }
    //     System.out.println();
    // }

//     for(int i = 1; i<=5; i++){
//         for(int j = 1; j<=i; j++){
//             System.out.print("*");

//     }System.out.println();
// }


//     for(int i = 5; i>=1; i--){
//         for(int j = 1; j<=i; j++){
//             System.out.print("*");

//     }System.out.println();
// }

// int n = 4;
// for(int i = 0; i < n; i++){
//     for(int j = 0; j <n-i; j++){
//         System.out.print(" ");
//     }
//     for(int j = 0;j<=i;j++){
//         System.out.print("*");
//     }
// System.out.println();
// }


// for(int i = 1; i<=5; i++){
//         for(int j = 1; j<=i; j++){
//             System.out.print(j+" ");

//     }System.out.println();
// }


// for(int i = 5; i>=1; i--){
//         for(int j = 1; j<=i; j++){
//             System.out.print(j+" ");

//     }System.out.println();
// }

// int number = 1;
// for(int i = 1; i<=5; i++){
//         for(int j = 1; j<=i; j++){
//             System.out.print(number);
//             number++;

//     }System.out.println();
// }

int n = 5;

for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            int sum = i+j;
            if(sum % 2 == 0){
                System.out.print("1 ");
            }else{
                System.out.print("0 ");
            }
            
    }System.out.println();
}


}
}
