import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextLine()) {
            String line = scanner.nextLine();

            int sum = 0;
            for (String word : line.split(" ")) {
                sum += Integer.parseInt(word);
            }

            System.out.println(sum);
        }

        scanner.close();
    }
}
