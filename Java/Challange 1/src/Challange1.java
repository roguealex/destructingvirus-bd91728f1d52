import java.lang.reflect.Array;
import java.util.*;
public class Challange1 {

	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		

		int size=10;
		int Random, max=-100,min=-100,max2=-100,min2=-100;
		Scanner input = new Scanner(System.in);
		ArrayList <Integer> array1 = new ArrayList <Integer>();
		ArrayList <Integer> array2 = new ArrayList <Integer>();
	
		Random rdm = new Random(System.currentTimeMillis());
		
		for(int i=0; i<10; i++)
		{
			array1.add(rdm.nextInt(10));
			array2.add(rdm.nextInt(10));
			
		}
		
		for(int i = 0; i < array1.size(); i++ )
		{
			if (min == -100)
			{
				min = array1(i);
			}
			else if (max == -100)
			{
				max = array1(i);
			}
		}
		
		
		for(int i=0; i < array2.size(); i++)
		{
			if (min2 == -100)
			{
				min2 = array2(i);
			}
			else if(max2 ==-100)
			{
				max = array2(i);
			}
			
		
			
			
		}
	}

	private static int array1(int i) {
		// TODO Auto-generated method stub
		return 0;
	}

			
}
