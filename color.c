#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int gdriver=DETECT,gmode;
int x,y,i;
initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
for(i=0;i<=200;i++)
{
cleardevice();
setbaccolor;
setcolor(red);
circle(100+i,100,50);
delay(5);
}
getch();
}