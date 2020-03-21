/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
#include <time.h>

/* 
	function iDraw() is called again and again by the system.
*/



struct data
{
	char name[20];
	int score;
}saved[6], saved2[6],player,temp;


//--------co-ordinate of console------------

int i;
int width = 1362;
int height = 1026;

//-----------co-ordinate of deadshot and shooting deadshot----------

int deadshotX = 70;
int deadshotY = 252;

//-----------zombie's running image--------------

char zombieMaleRunning[10];
char zombieFemaleRunning[10];

//----------co-ordinate of male zombies-------------

int zombieMaleX[3] = {358,358,358};
int zombieMaleY[3] = {252,252,252};


//----------co-ordinate of female zombies-------------

int zombieFemaleX[3] = {358,358,358};
int zombieFemaleY[3] = {252,252,252};
int zombieFemaleRightFacingX = 93;
int zombieFemaleRightFacingY = 252;


//---------co-ordinate of bullet----------

int bullet1X = deadshotX;
int bullet1Y = deadshotY+50;
int	bullet2X = deadshotX+104;
int	bullet2Y = deadshotY+50;
int bulletUX = deadshotX;
int bulletUY = deadshotY+50;

//-----------boolean variable for bullet-----------

bool bullet1 = false;
bool bullet2 = false;
bool bulletU = false;

//-----------boolean variable for deadshot and deadshot's property-------------

bool deadshot = true;
bool deadshotShootingLeft = false;
bool deadshotShootingRight = false;
bool deadshotShootingUp = false;
bool deadshotRunningLeft = false;
bool deadshotRunningRight = false;
bool jump = false;
bool land = false;
bool lifeBool = false;

//----------boolean variable for zombies life---------

bool zombieMaleAlive[3] = {true,false,false};
bool zombieFemaleAlive[3] = {false,false,false};
bool zombieFemaleAliveRightFacing = false;

//----------index variable for zombies------------

int zombieIndex = 0;


//----------index variable for deadshot's property------------

int deadshotLeftIndex = 0;
int deadshotRightIndex = 0;
int life = 3;


//----------variables for strating page---------

bool startingPage = true;
bool play[2]={true,false};
bool highscores[2]={true,false};
bool instructions[2]={true,false};
bool exitz[2]={true,false};
int button=0;
bool story = false;
int sto_ry;
int storyIndex = 0;
int mainMenuButton = 1;
int mainMenuButton2 = 1;
bool initializing_mainMenuButtonValue = true;

//----------boolean variables for first levels and steps---------

bool first_Level = false;
bool first_LevelFirstStep = true;
bool first_LevelSecondStep = false;
bool first_LevelThirdStep = false;
bool newCoordinateFirst_LevelSecondStep = true;
bool newCoordinateFirst_LevelThirdStep = true;
bool gameOver = false;

 


//----------boolean variable for second levels and steps---------

bool second_Level = false;
bool secondLevelLastStep = false;
bool secondLevelRoad2 = false;
bool initializingValuesForSecond_level = true;
bool initializingValuesForSecond_levelLeftSideZombies = true;
bool initializingValuesForSecond_levelRightSideZombies = true;
bool initializingValueStone = true;
bool second_levelRoad_1stPortion = true;
bool second_levelRoad_2ndPortion = true;
bool second_levelRoad_3rdPortion = true;
bool second_levelSecondStep = false;
bool second_levelFirstStepFirstTunnel = true;
bool roadMoveSecond_Level=false;
int movingRoadY = 484 ;
int rand_Value;
bool stone = false;
int stoneX = deadshotX, stoneY = 2160;
bool leftZombie_SL = false;
bool rightZombie_SL = false;
int stoneSpeed = 10;
int zombieMaleSpeed = 15;
int zombieFemaleSpeed = 15;
int scoreTemp = 190;


//----------------variables for scoring and name input------------------

bool nameEntering = false;
int score = -10;
char score2[20];
char scr[100];
bool clicked = false;
char name[20];
char name2[20];
int nameLen = 0;
int savedScore[6];
char savedName[6][20];
FILE *fp;
char c[100];
int scoreY=700;
bool highscoresPage = false;
bool instructionPage = false;
char scoreArray[5][10];
bool congrtz = false;
bool scoreOnceChecked = true;


//----------pic reference variable for starting page-------------

char storyPages[4][50] = { "starting(1).bmp", "starting(2).bmp", "starting(3).bmp", "starting(4).bmp"};


//---------pic refference variable for zombies---------

char zombie1MaleRunning[10][50] = {"zombieMaleRunning (1).bmp","zombieMaleRunning (2).bmp","zombieMaleRunning (3).bmp",
	"zombieMaleRunning (4).bmp","zombieMaleRunning (5).bmp",
	"zombieMaleRunning (6).bmp","zombieMaleRunning (7).bmp","zombieMaleRunning (8).bmp",
	"zombieMaleRunning (9).bmp","zombieMaleRunning (10).bmp"};

char zombie2MaleRunning[10][50] = {"zombieMaleRunning (1).bmp","zombieMaleRunning (2).bmp","zombieMaleRunning (3).bmp",
	"zombieMaleRunning (4).bmp","zombieMaleRunning (5).bmp",
	"zombieMaleRunning (6).bmp","zombieMaleRunning (7).bmp","zombieMaleRunning (8).bmp",
	"zombieMaleRunning (9).bmp","zombieMaleRunning (10).bmp"};

char zombie3MaleRunning[10][50] = {"zombieMaleRunning (1).bmp","zombieMaleRunning (2).bmp","zombieMaleRunning (3).bmp",
	"zombieMaleRunning (4).bmp","zombieMaleRunning (5).bmp",
	"zombieMaleRunning (6).bmp","zombieMaleRunning (7).bmp","zombieMaleRunning (8).bmp",
	"zombieMaleRunning (9).bmp","zombieMaleRunning (10).bmp"};

