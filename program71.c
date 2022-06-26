//Search no.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			bFlag=true;
			break;
		}		
	}
	return bFlag;
}

int main()
{
	int *ptr=NULL;
	int iCnt=0,iValue=0;
	int iSize=0;
	bool bRet=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter values:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the number to Search\n",iValue);
	scanf("%d",&iValue);

	bRet=Search(ptr,iSize,iValue);
	if(bRet==true)
	{
		printf("Element is there in array\n");
	}
	else
	{
		printf("Element is not there in array\n");
	}

	free(ptr);
	return 0;
}
