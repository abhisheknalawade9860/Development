// display toggle case

#include<iostream>
using namespace std;

void strtoggleX(char str[])
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strtoggleX(Arr);
	cout<<"String in toggle case:"<<Arr<<endl;
	
	return 0;
}