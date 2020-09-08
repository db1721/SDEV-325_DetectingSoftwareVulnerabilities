import java.util.Scanner;

class Discussion 
{
    public static void main(String[] args) 
    {
        String last_name;

        Scanner scan = new Scanner;

        String new_last_name = last_name.substring(0, 12);
        String final_last_name = scan.next("Enter your last name: ");

        System.out.print("%s", last_name);
    }
}