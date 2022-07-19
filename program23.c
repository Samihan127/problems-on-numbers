/*
0 to 35   fail
35 to 50  pass class
50 to 60  second class
60 to 75  first class
75 to 100 first class with distinction
*/

#include<stdio.h>

void DisplayClass(float fMarks)
{
	if((fMarks>0.0)&&(fMarks<35.0))
	{
		printf("you are fail\n");
	}
	else if((fMarks>=35.0)&&(fMarks<50.0))
	{
		printf("pass class\n");
	}
	else if((fMarks>=50.0)&&(fMarks<60.0))
	{
		printf("second class\n");
	}
	else if((fMarks>=60.0)&&(fMarks<75.0))
	{
		printf("first class\n");
	}
	else if((fMarks>=75.0)&&(fMarks<100.0))
	{
		printf("first classs with distinction\n");
	}
	else
	{
		printf("invalid marks\n");
	}
}

//////////////////////////////////////////

int main()
{
  float fValue=0.0;
 
  printf("enter the percentage:\n");
  scanf("%f",&fValue);
  
  DisplayClass(fValue);

  return 0;
  
}