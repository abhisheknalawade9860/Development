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
	int Reverse()
	{
		int iDigit=0;
		int iRev=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iRev=iRev*10+iDigit;
			iNo=iNo/10;
		}
		return iRev;
	}
}

class program154
{
	public static void main(String arg[])
	{
			Number nobj=new Number();
			int iRet=0;
			
			nobj.Accept();
			nobj.Display();
			
			iRet=nobj.Reverse();
			System.out.println("Reverse is:"+iRet);
	}
}