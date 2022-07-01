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
	void DisplayDigit()
	{
		int iCnt=0,iDigit=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			System.out.println(iDigit);
			iNo=iNo/10;
		}
	}
}

class program150
{
	public static void main(String arg[])
	{
			Number nobj=new Number();
			
			nobj.Accept();
			nobj.Display();
			
			nobj.DisplayDigit();
	}
}