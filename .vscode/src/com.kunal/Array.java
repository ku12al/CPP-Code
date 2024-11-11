import java.util.Scanner;

public class Array{
    public static void main(String args[]){
    //     Scanner sc = new Scanner(System.in);
    //     int size = sc.nextInt();
    //     int number[] = new int[size];

    //     // // int[] marks = new int[3];
    //     // int marks[] = {97,98,98};
    //     // // marks[0] = 97;
    //     // // marks[1] = 98;
    //     // // marks[2] = 99;
    //     for(int i=0; i<size; i++){
    //         number[i] = sc.nextInt();

    //     }
    //     for(int i=0; i<size; i++){
    //         System.out.print(number[i] + " ");

    //     }

    //Q:- Take an array and input from the user. Search for a
    //given number x and print the index at which it occurs.

    Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int number[] = new int[size];
        

        for(int i=0; i<size; i++){
           number[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        for(int i=0;i<number.length;i++){
            if(number[i] == x){
            System.out.println("Yes at index :- " + i);
        }else{
            System.out.println("No element not found ");
        }

        }
    
    }
}