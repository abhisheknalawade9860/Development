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
	
	void Perfect()
	{
		int iCnt=0,iSum=0;
		for(iCnt=1;iCnt<iNo;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}
		if(iSum==iNo)
		{
			System.out.println("it is perfect number:");
		}
		else
		{
			System.out.println("it is not perfect number:");
		}
	}
	
}

class program148
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		
		
		nobj.Accept();
		nobj.Display();
		
		nobj.Perfect();
		
	}
}