import java.util.*;

public class charmatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input strings
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        
        // Answer string
        StringBuilder ans = new StringBuilder();
        
        // Frequency map
        HashMap<Character, Integer> map = new HashMap<>();
        
        // Count characters in s1
        for (char ch : s1.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }
        
        // Count characters in s2
        for (char ch : s2.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }
        
        // Append characters appearing only once
        for (Map.Entry<Character, Integer> entry : map.entrySet()) {
            if (entry.getValue() == 1) {
                ans.append(entry.getKey());
            }
        }
        
        // Output the result
        System.out.println(ans.toString());
        
        sc.close();
    }
}
