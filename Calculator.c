#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int k=0,res=0;
int menu()
{
	
	int ch;
	printf("\n\n   1.Add");
	printf("\n   2.Sub");
	printf("\n   3.Mul");
	printf("\n   4.Div");
	printf("\n   5.Remainder");
	printf("\n   6.Square");
	printf("\n   7.Log");
	printf("\n   8.Clear");
	printf("\n   9.Exit");
	printf("\n\n Enter the choose:");
	scanf("%d",&ch);
	return(ch);
}
void add()
{
	int a,b;
	if(k){
		printf("\n\n Enter a number:");
		scanf("%d",&a);
		res+=a;
		printf("\n Result:%d",res);
	}
	else{
		printf("\n Enter two number:\n");
		scanf("%d%d",&a,&b);
		res=a+b;
		printf("Result:%d",res);
	}
}
void Sub()
{
	int a,b;
	if(k){
		printf("\n\n Enter a number:");
		scanf("%d",&a);
		res-=a;
		printf("\n Result:%d",res);
	}
	else{
		printf("\n Enter two number:\n");
		scanf("%d%d",&a,&b);
		res=a-b;
	printf("\n Result:%d",res);
	}
}
void Mul()
{
	int a,b;
	if(k){
		printf("\n\n Enter a number:");
		scanf("%d",&a);
		res*=a;
		printf("\n Result:%d",res);
	}
	else{
		printf("\n Enter two number:\n");
		scanf("%d%d",&a,&b);
		res=a*b;
	printf("\n Result:%d",res);
	}
}
void Div()
{
	int a,b;
	if(k){
		printf("\n\n Enter a number:");
		scanf("%d",&a);
		res/=a;
		printf("\n Result:%d",res);
	}
	else{
		printf("\n Enter two number:\n");
		scanf("%d%d",&a,&b);
		res=a/b;
		printf("\n Result:%d",res);
	}
}
void Rim()
{
	int a,b;
	if(k){
		printf("\n\n Enter a number:");
		scanf("%d",&a);
		res%=a;
		printf("\n Result:%d",res);
	}
	else{
		printf("\n Enter two number:\n");
		scanf("%d%d",&a,&b);
		res=a%b;
		printf("\n Result:%d",res);
	}
}
void squ()
{
	int a;
	if(k){
		printf("\n\n Enter a number:");
		scanf("%d",&a);
		res=a*a;
		printf("\n Result:%d",res);
	}
	else{
		printf("\n Enter number:\n");
		scanf("%d",&a);
		res=a*a;
		printf("\n Result:%d",res);
	}
}
int Log()
{
	double a,res;
	if(k){
	
		printf("\n\n Enter a number:");
		scanf("%lf",&a);
		res=log(a);
		printf("log(%.1f)=%.2f",a,res);
		return 0;
	}
	else{
		printf("\n\n Enter a number:");
		scanf("%lf",&a);
		res=log(a);
		printf("log(%.1f)=%.2f",a,res);
		return 0;
	}
}
void Clear(){
	printf("old data clear");
	res=0;
	k=0;
}
int main()
{
	while(1){
	
	system("cls");
	printf("\t\t\t  Simple Calculator");
	printf("\n\n    Old Result = %d",res);
	switch(menu())
	{
		case 1:
			add();
			k=1;
			break;
		case 2:
			Sub();
			k=1;
			break;
		case 3:
			Mul();
			k=1;
			break;
		case 4:
			Div();
			k=1;
			break;
		case 5:
			Rim();
			k=1;
			break;
		case 6:
			squ();
			k=1;
			break;
		case 7:
			Log();
			k=1;
			break;
		case 8:
			Clear();
			k=1;
			break;
		case 9:
			exit(0);
		
		default:
			printf("\n Invalid choice");
	}// end of switch 
		getch();
	}// end of while 
}// end of main fumction
