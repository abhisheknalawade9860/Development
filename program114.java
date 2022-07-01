import java.lang.*;
import java.util.*;


class Number
{
		private int iNo;
		
	
		public  void Accept()	//Setter
		{
			Scanner sobj=new Scanner(System.in);
			System.out.println("Enter number:");
			this.iNo=sobj.nextInt();
		}
		
		void Display()		//Getter
		{
			System.out.println("Value is:"+this.iNo);
		}
		
	int Factorial()
	{
		int iCnt=0;
		int iFact=1;
	
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iFact=iFact*iCnt;		//iFact*=iCnt;
		}
		return iFact;
	}
};

class program114
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		int iRet=0;
		
		nobj.Accept();
		nobj.Display();
		
		iRet=nobj.Factorial();
		System.out.println("Factorial is"+iRet);
		
		
	}
	
}
