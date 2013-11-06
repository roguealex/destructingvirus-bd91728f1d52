import java.util.ArrayList;
import java.util.Scanner;
import java.util.*;

public class Driver {

	/**
	 * @param args
	 * 
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		ArrayList <String> groceryList = new ArrayList <String>();

		while(groceryList.size()<10)
		{
			String entry = input.nextLine();
			groceryList.add(entry);		
		}
		groceryList = null;
	}

}

