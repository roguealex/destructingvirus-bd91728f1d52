import java.util.*;//import all libraries from java.util 
public class A {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		B someName = new B();
		
		int hits = someName.getHitCount();
		System.out.println(hits);
		
		Scanner input = new Scanner(System.in);
		
		try
		{
			int x = input.nextInt();
			System.out.println(x);
			
		}
		catch(InputMismatchException e)
		{
			System.out.println("Invalid input man, jeebus concentrate");
			
		}
		
		
		/*
		 An engineer, a manager, and a programmer are riding in a car. 
		 They come to a hill and their brakes fail. 
		 After careening down the hill and finally coming to a stop they get out to decide what to do. 
		 The manager says “We need to have a meeting to form a committee to see what we should do next!” 
		 The engineer says, “Screw that! Give me a pocket knife and some duck tape and I’ll have us going in no time!” 
		 The programmer looks at them both and says, “Lets push it back to the top and see if it does it again.”
		 */
	

		//wierd - weird , see the difference 
		
		String [] arr = new String[1];
		while(true)
		
		{
	
			String item = input.nextLine();
			arr[arr.length -1] = item;
			String [] arr2 = new String [arr.length + 1];
			for(int i = 0; i < arr.length; i++)//da garbage dude picks up SOME trash 
			{
				arr2[i] = arr[i];
			}
			arr = arr2;
		}
			

	}

}
 