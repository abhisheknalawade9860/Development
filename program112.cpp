//
//4*3*2*1   24
//1*2*3*4   24
 
#include<iostream>
using namespace std;

class Number
{
	public:
	int Factorial(int iNo)
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
int main()
{
	Number nobj;
	
	int iValue=0;
	int iRet=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	iRet=nobj.Factorial(iValue);
	
	cout<<"Factorial is:"<<iRet<<endl;
	
	return 0;
}