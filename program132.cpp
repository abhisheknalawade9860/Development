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
		
		int CountFactors()
		{
			int iCnt=0,iFactCnt=0;
			
			for(iCnt=1;iCnt<iNo;iCnt++)
			{
				if((iNo%iCnt)==0)
				{
					iFactCnt++;
				}
			}
			return iFactCnt;
		}
};

int main()
{
	Number nobj;
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();

	iRet=nobj.CountFactors();
	cout<<"Factor count is:"<<iRet<<endl;

	return 0;
}