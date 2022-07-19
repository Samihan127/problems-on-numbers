//accept number from user and display its multiplication iof factors
//input:12
//output:144  (1*2*3*4*6)
#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt=0;
	int iMul=1;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMul=iMul*iCnt;
			
		}
	}
	return iMul;
}
int main()
{
  int iValue=0;
  int iRet=0;
  
  printf("enter number:");
  scanf("%d",&iValue);
  
  iRet=MultFact(iValue);
  printf("multiplication of factors is:%d",iRet);
  
  return 0;
  
}
