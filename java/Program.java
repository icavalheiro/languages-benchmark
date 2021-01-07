import java.util.*;

public class Program {
    public static void main(String[] args) {
        var n = Integer.parseInt(args[0]);
        var array = new int[n];

        var randomGen = new Random();
        for (int i = 0; i < n; i++) {
            array[i] = randomGen.nextInt(n);
        }

        Arrays.sort(array);
    }
}