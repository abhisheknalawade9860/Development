// string compare

#include<iostream>

using namespace std;

bool strcmpX(char *source,char *destination)		//*str=str[]
{
	while((*source!='\0')&&(*destination!='\0'))
	{
		if(*source!=*destination)
		{
			break;
		}
		source++;
		destination++;
	}
	
	if(*source=='\0'&& *destination=='\0')
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	char Arr[20];	//Bharaleli wahi
	char Brr[20];	//Kori wahi
	bool bRet;
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter second string"<<endl;
	cin.getline(Brr,20);
	
	bRet=strcmpX(Arr,Brr);
	if(bRet==true)
	{
		cout<<"String are equal"<<endl;
	}
	else
	{
		cout<<"String are not equal"<<endl;
	}
	
	return 0;
}