#include<stdio.h> //printf() scanf()
#include<conio.h> //_getch()


int main()
{
	//int float char

	float fAreaOfCircle=0.0;	//Area of Circle  %f
	float fRadiusOfCircle=0.0; //Radius of Circle

	printf("Please Enter Radius ");
	scanf("%f",&fRadiusOfCircle);

	fAreaOfCircle=3.1415*fRadiusOfCircle*fRadiusOfCircle;
	printf("Area of Circle is %f",fAreaOfCircle);
	_getch();
	return 0;
}