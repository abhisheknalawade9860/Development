//Display maximum no.

#include<stdio.h>
#include<stdlib.h>


int Maximun(int Arr[],int iLength)
{
	int iMax=0,iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	int *ptr=NULL;
	int iCnt=0;
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
	
	iRet=Maximun(ptr,iSize);
	printf("Maximum number is:%d\n",iRet);
	
	free(ptr);
	return 0;
}
