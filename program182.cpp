#include<iostream>
using namespace std;

bool ChkVowels(char *str)		//*str=str[]
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
		{
			iCnt++;
		}
		ch++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);

	iRet=CountVowels(Arr);
	cout<<"Vowels character are::"<<iRet<<endl;

	return 0;
}