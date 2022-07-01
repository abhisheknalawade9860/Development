//Problm on number
//1*2*3*4*5=120

#include<iostream>
using namespace std;

class Number
{
	private:
		int iNo;
	
	public:
		
		void Accept()
		{
			cout<<"Enter the value:"<<endl;
			cin>>this->iNo;
		}
		void Display()
		{
			cout<<"Value is:"<<this->iNo<<endl;
		}
		
		int Factorial()
		{
			int iCnt=0,iFact=1;
			
			for(iCnt=1;iCnt<=iNo;iCnt++)
			{
				iFact=iFact*iCnt;
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
	cout<<"Facrorial is"<<iRet<<endl;

	return 0;
}