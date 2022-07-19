 //accept number from user and display its factors in decresing order
//input:12
//output:6 4 3 2 1 
#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt=0;
	for(iCnt=(iNo/2)+1;iCnt<iNo;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}
int main()
{
  int iValue=0;
  
  printf("enter number:");
  scanf("%d",&iValue);
  
  FactRev(iValue);
  
  
  return 0;
  
}