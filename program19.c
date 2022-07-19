//program to print sum of 1 to n numbers 

#include<stdio.h>

int Sum(int iVal)
{
	int iCnt=0;
	int iSum=0;

	for(iCnt=1;iCnt<=iVal;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;

}

int main()
{
	int iNo=0;
	int iRet=0;

	printf("enter a number:");
	scanf("%d",&iNo);

	iRet=Sum(iNo);
	printf("sum is :%d",iRet);

	return 0;

}

