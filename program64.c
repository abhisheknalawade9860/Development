#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
	int iCnt=0;
	printf("Even elements are:\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize=0,iCnt=0;
	int *ptr=NULL;

	printf("Enter number of elements:\n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the value of array:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	DisplayEven(ptr,iSize);
	free(ptr);

	return 0;
}

/*
steps to solve problm on N numbers

step 1:Accept the size of array from user
step 2:Allocate the memory dynamically for that array
step 3:Accept value from user & store in the array
step 4:Pass that array & size to the function(Logic)
step 5:Deallocating memory of that array
*/