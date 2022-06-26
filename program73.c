//return index as output(display first occurance)
//Search no.=30 & index is 2

/*	0	1	2	3	4	5	
	10  20	30	40	30	50
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirstOccurance(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{	
			break;
		}		
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
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
	
	printf("Enter the number to Search\n",iValue);
	scanf("%d",&iValue);

	iRet=SearchFirstOccurance(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such element in array\n");
	}
	else
	{
		printf("Element first occured at:%d\n",iRet);
	}

	free(ptr);
	return 0;
}
