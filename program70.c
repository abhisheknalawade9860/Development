//Frequency count 

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iFrequency=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iNo==Arr[iCnt])
		{
			iFrequency++;
		}		
	}
	return iFrequency;
}

int main()
{
	int *ptr=NULL;
	int iCnt=0,iValue=0;
	int iSize=0;
	int iRet=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter values:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the number to calculate the frequency\n",iValue);
	scanf("%d",&iValue);

	iRet=Frequency(ptr,iSize,iValue);
	printf("Frequency is:%d\n",iRet);

	free(ptr);
	return 0;
}
