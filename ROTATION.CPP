#include<graphics.h>
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int graphdriver=DETECT,graphmode,errorcode;
int i;
int x2=300,y2=310,y1=150,x1=160,x,y,xn,yn;
double r11,r12,r21,r22,th;
//printf("Enter the 2 line end points:");
//printf("x1,y1,x2,y2");
//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&graphdriver,&graphmode,"c:\\turboc3\\bgi");
line(x1,y1,x2,y2);
printf("\n\n\n\n\n\n\n\t\tEnter the angle for Rotation: ");
scanf("%lf",&th);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t***sabina shrestha***\n");
r11=cos((th*3.1428)/180);
r12=sin((th*3.1428)/180);
r21=(-sin((th*3.1428)/180));
r22=cos((th*3.1428)/180);
//printf("%lf  %lf  %lf  %lf",r11,r12,r21,r22);
xn=((x2*r11)-(y2*r12));
yn=((x2*r12)+(y2*r11));
line(x1,y1,xn,yn);
getch();
closegraph();
}
