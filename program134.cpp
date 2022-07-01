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
		void DisplayDigit()
		{
			int iDigit=0;
			
			while(iNo!=0)
			{
				iDigit=iNo%10;
				cout<<iDigit<<endl;
				iNo=iNo/10;
			}
		}
		
};

int main()
{
	Number nobj;
	
	nobj.Accept();
	nobj.Display();

	nobj.DisplayDigit();

	return 0;
}