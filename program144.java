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
	
	int Summation()
	{
		int iCnt=0,iSum=0;
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iSum=iSum+iCnt;
		}
		return iSum;
	}
}

class program144
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		int iRet=0;
		
		nobj.Accept();
		nobj.Display();
		
		iRet=nobj.Summation();
		System.out.println("Summation is:"+iRet);
	}
}