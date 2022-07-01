//
//4*3*2*1   24
//1*2*3*4   24
 
#include<iostream>
using namespace std;

class Number
{
	private:
		int iNo;		
	
	public:
	
		void Accept()	//Setter
		{
			cout<<"Enter the value:"<<endl;
			cin>>this->iNo;
		}
		
		void Display()		//Getter
		{
			cout<<"Value is:"<<this->iNo<<endl;
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
int main()
{
	Number nobj;
	
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	
	iRet=nobj.Factorial();
	
	cout<<"Factorial is:"<<iRet<<endl;
	
	return 0;
}