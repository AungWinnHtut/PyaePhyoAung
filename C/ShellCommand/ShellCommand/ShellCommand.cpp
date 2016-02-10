#include<stdio.h>
#include<conio.h>
#include<process.h> //system()
int main()
{

	system("dir");
	system("d:");
	system("md d:\\testing");
	system("systeminfo > d:\\testing\\systeminfo.txt");
	_getch();
	return 0;
}