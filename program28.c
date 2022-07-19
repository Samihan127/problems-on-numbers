//accept number and check perfect no or not
#include<stdio.h>

int PerfectNumber(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			
			iSum=iSum+iCnt;
		}
	}
	if(iSum==iNo)
	{
		printf("perfect number:%d",iNo);
	}
	else
	{
		printf("not perfect number:%d",iNo);
	}
}

int main()
{
  int iValue=0;
  
  printf("Enter a number:\n");
  scanf("%d",&iValue);
  
  PerfectNumber(iValue);
  
  return 0;
  
}