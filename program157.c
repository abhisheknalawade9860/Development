#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
	int iDigCnt=0,iTemp=0,iMult=1,iDigit=0,iCnt=0,iSum=0;
	
	iTemp=iNo;
	while(iNo!=0)
	{
		iDigCnt++;
		iNo=iNo/10;
	}
	
	iNo=iTemp;
	
	while(iNo!=0)
	{
		iMult=1;
		iDigit=iNo%10;
		
		for(iCnt=1;iCnt<=iDigCnt;iCnt++)
		{
			iMult=iMult*iDigit;
		}
		iSum=iSum+iMult;
		iNo=iNo/10;
	}
	if(iSum==iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue=0;
	bool bRet=0;
	
	printf("Enter the number;\n");
	scanf("%d",&iValue);
	
	bRet=CheckArmstrong(iValue);
	if(bRet==true)
	{
		printf("it is Armstrong number\n");
	}
	else
	{
		printf("it is not Armstrong number\n");
	}

	return 0;
}