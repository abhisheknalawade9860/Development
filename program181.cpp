#include<iostream>
using namespace std;

int CountSpace(char str[])		//*str=str[]
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);

	iRet=CountSpace(Arr);
	cout<<"Space are::"<<iRet<<endl;

	return 0;
}