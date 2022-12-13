#include<stdio.h>
#include<stdbool.h>

int DisplaySumOfFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

bool CheckPerfect(int iNo)
{
	int iAns = 0;
	iAns = DisplaySumOfFactors(iNo);
	if(iAns == iNo)
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
	int iValue = 0;
	int iRet = 0;
	bool bRet;

	printf("Enter number\n:");
	scanf("%d",&iValue);
	
	iRet = DisplaySumOfFactors(iValue);
	printf("Sum of Factors is : %d\n",iRet);
	
	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d bRet is not a perfect number\n",iValue);
	}
	
	return 0;
}