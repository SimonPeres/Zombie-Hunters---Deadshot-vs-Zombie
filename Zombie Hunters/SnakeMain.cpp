/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"

/* 
	function iDraw() is called again and again by the system.
*/
//double mx=5,my=6;
double m=250;
double k=10;
int i=0,j=0;
double radius=3;
char score[100];
int flag=0,f=0;
double width=10,height=12;
int xCord=150;
int yCord=160;
int timer1,timer2;
int a=0;
int menu=0;
int sumx=0,sumy=0;
int move=0;

struct snack
{
	//int array[10][10];

	int x;
	int y;

}SnakeArray[10];
//void bigfood()
//{
//	iFilledCircle(10,20,30);
//	a=a+2;
//}

void iDraw()
{
	//place your drawing codes here	
	
	iClear();
	if(menu==0){
		
		//iShowBMP(300,150, "ncBGdqaji.bmp");
		iSetColor(0,255, 0);
		iText(380, 100, "To start the game press S",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if(menu==1)
	{
	
	
	iSetColor(0,255, 0);
	iFilledCircle(m,k,radius);

	iSetColor(255, 0, 0);
	//iFilledRectangle(mx,my,width,height);
	for(	int i=0; i<20; i++)
	{
		if(SnakeArray[i].x>0)
		{
			if(move==1)
				iFilledRectangle(SnakeArray[i].x   ,SnakeArray[i].y  + i*5 ,width,height);
			else
				iFilledRectangle(SnakeArray[i].x +  i*5 ,SnakeArray[i].y ,width,height);
		}
	}
	
	iSetColor(80,250,80);
	iRectangle(3, 3, 850, 495);
	iRectangle(858, 330, 140, 170);
	iRectangle(858, 3, 140, 330);
	
	iSetColor(5,200, 100);
	iText(865, 200,"pause: p",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(865, 150,"resume: r",GLUT_BITMAP_TIMES_ROMAN_24);
	
	iSetColor(5,200, 100);
	iText(865, 400, score,GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(score,"Score: %d",a);
	
	iSetColor(10,60, 90);
	iFilledRectangle(250,250,100,60);
	iFilledRectangle(650,250,100,60);
	if(a==2){
		 
	iFilledCircle(50,50,30);
	a=a+2;
	}

	}
	if(menu==2)
	{
		//iShowBMP(0,0, "untitled.bmp");
	}
	
	


}

void iMouseMove(int mx, int my)
{
	//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		xCord=mx;
		yCord=my;
		printf("x is %d and y is %d",mx,my);
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}
/*iPassiveMouseMove is called to detect and use 
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//place your code here
	xCord=mx;
	yCord=my;
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/
 
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 's')
		menu=1;
	if(key == 'p')
		iPauseTimer(timer1);
	if(key == 'r')
		iResumeTimer(timer1);

}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/

void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_UP)
	{
	
		sumy=sumy+height;
		sumx=sumx+width;
		flag=1;
		f=1;
		move=1;
			
	}
	if(key == GLUT_KEY_DOWN)
	{
		
		
		sumy=sumy+height;
		sumx=sumx+width;
		flag=2;
		f=1;
		move=1;
	}
	if(key == GLUT_KEY_LEFT)
	{
		
		sumy+=width;
		sumx+=height;
		flag=3;
		f=1;
		move=3;
	}
	if(key == GLUT_KEY_RIGHT)
	{
		
		sumy+=width;
		sumx+=height;
		flag=4;
		f=1;
		move=4;
	}
	//place your codes for other keys here
}


void updown ()
{
    //if((my+height +5 > k && my+height -5< k) && ( mx +5 > m && mx-5< m))
	if((SnakeArray[i].y+height +5 > k && SnakeArray[i].y+height -5< k) && ( SnakeArray[j].x +5 > m && SnakeArray[j].x-5< m))
		{

			rand();
			m=rand() %847;
			k=k+50;
			++a;
			//height+=5;
			SnakeArray[a].x =  SnakeArray[j].x;
			SnakeArray[a].y =  SnakeArray[j].y;
			sumx=sumx+height;
			printf("In scoring condition");
	}
	//if(my>=495 || my<=3)
	if(SnakeArray[i].y>=495 || SnakeArray[i].y<=3)
	{
	menu=2;
	}
	if((SnakeArray[j].x  >= 250 && SnakeArray[j].x  <= 350) && (SnakeArray[i].y+height ==250 || SnakeArray[j].y == 320))
		menu=2;
	//if((mx >= 650 && mx <= 750) && (my+height ==250 || my == 320))
	if((SnakeArray[j].x >= 650 && SnakeArray[j].x <= 750) && (SnakeArray[i].y+height ==250 || SnakeArray[i].y == 320))
		menu=2;
	


}
void leftright()
{

	//printf("mx+width= %ld \n m = %ld \ my = %ld k= %ld" ,mx+width, m, my, k );

	/*printf("mx =  %lf \n", mx + width);
	printf("mx =  %lf \n", m);
	printf("mx =  %lf \n", my);
	printf("mx =  %lf \n", k);*/

	//if(mx+width +5 > m && mx+width -5< m && ( my +5 > k && my-5< k) )
	if(SnakeArray[j].x +width +5 > m  && SnakeArray[j].x+width -5< m && ( SnakeArray[i].y +5 > k && SnakeArray[i].y-5< k))
		{	
			
			m= rand() %847 ;
			k= rand() %492;
			a++;
			//width+=10;
			SnakeArray[a].x =  SnakeArray[j].x;
			SnakeArray[a].y =  SnakeArray[i].y;
			sumy=sumy+width;
			

	}
	//if(mx+width>=850 || mx<=3)
	if(SnakeArray[j].x+width>=850 || SnakeArray[j].x<=3)
	{
	menu=2;
	}
	//if((mx+width == 250 || mx-width == 350) && (my>=250 && my <= 320))
	if((SnakeArray[j].x+width == 250 || SnakeArray[j].x-width == 350) && (SnakeArray[i].y>=250 && SnakeArray[i].y <= 320))
		menu=2;

	//if((mx+width == 650 || mx-width == 750) && (my>=250 && my <= 320))
	if((SnakeArray[j].x+width == 650 || SnakeArray[j].x-width == 750) && (SnakeArray[i].y>=250 && SnakeArray[i].y <= 320))
		menu=2;

	
}




void snackmove()
{	//sprintf(score,"Score: %d",1);


	for(int i=0; i<20 ;i++)
	{

		if(SnakeArray[i].x == 0) return;


	if(flag==1 && f==1){
		//my++;
		
		SnakeArray[i].y++;
		//SnakeArray[1].y++;
		updown();
	}
	else if(flag==2 && f==1){
		//my--;
		SnakeArray[i].y--;
		//SnakeArray[1].y--;
		updown();
	}
	else if(flag==3 && f==1){
	//	mx--;
		SnakeArray[i].x--;
		//SnakeArray[1].x--;
		leftright();
	}
	else if(flag==4 && f==1){
		//mx++;
		SnakeArray[i].x++;
		//SnakeArray[1].x++;
		
		leftright();
	}
	else
	{
		flag=0;
		f=0;
	}
	}
	
}


int main()
{
	//place your own initialization codes here.
	int j=0;
	int i=0;
	SnakeArray[0].x=10;
	SnakeArray[0].y=6;
	timer1=iSetTimer(10,snackmove);
	//timer2=iSetTimer(10, iDraw);
	iInitialize(1000, 500, "Snack");
	return 0;
}	