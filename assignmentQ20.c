#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt=0;
	int iSumOfFact=0;
	int iSumOfNonFact=0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSumOfFact=iSumOfFact+iCnt;
		}
		if((iNo%iCnt)!=0)
		{
			iSumOfNonFact=iSumOfNonFact+iCnt;
		}
	}
	return iSumOfFact-iSumOfNonFact;
}

int main()
{
  int iValue=0;
  int iRet=0;
  
  printf("enter a number:\n");
  scanf("%d",&iValue);
  
  iRet=FactDiff(iValue);
  
  printf("%d",iRet);
  
  
  return 0;
  
}