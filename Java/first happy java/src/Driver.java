


public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//the system. out is = cout. println = cout = "" = endl;.
		
		
		System.out.println("Hello World!");
		System.out.println("I'm Alive!");
		
		int x = 0;
		int y =45;
		double z = 0.444;
		boolean a = true;
		char b = 'b';
		String name = "Alejandro"; // wuut is dis thing 
		
		// if -else if- else
		if(y == 0)
		{
			System.out.println("y = 0");
		}
		else if(y==1)
		{
			System.out.println("y==1");
		}
		else 
		{
			System.out.println("what y");
		}
		
		
		//switch statement
		switch(x)
		{
		case 1:
			System.out.println("x=1");
			break;
		case 2:
			System.out.println("x=2");
		default:
			System.out.println("x nope");
		}
		// for loop
		for(int i = 0; i > 10; i++)
		{
			System.out.println("i is small");
		}
 // do while loop
		do
		{
			System.out.println("a = true");
			a = false;
		}while (a = true);
		
		int w = add(1,2);
		
		 file newFile = new file("text.txt");
		 System.out.println(newFile.getFileName()); //write File with lower case because you named the class with lower case
	
			
	}
//functions between these curves
	public static int add(int a, int b)
	{
		return a + b;
	}
	
}