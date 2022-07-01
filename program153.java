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
	void DisplayEven()
	{
		int iDigit=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if((iDigit%2)==0)
			{
				System.out.println(iDigit);
			}
			iNo=iNo/10;
		}
	}
}

class program153
{
	public static void main(String arg[])
	{
			Number nobj=new Number();
			
			nobj.Accept();
			nobj.Display();
			
			nobj.DisplayEven();
	}
}