char zombie1FemaleRunning[10][50] = {"zombieFemaleRunning (1).bmp","zombieFemaleRunning (2).bmp","zombieFemaleRunning (3).bmp",
	"zombieFemaleRunning (4).bmp","zombieFemaleRunning (5).bmp",
	"zombieFemaleRunning (6).bmp","zombieFemaleRunning (7).bmp","zombieFemaleRunning (8).bmp",
	"zombieFemaleRunning (9).bmp","zombieFemaleRunning (10).bmp"};

char zombie2FemaleRunning[10][50] = {"zombieFemaleRunning (1).bmp","zombieFemaleRunning (2).bmp","zombieFemaleRunning (3).bmp",
	"zombieFemaleRunning (4).bmp","zombieFemaleRunning (5).bmp",
	"zombieFemaleRunning (6).bmp","zombieFemaleRunning (7).bmp","zombieFemaleRunning (8).bmp",
	"zombieFemaleRunning (9).bmp","zombieFemaleRunning (10).bmp"};

char zombie3FemaleRunning[10][50] = {"zombieFemaleRunning (1).bmp","zombieFemaleRunning (2).bmp","zombieFemaleRunning (3).bmp",
	"zombieFemaleRunning (4).bmp","zombieFemaleRunning (5).bmp",
	"zombieFemaleRunning (6).bmp","zombieFemaleRunning (7).bmp","zombieFemaleRunning (8).bmp",
	"zombieFemaleRunning (9).bmp","zombieFemaleRunning (10).bmp"};

char zombie1FemaleRunningRightFacing[10][50] = {"zombieFemaleRunningRightFacing (1).bmp","zombieFemaleRunningRightFacing (2).bmp","zombieFemaleRunningRightFacing (3).bmp",
	"zombieFemaleRunningRightFacing (4).bmp","zombieFemaleRunningRightFacing (5).bmp",
	"zombieFemaleRunningRightFacing (6).bmp","zombieFemaleRunningRightFacing (7).bmp","zombieFemaleRunningRightFacing (8).bmp",
	"zombieFemaleRunningRightFacing (9).bmp","zombieFemaleRunningRightFacing (10).bmp"};


//---------pic refference variable for deadshot running time---------

char deadshotLeftRunning[8][50] = {"deadshotRunningLeft (1).bmp","deadshotRunningLeft (2).bmp","deadshotRunningLeft (3).bmp",
	"deadshotRunningLeft (4).bmp","deadshotRunningLeft (5).bmp",
	"deadshotRunningLeft (6).bmp","deadshotRunningLeft (7).bmp","deadshotRunningLeft (8).bmp"};

char deadshotRightRunning[8][50] = {"deadshotRunningRight (1).bmp","deadshotRunningRight (2).bmp","deadshotRunningRight (3).bmp",
	"deadshotRunningRight (4).bmp","deadshotRunningRight (5).bmp",
	"deadshotRunningRight (6).bmp","deadshotRunningRight (7).bmp","deadshotRunningRight (8).bmp"};





void deadshotRightMove()
{
		iShowBMP2(deadshotX,deadshotY,deadshotLeftRunning[deadshotRightIndex],255);		
}


void deadshotLeftMove()
{
	iShowBMP2(deadshotX,deadshotY,deadshotRightRunning[deadshotLeftIndex],255);
}



void zombie1MaleMove()
{
	for(i = 0; i < 10; i++)
	{
		iShowBMP2(zombieMaleX[0],zombieMaleY[0],zombie1MaleRunning[zombieIndex],255);
		
	}

	if(first_LevelFirstStep)
		zombieMaleX[0] -= 9;
	else if(first_LevelSecondStep)
		zombieMaleX[0] -= 11;
	else if(first_LevelThirdStep)
		zombieMaleX[0] -= 7;

	
		
}

void zombie2MaleMove()
{

	for(i = 0; i < 10; i++)
	{
		iShowBMP2(zombieMaleX[1],zombieMaleY[1],zombie2MaleRunning[zombieIndex],255);
		
	}

	if(first_LevelFirstStep)
		zombieMaleX[1] -= 9;
	else if(first_LevelSecondStep)
		zombieMaleX[1] -= 11;
	 else if(first_LevelThirdStep)
		zombieMaleX[1] -= 7;
	
}

void zombie3MaleMove()
{
	for(i = 0; i < 10; i++)
	{
		iShowBMP2(zombieMaleX[2],zombieMaleY[2],zombie3MaleRunning[zombieIndex],255);
		
	}
	
	if(first_LevelFirstStep)
		zombieMaleX[2] -= 9;
	else if(first_LevelSecondStep)
		zombieMaleX[2] -= 11;
	 else if(first_LevelThirdStep)
		zombieMaleX[2] -= 7;
	

	if(second_Level)
		zombieMaleX[2] -= zombieMaleSpeed;
}


void zombie1FemaleMove()
{
	for(i = 0; i<10; i++)
	{
		iShowBMP2(zombieFemaleX[0],zombieFemaleY[0],zombie1FemaleRunning[zombieIndex],255);
		
	}
	
	if(first_LevelFirstStep)
		zombieFemaleX[0] -= 9;
	else if(first_LevelSecondStep)
		zombieFemaleX[0] -= 11;
	 else if(first_LevelThirdStep)
		zombieFemaleX[0] -= 7;
	

	
}

