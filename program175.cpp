// copy one string to another string

#include<iostream>
using namespace std;

void strcpyX(char *source,char *destination)		//*str=str[]
{
	while(*source!='\0')
	{
		*destination=*source;
		source++;
		destination++;
	}
	*destination='\0';
}

int main()
{
	char Arr[20];	//Bharaleli wahi
	char Brr[20];	//Kori wahi
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strcpyX(Arr,Brr);
	cout<<"String after copy:"<<Brr<<endl;
	
	return 0;
}