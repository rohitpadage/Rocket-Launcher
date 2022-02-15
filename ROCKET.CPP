#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define BKSP 8
#define ENTER 13



int cx,cy;
void Start();
void Password();
void Loading();
void Rocket();
void rect(int x1,int y1,int x2,int y2){ rectangle(x1,y1,x1+x2,y1+y2); }
void main()
{
int gd=DETECT ,gm ;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(3);
rectangle(0,0,getmaxx(),getmaxy());

cx=getmaxx()/2;
cy=getmaxy()/2;
Start();
getch();
closegraph();

}
void Start()
{
setcolor(RED);

Loading();
  setcolor(GREEN);
  Password();
  Rocket();
}
void Password()
{
   cleardevice();
	int x=50,y=100;
	int iy=50;
       //	line(cx,0,cx,getmaxy());
	// line(0,cy,getmaxx(),cy);
  //  rectangle(cx-x,cy-y,cx+x,cy+y);
   // rectangle(cx-10,cy-iy,cx+10,cy-20);

  //  rectangle(cx-30,cy-y-30,cx+60,cy-y);
      rect(cx-x,cy-y,100,100);
      x=10;y=50;
      rect(cx-x,cy-y,20,20);
      x=30;y=140;
      rect(cx-x,cy-y,60,40);
      x=220;y=260;
      rect(x,y,200,30);
      line(cx,cy-30,cx,238);

      gotoxy(30,18);
      char pass[30],ch;
	int i=0;
      while(1)
      {
      ch=getch();
     if(ch==BKSP && i!=0)
     {
     printf("\b \b");
     i--;
     }
     else if(i>=20)
     {

     }
     else if(ch==ENTER)
     {
     pass[i]='\0';
     break;
     }
    else
    {
    pass[i]=ch;
    printf("*");
    i++;
    }
  }


if(     strcmp(pass,"rohit")==0)
{
}
else
{
printf("\nTry Again");
setcolor(RED);
Password();
}

}
void Loading()
{
// Boot Animation ###############################################
int i;
// For ARC animation
for(i=0;i<181;i++){
cleardevice();
setcolor(YELLOW);
arc(cx,cy,90-i,90+i,70);
arc(cx,cy,90-i,90+i,71);
delay(10);
}
// LINE animation
for(i=0;i<75;i++){
cleardevice();
circle(cx,cy,70);
circle(cx,cy,71);
line(249-i,239-i,389+i,239-i);
line(249-i,239+i,389+i,239+i);
delay(10);
}
// LOGO
cleardevice();
for(i=0;i<30;i++){
//cleardevice();
setcolor(BLUE);
rectangle(315-i,235-i,315,235);
rectangle(323+i,235-i,323,235);
rectangle(315-i,243+i,315,243);
rectangle(323+i,243+i,323,243);
delay(20);
}
// Loding bar
rect(250,300,140,10);
for(i=0;i<140;i++){
rect(250,300,i,10);
delay(50);
}

}

void Rocket()
{
rect( (getmaxx()/2)-20,500,(getmaxy()/2)+20,400);
}