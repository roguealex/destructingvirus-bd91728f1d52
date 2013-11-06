
public class file 
{
	//default constructor
	public file(){};
	//constructor
	public file(String fileName)
	{
		this.fileName = fileName;
	}
	//not destructor
	//variable
	String fileName="derp";

	//function
	public String getFileName()
	{
		return fileName;
		//return this.fileName is the same
	}
	
}
