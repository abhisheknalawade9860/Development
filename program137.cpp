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
		void DisplayEven()
		{
			int iDigit=0;
			
			while(iNo!=0)
			{
				iDigit=iNo%10;
				if((iDigit%2)==0)
				{
					cout<<iDigit<<endl;
				}
				iNo=iNo/10;
			}
		}
		
};

int main()
{
	Number nobj;
	
	nobj.Accept();
	nobj.Display();

	nobj.DisplayEven();

	return 0;
}