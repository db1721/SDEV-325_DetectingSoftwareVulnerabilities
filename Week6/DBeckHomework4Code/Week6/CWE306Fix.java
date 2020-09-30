import java.util.Scanner;

public class CWE306Fix
{
    public static String createBankAccount(String accountNumber, String accountType,
			String accountName, String accountSSN, String balance) 
	{
		StringBuilder ba = new StringBuilder("");
		ba.append(accountNumber + ", ");
		ba.append(accountNumber + ", ");
		ba.append(accountType + ", ");
		ba.append(accountName + ", ");
		ba.append(accountSSN + ", ");
		ba.append(balance);

		return ba.toString();
	}
	
	public static Boolean passwordCheck(String password) 
	{
		String passCheck = "password";
		
		if(password.equals(passCheck))
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	public static void main (String[] args) 
	{

		//make scanner
		@SuppressWarnings("resource")
		Scanner scan = new Scanner(System.in);
		
		//Account number
		System.out.println("What is the password");
		String pass = scan.nextLine();
		
		boolean test = passwordCheck(pass);
		
		if(test == true)
		{
			//Account number
			System.out.println("What is your account number");
			String accountNumber = scan.nextLine();

			//Account number
			System.out.println("What is your account type");
			String accountType = scan.nextLine();

			//Account number
			System.out.println("What is the account owner name");
			String accountName = scan.nextLine();

			//Account number
			System.out.println("What is your account SSN");
			String accountSSN = scan.nextLine();

			//Account number
			System.out.println("What is your account balance");
			String balance = scan.nextLine();

			System.out.println(createBankAccount(accountNumber, accountType, accountName, accountSSN, balance));
		}
		else
		{
			System.out.println("Please enter correct password");
		}
	}
}