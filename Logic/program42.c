#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			break;
		}
	}
	if(iCnt >= iNo/2)
	{
		return true;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	bRet = CheckPrime(iValue);
	if(bRet == true)
	{
		printf("%d is a prime number\n",iValue);
	}
	else
	{
		printf("%d is a not a prime number\n",iValue);
	}
	
	return 0;
}