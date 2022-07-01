#include<iostream>
#include<stdbool.h>
using namespace std;

class Number
{
	private:
		int iNo;
		
	public:
	
		void Accept()
		{
			cout<<"Enter the value"<<endl;
			cin>>this->iNo;
		}
		void Display()
		{
			cout<<"Value is:"<<this->iNo<<endl;
		}
		
		bool CheckPerfect()
		{
			int iCnt=0,iSum=0;
			
			for(iCnt=1;iCnt<iNo;iCnt++)
			{
				if((iNo%iCnt)==0)
				{
					iSum=iSum+iCnt;
				}
			}
			if(iSum==iNo)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main()
{
	Number nobj;
	bool bRet=0;
	
	nobj.Accept();
	nobj.Display();

	bRet=nobj.CheckPerfect();
	if(bRet==true)
	{
		cout<<"it is perfect number"<<endl;
	}
	else
	{
		cout<<"it is not perfect number"<<endl;
	}
	
	return 0;
}