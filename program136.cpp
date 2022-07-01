#include<iostream>
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
		int CountDigit()
		{
			int iCnt=0;
			
			while(iNo!=0)
			{
				iCnt++;
				iNo=iNo/10;
			}
			return iCnt;
		}
		
};

int main()
{
	Number nobj;
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();

	iRet=nobj.CountDigit();
	cout<<"Count of digit is:"<<iRet<<endl;

	return 0;
}