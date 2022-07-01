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
		
		bool CheckPrime()
		{
			int iCnt=0;
			bool bFlag=true;
	
			if(iNo<0)
			{
				iNo=-iNo;
			}

			for(iCnt=2;iCnt<=(iNo/2);iCnt++)
			{
				if(iNo%iCnt==0)
				{
					bFlag=false;
					break;
				}
			}
			return bFlag;
		}
		
};

int main()
{
	Number nobj;
	bool bRet=0;
	
	nobj.Accept();
	nobj.Display();

	bRet=nobj.CheckPrime();
	if(bRet==true)
	{
		cout<<"it is prime number"<<endl;
	}
	else
	{
		cout<<"it is not prime number"<<endl;
	}

	return 0;
}