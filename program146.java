import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the value;");
		this.iNo=sobj.nextInt();
	}
	void Display()
	{
		System.out.println("Value is:"+this.iNo);
	}
	
	void DisplayFactors()
	{
		int iCnt=0;
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if((iNo%iCnt)!=0)
			{
				System.out.println("Factor is:"+iCnt);
			}
		}
	}
	
}

class program146
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.DisplayFactors();
	}
}