#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

void emoji1();
void emoji2();
void emoji3();
void emoji4();
void emoji5();
void emoji6();
void emoji7();
void emoji8();
void emoji9();
void emoji10();
void emoji11();
void emoji12();
void main()
{
   int gd = DETECT, gm;
   int ch;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   clrscr();
   printf("First choice : Smile");
   printf("\tSecond choice : slightly smiling face ");
   printf("\nThird choice : Smiling face with open mouth ");
   printf("\tFourth choice :Grinning face");
   printf("\nFifth choice :Smiling face with open mouth and smiling eyes");
   printf("\nSixth choice : Grinning face with smiling eyes");
   printf("\nSeventh choice : Smiling face with open mouth and closed eyes");
   printf("\nEighth choice : Smiling face");
   printf("\tNinth choice : upside -down face");
   printf("\nTenth choice : Face with stuck-out tongue");
   printf("\nEleventh choice :Face with stuck-out tongue and closed eyes");
   printf("\nTwelth choice : Face savouring delicious food");
   do
   {
   printf("\nEnter the choice:");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:  emoji1();
	     break;
    case 2:  emoji2();
	     break;
    case 3:  emoji3();
	     break;
    case 4:  emoji4();
	     break;
    case 5:  emoji5();
	     break;
    case 6:  emoji6();
	     break;
    case 7:  emoji7();
	     break;
    case 8:  emoji8();
	     break;
    case 9:  emoji9();
	     break;
    case 10: emoji10();
	     break;
    case 11: emoji11();
	     break;
    case 12: emoji12();
	     break;
    case 13: printf("Invalid choice");
	     break;
}
}
while(ch!=13);

   setcolor(WHITE);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
   outtextxy(215, 351, "EMOJI ANIMATION");

   getch();
   closegraph();

}
void style()
{
   setcolor(YELLOW);
   circle(300, 220,75);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(300, 220, YELLOW);
 }
   void emoji1()
{
   cleardevice();
   style();
   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   circle(270, 195, 5);
   floodfill(270,195,BLACK);
   circle(330, 195, 5);
   floodfill(330,195, BLACK);

   ellipse(300, 245, 535, 360, 30, 14);
   ellipse(300, 245, 535, 360, 30, 15);
   ellipse(300, 245, 535, 360, 30, 16);

}
   void emoji2()
{
   cleardevice();
   style();
   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(270, 195, 4, 7);
   fillellipse(330, 195, 4, 7);

   ellipse(300, 245, 535, 360, 30, 14);
   ellipse(300, 245, 535, 360, 30, 15);
   ellipse(300, 245, 535, 360, 30, 16);
}
   void emoji3()
{
   cleardevice();
   style();
   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(270, 195, 4, 7);
   fillellipse(330, 195, 4, 7);

   ellipse(300, 245, 535, 360, 30, 9);
   ellipse(300, 245, 535, 360, 30, 10);
   ellipse(300, 245, 535, 360, 30, 11);

   ellipse(300, 245, 535, 360, 30, 14);
   ellipse(300, 245, 535, 360, 30, 15);
   ellipse(300, 245, 535, 360, 30, 16);
}
   void emoji4()
{
   cleardevice();
   style();
   setcolor(BLACK);
   circle(270, 195, 5);
   setfillstyle(SOLID_FILL, BLACK);
   floodfill(270,195,BLACK);
   circle(330, 195, 5);
   floodfill(330,195, BLACK);

   ellipse(300, 255, 535, 360, 30, 9);
   ellipse(300, 255, 535, 360, 30, 10);
   ellipse(300, 255, 535, 360, 30, 11);
   ellipse(300, 255, 535, 360, 30, 14);
   ellipse(300, 255, 535, 360, 30, 15);
   ellipse(300, 255, 535, 360, 30, 16);
}
   void emoji5()
{
   cleardevice();
   style();
   setcolor(BLACK);
   ellipse(275,205,360,175,15,9);
   ellipse(275,205,360,175,15,10);
   ellipse(275,205,360,175,15,11);

   ellipse(325,205,360,175,15,9);
   ellipse(325,205,360,175,15,10);
   ellipse(325,205,360,175,15,11);

   ellipse(300, 245, 535, 360, 30, 10);
   ellipse(300, 245, 535, 360, 30, 11);
   ellipse(300, 245, 535, 360, 30, 17);
   ellipse(300, 245, 535, 360, 30, 18);
}
   void emoji6()
{
   cleardevice();
   style();
   setcolor(BLACK);
   ellipse(275,195,360,175,20,9);
   ellipse(275,195,360,175,20,10);
   ellipse(275,195,360,175,20,11);

   ellipse(275,210,360,175,10,9);
   ellipse(275,210,360,175,10,10);
   ellipse(275,210,360,175,10,11);

   ellipse(325,195,360,175,20,9);
   ellipse(325,195,360,175,20,10);
   ellipse(325,195,360,175,20,11);
   ellipse(325,210,360,175,10,9);
   ellipse(325,210,360,175,10,10);
   ellipse(325,210,360,175,10,11);

   ellipse(300, 245, 535, 360, 30, 10);
   ellipse(300, 245, 535, 360, 30, 11);
   ellipse(300, 245, 535, 360, 30, 17);
   ellipse(300, 245, 535, 360, 30, 18);
}
   void emoji7()
{

   int x1=260,x2=290,x3=260,y1=180,y2=195,y3=210,x4=340,x5=310,
   x6=340,y4=180,y5=195,y6=210;
   cleardevice();
   style();
   setcolor(BLACK);
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x4,y4,x5,y5);
   line(x5,y5,x6,y6);

   ellipse(300, 245, 535, 360, 40, 10);
   ellipse(300, 245, 535, 360, 40, 11);
   ellipse(300, 245, 535, 360, 40, 17);
   ellipse(300, 245, 535, 360, 40, 18);
}
   void emoji8()
{
   cleardevice();
   style();
   setcolor(BLACK);
   ellipse(275,195,360,175,20,9);
   ellipse(275,195,360,175,20,10);
   ellipse(275,195,360,175,20,11);

   ellipse(275,210,175,360,10,9);
   ellipse(275,210,175,360,10,10);
   ellipse(275,210,175,360,10,11);

   ellipse(325,195,360,175,20,9);
   ellipse(325,195,360,175,20,10);
   ellipse(325,195,360,175,20,11);

   ellipse(325,210,175,360,10,9);
   ellipse(325,210,175,360,10,10);
   ellipse(325,210,175,360,10,11);

   ellipse(300, 255, 535, 360, 30, 10);
   ellipse(300, 255, 535, 360, 30, 11);
   ellipse(300, 255, 535, 360, 30, 12);
}
   void emoji9()
{
   cleardevice();
   style();
   setcolor(BLACK);
   circle(270, 245, 5);
   setfillstyle(SOLID_FILL, BLACK);
   floodfill(270,245,BLACK);
   circle(330, 245, 5);
   floodfill(330,245, BLACK);

   ellipse(300, 195, 360, 535, 30, 14);
   ellipse(300, 195, 360, 535, 30, 15);
   ellipse(300, 195, 360, 535, 30, 16);
}
   void emoji10()
{
   cleardevice();
   style();
   setcolor(BLACK);
   circle(270, 195, 5);
   setfillstyle(SOLID_FILL, BLACK);
   floodfill(270,195,BLACK);
   circle(330, 195, 5);
   floodfill(330,195, BLACK);

   ellipse(300, 245, 535, 360, 30, 10);
   ellipse(300, 245, 535, 360, 30, 11);
   ellipse(300, 245, 535, 360, 30, 16);
   ellipse(300, 245, 535, 360, 30, 17);

   ellipse(300, 272, 110, 415, 5,9);
   ellipse(300, 272, 110, 415, 5,10);
   ellipse(300, 272, 110, 415, 5,11);
   ellipse(300, 272, 110, 415, 5,12);
}
void emoji11()
{

   int x1=260,x2=290,x3=260,y1=180,y2=195,y3=210,x4=340,x5=310,
   x6=340,y4=180,y5=195,y6=210;
   cleardevice();
   style();
   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x4,y4,x5,y5);
   line(x5,y5,x6,y6);

   ellipse(300, 245, 535, 360, 40, 10);
   ellipse(300, 245, 535, 360, 40, 11);
   ellipse(300, 245, 535, 360, 40, 17);
   ellipse(300, 245, 535, 360, 40, 18);


   ellipse(300, 272, 110, 415, 5,9);
   ellipse(300, 272, 110, 415, 5,10);
   ellipse(300, 272, 110, 415, 5,11);
   ellipse(300, 272, 110, 415, 5,12);
}
   void emoji12()
{
   cleardevice();
   style();
   setcolor(BLACK);
   ellipse(275,205,360,175,15,9);
   ellipse(275,205,360,175,15,10);
   ellipse(275,205,360,175,15,11);

   ellipse(325,205,360,175,15,9);
   ellipse(325,205,360,175,15,10);
   ellipse(325,205,360,175,15,11);

   ellipse(300, 245, 535, 360, 30, 9);
   ellipse(300, 245, 535, 360, 30, 10);
   ellipse(300, 245, 535, 360, 30, 11);

   ellipse(275, 250, 520, 350, 5,9);
   ellipse(275, 250, 520, 350, 5,10);
   ellipse(275, 250, 520, 350, 5,11);
}
