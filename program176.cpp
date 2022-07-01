// string concatination

#include<iostream>
using namespace std;

void strcatX(char *source,char *destination)		//*str=str[]
{
	while(*destination!='\0')
	{
		destination++;
	}
	
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
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter second string"<<endl;
	cin.getline(Brr,20);
	
	strcatX(Arr,Brr);
	cout<<"String after concatination:"<<Brr<<endl;
	
	return 0;
}