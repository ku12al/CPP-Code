import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter year number");
        int year = sc.nextInt();

        if((year%4)==0){
            System.out.println("YES");
        }else if((year%100)!=0){
            System.out.println("NO");
        }else if((year/400)==0){
            System.out.println("YES");
        }else{
            System.out.println("ERROR");
        }


    }
}
