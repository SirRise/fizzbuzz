import String;
public class FizzBuzz {
    public static void main(String[] args) {
        int x = 100;
        String s;
        while (x++ > 0) {
            s = "";
            if (x%5 == 0) s += "Fizz";
            if (x%3 == 0) s += "Buzz";
            (s == "")? System.out.println(x) : System.out.println(s);
        }
    }
}