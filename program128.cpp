//20
//1	2	4	5	10	
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
		
		void DisplayFactors()
		{
			int iCnt=0;
			
			for(iCnt=1;iCnt<iNo;iCnt++)
			{
				if((iNo%iCnt)==0)
				{
					cout<<iCnt<<endl;
				}
			}
			
		}
		
};

int main()
{
	Number nobj;
	
	
	nobj.Accept();
	nobj.Display();

	nobj.DisplayFactors();
	
	
	return 0;
}