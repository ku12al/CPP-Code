//import java.util.Scanner;

public class inputs {
     public static void main(String[] args){
        int n=1010;
int ans = 0;
int i = 0;


while(n != 0){
   int digit=n%10; 
  if(digit == 1){
        ans = (int) (ans + Math.pow(2, i));
    }
    n = n/10;
    i++;
    
}
    System.out.println(ans);
     

     }
 }


