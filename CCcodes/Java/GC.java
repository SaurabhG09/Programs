import java.lang.*;

class Demo
{
	public int Arr[];
	
	public Demo(int size)
	{
		System.out.println("Allocating the resources in constructor");
		this.Arr = new int[size];
	}
	
	protected void finalize()
	{
		System.out.println("Deallocating the resources in finalize");   //do not write this message in finalize method
		this.Arr = null;
	}
}

class GC
{
	public static void main(String fg[])
	{
		Demo dobj = new Demo(10);
		dobj = null;
		System.gc();
		System.out.println("End of main");		
	}
}