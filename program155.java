import java.lang.*;
import java.util.*;

class Number 
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the value");
		this.iNo=sobj.nextInt();
	}
	void Display()
	{
		System.out.println("Value is:"+this.iNo);
	}
	void pallindrome()
	{
		int iDigit=0,iRev=0,iTemp=0;
		iTemp=iNo;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iRev=iRev*10+iDigit;
			iNo=iNo/10;
		}
		if(iRev==iTemp)
		{
			System.out.println("it is pallindrome");
		}
		else
		{
			System.out.println("it is not pallindrome");
		}
	}	
}

class program155
{
	public static void main(String arg[])
	{
			Number nobj=new Number();
			
			nobj.Accept();
			nobj.Display();
			
			nobj.pallindrome();
	}
}