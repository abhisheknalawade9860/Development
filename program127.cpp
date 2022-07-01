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
			cout<<"value is:"<<this->iNo<<endl;
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
};

int main()
{
	Number nobj;
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();

	iRet=nobj.Summation();
	cout<<"Summation is:"<<iRet<<endl;

	return 0;
}