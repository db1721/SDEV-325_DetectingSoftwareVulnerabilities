import java.util.Scanner;
import java.util.StringTokenizer;

class CWE787Weakness 
{
	public static void main(String[] args) 
	{
		// Create a Scanner object
		Scanner scan = new Scanner(System.in);  
		System.out.println("Enter 3 numbers for an array seperated by a space");

		// Read user input
		String makeArray = scan.nextLine();  
		
		//tokenize the string
		StringTokenizer st = new StringTokenizer(makeArray);
		int count = st.countTokens();
		int counter = 1;
		
		//write the array
		int[] ar = new int[3];
		for(int i = 0; i < count; i++) 
		{
			ar[i] = Integer.parseInt(st.nextToken());
			System.out.println("Array" + counter + ": " + ar[i]);
			counter++;
		}
		
		//close scanner
		scan.close();
	}//end main
}//end class