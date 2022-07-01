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
	int SumDigit()
	{
		int iCnt=0,iDigit=0;
		int iSum=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iSum=iSum+iDigit;
			iNo=iNo/10;
		}
		return iSum;
	}
}

class program151
{
	public static void main(String arg[])
	{
			Number nobj=new Number();
			int iRet=0;
			
			nobj.Accept();
			nobj.Display();
			
			iRet=nobj.SumDigit();
			System.out.println("Summation is:"+iRet);
	}
}