#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
	int iSum=0,iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iLength=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter number of element\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter the value of array\n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Summation(ptr,iLength);
	
	printf("Addition is:%d",iRet);
	
	free(ptr);
	
	return 0;
}