void zombie2FemaleMove()
{

	for(i = 0; i < 10; i++)
	{
		iShowBMP2(zombieFemaleX[1],zombieFemaleY[1],zombie2FemaleRunning[zombieIndex],255);
		
	}
	
	if(first_LevelFirstStep)
		zombieFemaleX[1] -= 9;
	else if(first_LevelSecondStep)
		zombieFemaleX[1] -= 11;
	 else if(first_LevelThirdStep)
		zombieFemaleX[1] -= 7;
	
	
}

void zombie3FemaleMove()
{
	for(i = 0; i<10; i++)
	{
		iShowBMP2(zombieFemaleX[2],zombieFemaleY[2],zombie3FemaleRunning[zombieIndex],255);
		
	}
	
	if(first_LevelFirstStep)
		zombieFemaleX[2] -= 9;
	else if(first_LevelSecondStep)
		zombieFemaleX[2] -= 11;
	 else if(first_LevelThirdStep)
		zombieFemaleX[2] -= 7;
	

	
}





void bullet1Move(){

	
	iShowBMP2(bullet1X,bullet1Y,"Bullet.bmp",255);
		bullet1X -= 7;
}


void bullet2Move(){


	iShowBMP2(bullet2X,bullet2Y,"Bullet.bmp",255);
		bullet2X += 7;
}


void bulletUMove(){

	iShowBMP2(bulletUX,bulletUY,"BulletUp.bmp",255);
		bulletUY += 7;
}


void startingMenu(){

	iShowBMP2(0,0,"startingPage.bmp",255);
	if(play[0])
		iShowBMP2(600,685,"play(1).bmp",255);

	if(button == 1){
		exitz[1] = false;
		instructions[1] = false;
		play[1] = true;
	}
	if(play[1])
		iShowBMP2(600,685,"play(2).bmp",255);

	if(instructions[0])
		iShowBMP2(600,540,"instructions(1).bmp",255);

	if(button == 2){
		play[1] = false;
		highscores[1] = false;
		instructions[1] = true;
	}
	if(instructions[1])
		iShowBMP2(600,540,"instructions(2).bmp",255);

	if(highscores[0])
		iShowBMP2(600,395,"High scores(1).bmp",255);

	if(button == 3){
		instructions[1] = false;
		exitz[1] = false;
		highscores[1] = true;
	}
	if(highscores[1])
	iShowBMP2(600,395,"High scores(2).bmp",255);

	if(exitz[0])
		iShowBMP2(1200,200,"Exit(1).bmp",255);

	if(button == 4){
		highscores[1] = false;
		play[1] = false;
		exitz[1] = true;
	}
	if(exitz[1])
		iShowBMP2(1200,200,"Exit(2).bmp",255);

}


void storyPage(){

	iShowBMP( 0, 150, storyPages[storyIndex]);

	if(storyIndex == 4){
		iPauseTimer(sto_ry);
		first_Level = true;
	}

	
}


void jumping(){
	
	deadshotRunningLeft = false;
	deadshotRunningRight = false;
	iShowBMP2(deadshotX,deadshotY,"deadshot.bmp",255);
	if(deadshotY != 477)
	deadshotY += 15;
	else 
	{
		jump = false;
		deadshot = true;
	}
	
}


void landing(){

	deadshotRunningLeft = false;
	deadshotRunningRight = false;
	iShowBMP2(deadshotX,deadshotY,"deadshot.bmp",255);
	if(deadshotY!=252)
	deadshotY -= 15;
	else 
	{
		land = false;
		deadshot = true;
	}


}

void nameInput(){

	iText(600,600,"Enter your name :",GLUT_BITMAP_HELVETICA_10);
	iRectangle(600,550,250,30);
	iText(400,252,"Click to activate and Enter to proceed",GLUT_BITMAP_HELVETICA_10);
}



