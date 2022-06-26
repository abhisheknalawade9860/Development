//program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration of iteration

void Display(int iNo)
{
	int iCnt=0;	

	

	 //   1       2          3
	for(iCnt=0; iCnt<=iNo; iCnt++)
	{
		printf("Hello\n");	//4
	}

}



int main()
{
	int iValue=0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue);
	
	Display(iValue);

	return 0;
}