#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int toss=0;
int call=0;
clrscr();
srand(time(NULL));
toss=rand()%2;
printf("say head or tail! pess 0 for head and 1 for tail:\n");
scanf("%d",&call);
if(call==0||call==1)
{
if(toss==call)
{
if(toss==1)
printf("you called it correctly....it was tail\n");
else
printf("you called it correctly....it was head\n");
}
else
{
if(toss==1)
printf("you called it wrongly...it is tail\n");
else
printf("you called it wrongly...it is head\n");
}
}
else
printf("invalid call\n");
getch();
}