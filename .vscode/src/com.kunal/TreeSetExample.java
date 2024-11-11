


import java.util.Set;
import java.util.TreeSet;

public class TreeSetExample {
    public static void main(String[] args) {
        Set<String> colors = new TreeSet<>();
        colors.add("red");
        colors.add("blue");
        colors.add("green");
        colors.add("red"); // Duplicate element, will be ignored

        System.out.println("Colors set: " + colors); // Sorted in ascending order
        System.out.println("Size: " + colors.size());
        System.out.println("Contains 'green': " + colors.contains("green"));
    }
}
