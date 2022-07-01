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
		int SumDigit()
		{
			int iDigit=0;
			int iSum=0;
			
			while(iNo!=0)
			{
				iDigit=iNo%10;
				iSum=iSum+iDigit;
				iNo=iNo/10;
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

	iRet=nobj.SumDigit();
	cout<<"Summation of digit is:"<<iRet<<endl;

	return 0;
}