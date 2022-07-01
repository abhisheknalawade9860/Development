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
	int CountDigit()
	{
		int iCnt=0;
		
		while(iNo!=0)
		{
			iCnt++;
			iNo=iNo/10;
		}
		return iCnt;
	}
}

class program152
{
	public static void main(String arg[])
	{
			Number nobj=new Number();
			int iRet=0;
			
			nobj.Accept();
			nobj.Display();
			
			iRet=nobj.CountDigit();
			System.out.println("Count digit:"+iRet);
	}
}