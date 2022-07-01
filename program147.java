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
	
	int SumFactors()
	{
		int iCnt=0,iSum=0;
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}
		return iSum;
	}
}


class program147
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		int iRet=0;
		
		nobj.Accept();
		nobj.Display();
		
		iRet=nobj.SumFactors();
		System.out.println("Summation of factor is:"+iRet);
	}
}