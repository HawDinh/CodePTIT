import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class HELLOFILE {
    public static void main(String[] args) {
        String filename = "Hello.txt";
        
        try (FileReader fileReader = new FileReader(filename);
             BufferedReader bufferedReader = new BufferedReader(fileReader)) {

            String line;
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
