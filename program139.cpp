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
		int Reverse()
		{
			int iDigit=0;
			int iRev=0;
			
			while(iNo!=0)
			{
				iDigit=iNo%10;
				iRev=iRev*10+iDigit;
				iNo=iNo/10;
			}
			return iRev;
		}
		
};

int main()
{
	Number nobj;
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();

	iRet=nobj.Reverse();
	cout<<"Reverse digit are:"<<iRet<<endl;

	return 0;
}