void showHighscores(){

	iShowBMP( 0, 150, "Highscores.bmp");
	iSetColor( 255, 0, 0);
	iText(450, 760, "Name ",  GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 730, saved[0].name,  GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 700, saved[1].name,  GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 670, saved[2].name,  GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 640, saved[3].name,  GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450, 610, saved[4].name,  GLUT_BITMAP_TIMES_ROMAN_24);
    
	iText(600, 760, "Score ",  GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(scoreArray[0] , "%d" , saved[0].score);
	iText(600, 730, scoreArray[0],  GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(scoreArray[1] , "%d" , saved[1].score);
	iText(600, 700, scoreArray[1],  GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(scoreArray[2] , "%d" , saved[2].score);
	iText(600, 670, scoreArray[2],  GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(scoreArray[3] , "%d" , saved[3].score);
	iText(600, 640, scoreArray[3],  GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(scoreArray[4] , "%d" , saved[4].score);
	iText(600, 610, scoreArray[4],  GLUT_BITMAP_TIMES_ROMAN_24);
	
	if(mainMenuButton2 == 1)
			iShowBMP2( 1000, 200, "mainMenu(1).bmp", 255);
		else if(mainMenuButton2 == 2)
			iShowBMP2( 1000, 200, "mainMenu(2).bmp", 255);

}


void firstLevelFirstStep(){
	
	
	if(zombieMaleAlive[0])
		zombie1MaleMove();
	
	if(zombieMaleX[0] < 266 || zombieMaleX[0] == 100000)
		zombieFemaleAlive[0] = true;
	if(zombieFemaleAlive[0])
		zombie1FemaleMove();

	if(zombieFemaleX[0] < 266 || zombieFemaleX[0] == 100000)
		zombieMaleAlive[1] = true;
	if(zombieMaleAlive[1])
		zombie2MaleMove();

	if(zombieMaleX[1] < 266 || zombieMaleX[1] == 100000)
		zombieFemaleAlive[1] = true;
	if(zombieFemaleAlive[1])
		zombie2FemaleMove();


	if(zombieFemaleX[1] < 266 || zombieFemaleX[1] == 100000)
		zombieMaleAlive[2] = true;
	if(zombieMaleAlive[2])
		zombie3MaleMove();

	if(zombieMaleX[2] < 266 || zombieMaleX[2] == 100000)
		zombieFemaleAlive[2] = true;
	if(zombieFemaleAlive[2])
		zombie3FemaleMove();
		
}



void firstLevelSecondStepNewCoordinate(){

	zombieMaleX[0] = 748;
	zombieMaleX[1] = 748;
	zombieMaleX[2] = 748;
	zombieMaleY[0] = 477;
	zombieMaleY[1] = 477;
	zombieMaleY[2] = 477;
	zombieFemaleX[0] = 748;
	zombieFemaleX[1] = 748;
	zombieFemaleX[2] = 748;
	zombieFemaleY[0] = 477;
	zombieFemaleY[1] = 477;
	zombieFemaleY[2] = 477;

	zombieMaleAlive[0] = true;
	zombieMaleAlive[1] = false;
	zombieMaleAlive[2] = false;
	zombieFemaleAlive[0] = false;
	zombieFemaleAlive[1] = false;
	zombieFemaleAlive[2] = false;

	newCoordinateFirst_LevelSecondStep = false;

}

void firstLevelSecondStep(){
	
	
	if(newCoordinateFirst_LevelSecondStep)
			firstLevelSecondStepNewCoordinate();
	
	

	if(zombieMaleAlive[0])
		zombie1MaleMove();
	
	if(zombieMaleX[0] < 656 || zombieMaleX[0] == 100000)
		zombieFemaleAlive[0] = true;
	if(zombieFemaleAlive[0])
		zombie1FemaleMove();

	if(zombieFemaleX[0] < 656 || zombieFemaleX[0] == 100000)
		zombieMaleAlive[1] = true;
	if(zombieMaleAlive[1])
		zombie2MaleMove();

	if(zombieMaleX[1] < 656 || zombieMaleX[1] == 100000)
		zombieFemaleAlive[1] = true;
	if(zombieFemaleAlive[1])
		zombie2FemaleMove();


	if(zombieFemaleX[1] < 656 || zombieFemaleX[1] == 100000)
		zombieMaleAlive[2] = true;
	if(zombieMaleAlive[2])
		zombie3MaleMove();

	if(zombieMaleX[2] < 656 || zombieMaleX[2] == 100000)
		zombieFemaleAlive[2] = true;
	if(zombieFemaleAlive[2])
		zombie3FemaleMove();

	if( zombieMaleX[0] < 480 )
		zombieMaleX[0] = 100000;

	if( zombieMaleX[1] < 480 )
		zombieMaleX[1] = 100000;

	if( zombieMaleX[2] < 480 )
		zombieMaleX[2] = 100000;

	if( zombieFemaleX[0] < 480 )
		zombieFemaleX[0] = 100000;

	if( zombieFemaleX[1] < 480 )
		zombieFemaleX[1] = 100000;

	if( zombieFemaleX[2] < 480 )
		zombieFemaleX[2] = 100000;
		
}


void firstLevelThirdStepNewCoordinate(){

	zombieMaleX[0] = 1178;
	zombieMaleX[1] = 1178;
	zombieMaleX[2] = 1178;
	zombieMaleY[0] = 252;
	zombieMaleY[1] = 252;
	zombieMaleY[2] = 252;
	zombieFemaleX[0] = 1178;
	zombieFemaleX[1] = 1178;
	zombieFemaleX[2] = 1178;
	zombieFemaleY[0] = 252;
	zombieFemaleY[1] = 252;
	zombieFemaleY[2] = 252;

	zombieMaleAlive[0] = true;
	zombieMaleAlive[1] = false;
	zombieMaleAlive[2] = false;
	zombieFemaleAlive[0] = false;
	zombieFemaleAlive[1] = false;
	zombieFemaleAlive[2] = false;

	newCoordinateFirst_LevelThirdStep = false;

}



void firstLevelThirdStep(){
	
	
	if(newCoordinateFirst_LevelThirdStep)
		firstLevelThirdStepNewCoordinate();
	

	if(zombieMaleAlive[0])
		zombie1MaleMove();
	
	if(zombieMaleX[0] < 1086 || zombieMaleX[0] == 100000)
		zombieFemaleAlive[0] = true;
	if(zombieFemaleAlive[0])
		zombie1FemaleMove();

	if(zombieFemaleX[0] < 1086 || zombieFemaleX[0] == 100000)
		zombieMaleAlive[1] = true;
	if(zombieMaleAlive[1])
		zombie2MaleMove();

	if(zombieMaleX[1] < 1086 || zombieMaleX[1] == 100000)
		zombieFemaleAlive[1] = true;
	if(zombieFemaleAlive[1])
		zombie2FemaleMove();


	if(zombieFemaleX[1] < 1086 || zombieFemaleX[1] == 100000)
		zombieMaleAlive[2] = true;
	if(zombieMaleAlive[2])
		zombie3MaleMove();

	if(zombieMaleX[2] < 1086 || zombieMaleX[2] == 100000)
		zombieFemaleAlive[2] = true;
	if(zombieFemaleAlive[2])
		zombie3FemaleMove();
		
}


void firstLevel(){

	iShowBMP(0,0,"background-1stLevel.bmp");
	iSetColor( 255, 0, 0);
	
	
	iText( 50, 1000, "Now playing", GLUT_BITMAP_HELVETICA_18);
	iText( 170, 1000, name, GLUT_BITMAP_HELVETICA_18);
	iText( 250, 1000, "Score : ", GLUT_BITMAP_HELVETICA_18);
	iText( 310, 1000, scr, GLUT_BITMAP_HELVETICA_18);

	iShowBMP2(0,258,"tunnel1.bmp",255);
	iShowBMP2(1270,258,"tunnel2.bmp",255);
	iShowBMP2(450,258,"tunnel2.bmp",255);
	iShowBMP2(450,482,"tunnel1.bmp",255);
	iShowBMP2(840,258,"tunnel1.bmp",255);
	iShowBMP2(450,420,"road-1stLevel.bmp",255);
	iShowBMP2(841,482,"tunnel2.bmp",255);
	

	if(deadshot)
		iShowBMP2(deadshotX,deadshotY,"deadshot.bmp",255);
	if(deadshotShootingLeft)
		iShowBMP2(deadshotX,deadshotY,"deadshotShootingLeft.bmp",255);
	if(deadshotShootingRight)
		iShowBMP2(deadshotX,deadshotY,"deadshotShootingRight.bmp",255);

	if(deadshotRunningLeft)
		deadshotLeftMove();

	if(deadshotRunningRight)
		deadshotRightMove();
	
	
	if(jump)
		jumping();


	if(land)
		landing();


	if(first_LevelFirstStep)
	firstLevelFirstStep();
	

	if(deadshotX>500)
	{
		first_LevelFirstStep = false;
		first_LevelSecondStep  = true;
		
	}


	if(first_LevelSecondStep)
		firstLevelSecondStep();

	

	if(deadshotX>920)
	{
		
		first_LevelSecondStep = false;
		first_LevelThirdStep = true;
		
	}

	if(first_LevelThirdStep)
		firstLevelThirdStep();


	if(deadshotX > 1355)
	{
		first_LevelThirdStep = false;
		first_Level = false;
		second_Level = true;
	}


	if(bullet1)
		bullet1Move();
	if(bullet2)
		bullet2Move();



}



void initializingValueForSecondLevel(){

	deadshotX = 0;
    deadshotY = 600;
	
	bullet2 = false;
    bullet1X = deadshotX;
    bullet1Y = deadshotY+50;
	bullet2X = deadshotX+104;
    bullet2Y = deadshotY+50;
	initializingValuesForSecond_level = false;
}



void zombie1FemaleMoveRightFacing()
{
	for(i = 0; i<10; i++)
	{
		iShowBMP2(zombieFemaleRightFacingX,zombieFemaleRightFacingY,zombie1FemaleRunningRightFacing[zombieIndex],255);
		
	}
	
	zombieFemaleRightFacingX += zombieFemaleSpeed;
}





void roadMoveSecondLevel(){

	roadMoveSecond_Level=true;
	movingRoadY -= 6;
	deadshotY -= 6;
}


void initializeValuesForLeftZombiesSL(){

	zombieMaleX[2] = 1270;

		initializingValuesForSecond_levelLeftSideZombies = false;

}

void initializeValuesForRightZombiesSL(){

		zombieFemaleRightFacingX = 93;

		initializingValuesForSecond_levelRightSideZombies = false;
}


void initializingValueForStone(){
	stoneX = deadshotX;
	stoneY = 784;

	initializingValueStone = false;
}


void stoneMove(){
		
	iShowBMP2( stoneX, stoneY, "stone.bmp", 255);	
	stoneY -= stoneSpeed;

}


void secondLevel(){

	if(initializingValuesForSecond_level)
		initializingValueForSecondLevel();

	

	iShowBMP( 0, 0, "bg-2ndLevel.bmp");
	if(second_levelRoad_1stPortion)
		iShowBMP( 0, 484, "road-2ndLevel-1stPortion.bmp");
	if(second_levelRoad_2ndPortion)
		iShowBMP( 92, movingRoadY, "road-2ndLevel-2ndPortion.bmp");
	if(second_levelRoad_3rdPortion)
		iShowBMP( 1270, 484, "road-2ndLevel-3rdPortion.bmp");
	
		
	iSetColor( 255, 0, 0);
	iText( 50, 1000, "Now playing", GLUT_BITMAP_HELVETICA_18);
	iText( 170, 1000, name, GLUT_BITMAP_HELVETICA_18);
	iText( 250, 1000, "Score : ", GLUT_BITMAP_HELVETICA_18);
	iText( 310, 1000, scr, GLUT_BITMAP_HELVETICA_18);
	
	if(deadshot)
		iShowBMP2(deadshotX,deadshotY,"deadshot.bmp",255);
	if(deadshotShootingLeft)
		iShowBMP2(deadshotX,deadshotY,"deadshotShootingLeft.bmp",255);
	if(deadshotShootingRight)
		iShowBMP2(deadshotX,deadshotY,"deadshotShootingRight.bmp",255);
	if(deadshotShootingUp)
		iShowBMP2(deadshotX,deadshotY,"deadshotShootingUp.bmp",255);

	if(deadshotRunningLeft)
		deadshotLeftMove();

	if(deadshotRunningRight)
		deadshotRightMove();


	if(deadshotX > 681)
		{
			roadMoveSecond_Level = true;
	if(movingRoadY != 136)
		roadMoveSecondLevel();

	}

	if(deadshotY > 245 && deadshotY < 260 && deadshotX < 1355)
		{
			roadMoveSecond_Level = false;
			second_levelRoad_1stPortion = false;
			second_levelRoad_2ndPortion = false;
			second_levelRoad_3rdPortion = false;
			secondLevelLastStep = true;
	}

	if(secondLevelLastStep)
	{
		iShowBMP2(0,258,"tunnel1.bmp",255);
		iShowBMP2(1270,258,"tunnel2.bmp",255);
		iShowBMP2( 0, 784, "road-2ndLevel-1stOne.bmp", 255);

		if(rand_Value == 1 && zombieMaleX[2] > 1362){		
			initializingValuesForSecond_levelLeftSideZombies = true;
			zombieMaleAlive[2] = true;
		}
			if(rand_Value == 2 && zombieFemaleRightFacingX < 0){
				initializingValuesForSecond_levelRightSideZombies = true;
				zombieFemaleAliveRightFacing = true;
			}
			if(rand_Value == 0 && stoneY > 1080){

				initializingValueStone = true;
				stone = true;
			}
			
	}

	if(zombieMaleAlive[2])
	{
		if(initializingValuesForSecond_levelLeftSideZombies)
			initializeValuesForLeftZombiesSL();

		zombie3MaleMove();
	}

	if(zombieFemaleAliveRightFacing)
	{	
		if(initializingValuesForSecond_levelRightSideZombies)
			initializeValuesForRightZombiesSL();

		zombie1FemaleMoveRightFacing();
	}

	if(stone)
	{
		if(initializingValueStone)
			initializingValueForStone();

		stoneMove();
	}

	


	if(bullet1)
		bullet1Move();
	if(bullet2)
		bullet2Move();
	if(bulletU)
		bulletUMove();

}

void game_Over(){
	first_Level = false;
	second_Level = false;

	if(scoreOnceChecked == true)
	{
		saved[5].score = score;

		for(int i = 0 ; i < 5; i++)
		{
			if(saved[i].score < saved[5].score)
			{
				congrtz = true;
				break;
			}

		}


		for(int i = 0 ; i < 5 ; i++)
		{
			for(int j = i ; j < 6 ; j++)
			{
				if (saved[i].score < saved[j].score)
				{
					temp = saved[j];
					saved[j] = saved[i];
					saved[i] = temp;
				}
			}

		}


		fp = fopen("HighScores.txt" , "w");
		for(int i = 0 ; i < 5; i++)
		{
			fputs(saved[i].name , fp);
			fprintf(fp , " %d\n" , saved[i].score);
		}
		
		scoreOnceChecked = false;
	}
	

	iShowBMP2(0,0,"gameOver.bmp",255);
    iText( 50, 1000, "Player name :", GLUT_BITMAP_HELVETICA_18);
	iText( 170, 1000, name, GLUT_BITMAP_HELVETICA_18);
	iText( 250, 1000, "Score : ", GLUT_BITMAP_HELVETICA_18);
	iText( 310, 1000, scr, GLUT_BITMAP_HELVETICA_18);

	if(congrtz)
		iText( 990, 1000, "Congratz !!! You gain a new high-score", GLUT_BITMAP_HELVETICA_18);

}



void iDraw()
{
	//place your drawing codes here	
	iClear();


	
	if(startingPage){
		
		startingMenu();
	}

	if(highscoresPage)
		showHighscores();

	if(nameEntering)
	{
		nameInput();

	if(clicked){
		iSetColor(250,250,250);
		iText(605,560,name);
	}
	}

	if(story)
		storyPage();

	if(instructionPage){

		iShowBMP2(0,150,"instructionsPage.bmp",0);
		if(mainMenuButton == 1)
			iShowBMP2( 1000, 200, "mainMenu(1).bmp", 255);
		else
			iShowBMP2( 1000, 200, "mainMenu(2).bmp", 255);

	}

	if(first_Level)
		firstLevel();
	
	if(second_Level)
		secondLevel();

	if(gameOver)
		game_Over();
	
	if(first_Level || second_Level)
	{
	if(life==3)
	{ 
		iShowBMP2(681,985,"Life.bmp",0);
		iShowBMP2(715,985,"Life.bmp",0);
		iShowBMP2(647,985,"Life.bmp",0);
	}
	else if(life==2)
	{
		iShowBMP2(681,985,"Life.bmp",0);
		iShowBMP2(715,985,"Life.bmp",0);
	}
	else if(life==1)
	{
		iShowBMP2(715,985,"Life.bmp",0);
	}
	}

	
	
}



/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		if(mx >= 600 && mx <= 850 && my >= 646 && my <= 668 && !clicked)
		{

			clicked = true;
	
		}
	}
	
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	
	if(nameEntering && clicked)
		{
			if(key == '\r')
			{
				clicked = false;
				strcpy( player.name, name);
				nameEntering = false;
				story = true;

				strcpy(saved[5].name , player.name);
				iResumeTimer(sto_ry);	
			}
			else
			{
			name[nameLen] = key;
			nameLen++;

			}
		}
	

	if(startingPage)
	{
		

		if(key == '\r')
		{
			if(button == 1)
			{
				startingPage = false;
				nameEntering = true;
				
			}

			if(button == 2)
			{
				startingPage = false;
				instructionPage = true;
			}

			if(button == 3)
			{
				startingPage = false;
				highscoresPage = true;
			}

			if(button == 4)
			{
				exit(0);
			}

		}


	}

			if(instructionPage)
			{
				if(key == '\r')
				{
				if(mainMenuButton == 2)
				{
					instructionPage = false;
					
					startingPage = true;
					
				}
				}
			}

			if(highscoresPage)
			{
				if(key == '\r')
				{
				if(mainMenuButton2 == 2)
				{
					highscoresPage = false;
					
					startingPage = true;
					
				}
				}
			}

		
	

	if( first_Level || second_Level )
	{
	if( key == 'a' || key == 'A' )
	{
		bullet1X = deadshotX+20;
		bullet1Y = deadshotY + 50;
		deadshot = false;
		deadshotShootingRight = false;
		deadshotRunningRight = false;
		deadshotRunningLeft = false;
		deadshotShootingUp = false;
		deadshotShootingLeft = true;
		bullet1 = true;

	}

		if( key =='d' || key == 'D' )
		{
			bullet2X = deadshotX + 104;
			bullet2Y = deadshotY + 50;
			deadshot = false;
			deadshotShootingLeft = false;
			deadshotRunningRight = false;
			deadshotRunningLeft = false;
			deadshotShootingUp = false;
			deadshotShootingRight = true;
			bullet2 = true;
			
		}

	}
		if(secondLevelLastStep)
		{
			if(key == 'w' || key == 'W')
			{
				bulletUX = deadshotX + 50;
			bulletUY = deadshotY + 128;
			deadshot = false;
			deadshotShootingLeft = false;
			deadshotRunningRight = false;
			deadshotRunningLeft = false;
			deadshotShootingRight = false;
			deadshotShootingUp = true;
			bulletU = true;

			}
		}


		if( first_Level  || second_Level )
		{
			if(key == 'u' || key == 'U')
			{
				first_Level = false;
				second_Level = false;
				startingPage = true;
	
			}

		}
	
	

	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
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


	if(key == GLUT_KEY_LEFT)
	{
			if(first_Level)
			{
				if(!jump && !land && !(deadshotX>457 && deadshotX<810 && deadshotY>248 && deadshotY<258) && deadshotX > 70)
				{
		
				deadshotLeftIndex++;
				if(deadshotLeftIndex == 7)
				deadshotLeftIndex = 0;

				deadshot = false;
				deadshotShootingLeft = false;
				deadshotShootingRight = false;
				deadshotShootingUp = false;
				deadshotRunningRight = false;
				deadshotRunningLeft = true;
				jump = false;
				land = false;
				deadshotX -= 9;

				}
			}


			if(second_Level && !roadMoveSecond_Level && deadshotX > 0 )
		{
		
			
				deadshotLeftIndex++;
				if(deadshotLeftIndex == 7)
				deadshotLeftIndex = 0;

				deadshot = false;
				deadshotShootingLeft = false;
				deadshotShootingRight = false;
				deadshotShootingUp = false;
				deadshotRunningRight = false;
				deadshotRunningLeft = true;
				jump = false;
				land = false;
				deadshotX -= 9;

			
		}
	


	}
			
	
	if(key == GLUT_KEY_RIGHT)
	{
			
		if(first_Level)
			{
				
				if(!jump && !land && !(deadshotX>455 && deadshotX<808 && deadshotY>248 && deadshotY<258))
				{

				deadshotRightIndex++;
				if(deadshotRightIndex == 7)
				deadshotRightIndex = 0;

				deadshot = false;
				deadshotShootingLeft = false;
				deadshotShootingRight = false;
				deadshotRunningLeft = false;
				deadshotShootingUp = false;
				deadshotRunningRight = true;
				jump = false;
				land=false;
				deadshotX += 9;

				}

			}
	
	
		if(second_Level && !roadMoveSecond_Level && deadshotX < 1270)
		{
		
			
		
				deadshotRightIndex++;
				if(deadshotRightIndex == 7)
					deadshotRightIndex = 0;

				deadshot = false;
				deadshotShootingLeft = false;
				deadshotShootingRight = false;
				deadshotRunningLeft = false;
				deadshotShootingUp = false;
				deadshotRunningRight = true;
				jump = false;
				land = false;
				deadshotX += 9;

			
		}
	}


	if(key == GLUT_KEY_UP)
	{

		if(startingPage)
		{
			button--;

			if(button == 0)
				button = 4;

			
		}

		if(instructionPage)
		{
			mainMenuButton--;

			if(mainMenuButton == 0)
				mainMenuButton = 2;
		}

		if(highscoresPage)
		{
			mainMenuButton2--;

			if(mainMenuButton2 == 0)
				mainMenuButton2 = 2;
		}

		if(first_Level){
			if(deadshotX > 62 && deadshotX < 543 && deadshotY > 250 && deadshotY < 260 && !land)
		{
			jump = true;
		}

		else if(deadshotX > 410 && deadshotX < 932 && deadshotY > 475 && deadshotY < 485 && !land)
		{
			jump = true;
		}
		}

	}


	if(key==GLUT_KEY_DOWN)
	{
		if(startingPage)
		{
			button++;

			if(button == 5)
				button = 1;			
		
		}

		if(instructionPage)
		{
			mainMenuButton++;

			if(mainMenuButton == 3)
				mainMenuButton = 1;
		}


		if(highscoresPage)
		{
			mainMenuButton2++;

			if(mainMenuButton2 == 3)
				mainMenuButton2 = 1;
		}

	}

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}


void indexChanging(){

	zombieIndex++ ;
		if(zombieIndex == 9)
			zombieIndex = 0;

	}


void collison(){


//-------------for right sided bullet----------------

	if( ( bullet2X > ( zombieMaleX[0] + 20 ) ) && ( bullet2Y > zombieMaleY[0] ) )
	{
		bullet2 = false;
		zombieMaleAlive[0] = false;
		zombieMaleX[0] = 100000;
		bullet2X = - 1000000;
		score += 10;
		sprintf( scr, "%d", score);

	}

	if( ( bullet2X > ( zombieMaleX[1] + 20 ) ) && ( bullet2Y > zombieMaleY[1] ) )
	{
		bullet2 = false;
		zombieMaleAlive[1] = false;
		zombieMaleX[1] = 100000;
		bullet2X = - 1000000;
		score += 10;
		sprintf( scr, "%d", score);
	}

	if( ( bullet2X > ( zombieMaleX[2] + 20 ) ) && ( bullet2Y > zombieMaleY[2] ) )
	{
		bullet2 = false;
		zombieMaleAlive[2] = false;
		zombieMaleX[2] = 100000;
		bullet2X = - 1000000;
		score += 10;
		sprintf( scr, "%d", score);
	}

	if( ( bullet2X > ( zombieFemaleX[0] + 20 ) ) && ( bullet2Y > zombieFemaleY[0] ) )
	{
		bullet2 = false;
		zombieFemaleAlive[0] = false;
		zombieFemaleX[0] = 100000;
		bullet2X = - 1000000;
		score += 10;
		sprintf( scr, "%d", score);
	}

	if( ( bullet2X > ( zombieFemaleX[1] + 20 ) ) && ( bullet2Y > zombieFemaleY[1] ) )
	{
		bullet2 = false;
		zombieFemaleAlive[1] = false;
		zombieFemaleX[1] = 100000;
		bullet2X = - 1000000;
		score += 10;
		sprintf( scr, "%d", score);
	}
	
	if( ( bullet2X > ( zombieFemaleX[2] + 20 ) ) && ( bullet2Y > zombieFemaleY[2] ) )
	{
		bullet2 = false;
		zombieFemaleAlive[2] = false;
		zombieFemaleX[2] = 100000;
		bullet2X = - 1000000;
		score += 10;
		sprintf( scr, "%d", score);
	}



//----------------for left sided bullet-------------
	
	if(bullet1X < (zombieFemaleRightFacingX + 92))
	{
		bullet1 = false;
		zombieFemaleAliveRightFacing = false;
		zombieFemaleRightFacingX = - 100000;
		bullet1X = 1000000;
		score += 10;
		sprintf( scr, "%d", score);
	}


//--------------for upper bullet-------------------------

	if(bulletUY > stoneY)
	{
		bulletU = false;
		stone = false;
		stoneY = 10000;
		bulletUY = -100000;
		score += 5;
		sprintf( scr, "%d", score);
	}


//----------------for deadshot------------------

	if( ( deadshotX + 92 > zombieMaleX[0] && deadshotY == zombieMaleY[0] ) || ( deadshotX + 92 > zombieMaleX[1] && deadshotY == zombieMaleY[1] ) ||
		( deadshotX + 92 > zombieMaleX[2] && deadshotY == zombieMaleY[2] ) || ( deadshotX + 92 > zombieFemaleX[0] && deadshotY == zombieFemaleY[0] ) || 
		( deadshotX + 92 > zombieFemaleX[1] && deadshotY == zombieFemaleY[1] ) || ( deadshotX + 92 > zombieFemaleX[2] && deadshotY == zombieFemaleY[2] ) || 
		deadshotX < zombieFemaleRightFacingX + 92 || (deadshotY + 100 > stoneY && deadshotX < stoneX + 104 && deadshotX + 92 > stoneX ))
	{
		if(life == 3)
			life--;
		else if(life == 2)
			life--;
		else if(life == 1)
		{
			gameOver = true;
			player.score = score;
		}

	}


//-----------for zombies-------------

	if( deadshotX + 92 > zombieMaleX[0] && deadshotY == zombieMaleY[0] )
		zombieMaleX[0] = 100000;
	else if( deadshotX + 92 > zombieMaleX[1] && deadshotY == zombieMaleY[1] )
		zombieMaleX[1] = 100000;
	else if( deadshotX + 92 > zombieMaleX[2] && deadshotY == zombieMaleY[2] )
		zombieMaleX[2] = 100000;
	else if( deadshotX + 92 > zombieFemaleX[0] && deadshotY == zombieFemaleY[0] )
		zombieFemaleX[0] = 100000;
	else if( deadshotX + 92 > zombieFemaleX[1] && deadshotY == zombieFemaleY[1] )
		zombieFemaleX[1] = 100000;
	else if( deadshotX + 92 > zombieFemaleX[2] && deadshotY == zombieFemaleY[2] )
		zombieFemaleX[2] = 100000;
	else if( deadshotX < zombieFemaleRightFacingX + 92)
		zombieFemaleRightFacingX = -100000;
	

//--------------for stone---------------

	if(deadshotY + 100 > stoneY && deadshotX < stoneX + 104 && deadshotX + 92 > stoneX )
		stoneY = 100000;
	else if( stoneY < 252 )
		stoneY = 100000;
	else if(zombieMaleY[2] + 100 > stoneY && zombieMaleX[2] < stoneX + 104 && zombieMaleX[2] + 92 > stoneX )
		stoneY = 100000;
	else if(zombieFemaleRightFacingY + 100 > stoneY && zombieFemaleRightFacingX < stoneX + 104 && zombieFemaleRightFacingX + 92 > stoneX )
		stoneY = 100000;
}


void landChecking(){

	if(!jump)
	{
		if(deadshotY>476 && deadshotY<485 && deadshotX>0 && deadshotX<410)
			land = true;
		
		else if(deadshotY>476 && deadshotY<485 && deadshotX>900 && deadshotX<width)
			land = true;

	}

	

} 


void randValue(){
	rand_Value = rand() % 3;
}


void storyIndexChanging(){

	storyIndex++;
}

void lastLevelSpeedIncreasing(){

	if(score > scoreTemp){

		zombieMaleSpeed += 3;
		zombieFemaleSpeed += 3;
		stoneSpeed += 3;
		scoreTemp = scoreTemp+100;
	}

}

int main()
{
	//place your own initialization codes here. 
	
	srand((unsigned)time(NULL));

	int i = 0;
	fp = fopen("HighScores.txt", "r");
	if(fp == NULL)
	{
		fp = fopen("HighScores.txt", "w");
	}
	while(fscanf(fp,"%s %d ", &saved[i].name, &saved[i].score)!=EOF)
		i++;
	fclose(fp);


	iSetTimer( 1, lastLevelSpeedIncreasing);
	iSetTimer( 300, randValue);
	sto_ry = iSetTimer( 5000, storyIndexChanging);
	iPauseTimer(sto_ry);
	iSetTimer( 1, landChecking);
	iSetTimer( 1, collison);
	iSetTimer( 100, indexChanging);
	iInitialize( width, height, "demooo");
	
	return 0;
}	