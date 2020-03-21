
# include "iGraphics.h"
# include "string.h"
int mposx,  mposy;


//for move
int m_x,m_y;
int menu1=0,menu2=0;
int n=0,m=0,n1,m1,i=1;
int j,k,l;


//Methods

//For Initializeing.
void Initialize();

//For desining the bord.
void Board ();

//For wiping a Reactangale.
void Menu1();
void Menu2();


//Structure for the Court.
struct Board{
	char letter[10];
	char colour;
	int mx;
	int my;
	int index;
	bool valid;	
}a[65];

struct Pawn{
	int index;
	char letter[10];
	char colour ;
	int mx;
	int my;
	bool valid;	
}p[33];

void Initialize (){

	a[1].index=1;
	strcpy(a[1].letter,"Rook");
	a[1].colour='B';
	a[1].mx=0;
	a[1].my=0;
	a[1].valid=true;

	a[2].index=2;
	strcpy(a[2].letter,"Knight");
	a[2].colour='w';
	a[2].mx=100;
	a[2].my=0;
	a[2].valid=true;

	a[3].index=3;
	strcpy(a[3].letter,"Bishop");
	a[3].colour='B';
	a[3].mx=200;
	a[3].my=0;
	a[3].valid=true;

    a[4].index=4;
	strcpy(a[4].letter,"Queen");
	a[4].colour='w';
	a[4].mx=300;
	a[4].my=0;
	a[4].valid=true;

	a[5].index=5;
	strcpy(a[5].letter,"King");
	a[5].colour='B';
	a[5].mx=400;
	a[5].my=0;
	a[5].valid=true;

    a[6].index=6;
	strcpy(a[6].letter,"Bishop");
	a[6].colour='w';
	a[6].mx=500;
	a[6].my=0;
	a[6].valid=true;

	a[7].index=7;
	strcpy(a[7].letter,"Knight");
	a[7].colour='B';
	a[7].mx=600;
	a[7].my=0;
	a[7].valid=true;

    a[8].index=8;
	strcpy(a[7].letter,"Rook");
	a[8].colour='w';
	a[8].mx=700;
	a[8].my=0;
	a[8].valid=true;

    a[9].index=9;
	strcpy(a[9].letter,"S");
	a[9].colour='w';
	a[9].mx=0;
	a[9].my=100;
	a[9].valid=true;


    a[10].index=10;
	strcpy(a[10].letter,"S");
	a[10].colour='B';
	a[10].mx=100;
	a[10].my=100;
	a[10].valid=true;

    a[11].index=11;
	strcpy(a[11].letter,"S");
	a[11].colour='w';
	a[11].mx=200;
	a[11].my=100;
	a[11].valid=true;

    a[12].index=12;
	strcpy(a[12].letter,"S");
	a[12].colour='B';
	a[12].mx=300;
	a[12].my=100;
	a[12].valid=true;



        a[13].index=13;
	strcpy(a[13].letter,"S");
	a[13].colour='w';
	a[13].mx=400;
	a[13].my=100;
	a[13].valid=true;


         a[14].index=14;
	strcpy(a[14].letter,"S");
	a[14].colour='B';
	a[14].mx=500;
	a[14].my=100;
	a[14].valid=true;

          a[15].index=15;
	strcpy(a[15].letter,"S");
	a[15].colour='w';
	a[15].mx=600;
	a[15].my=100;
	a[15].valid=true;


         a[16].index=16;
	strcpy(a[16].letter,"S");
	a[16].colour='B';
	a[16].mx=700;
	a[16].my=100;
	a[16].valid=true;

         
        a[17].index=17;
	strcpy(a[17].letter," ");
	a[17].colour='B';
	a[17].mx=00;
	a[17].my=200;
	a[17].valid=true;

        a[18].index=18;
	strcpy(a[18].letter," ");
	a[18].colour='w';
	a[18].mx=100;
	a[18].my=100;
	a[18].valid=true;


        a[19].index=19;
	strcpy(a[19].letter," ");
	a[19].colour='B';
	a[19].mx=200;
	a[19].my=200;
	a[19].valid=true;
     
        a[20].index=20;
	strcpy(a[20].letter," ");
	a[20].colour='w';
	a[20].mx=300;
	a[20].my=200;
	a[20].valid=true;


         a[21].index=21;
	strcpy(a[21].letter," ");
	a[21].colour='B';
	a[21].mx=400;
	a[21].my=200;
	a[21].valid=true;

       a[22].index=22;
	strcpy(a[22].letter," ");
	a[22].colour='w';
	a[22].mx=500;
	a[22].my=200;
	a[22].valid=true;


          a[23].index=23;
	strcpy(a[23].letter," ");
	a[23].colour='B';
	a[23].mx=600;
	a[23].my=200;
	a[23].valid=true;
 
         a[24].index=24;
	strcpy(a[24].letter," ");
	a[24].colour='w';
	a[24].mx=700;
	a[24].my=200;
	a[24].valid=true;


        a[25].index=25;
	strcpy(a[25].letter," ");
	a[25].colour='w';
	a[25].mx=00;
	a[25].my=300;
	a[25].valid=true;

        a[26].index=26;
	strcpy(a[26].letter," ");
	a[26].colour='B';
	a[26].mx=100;
	a[26].my=100;
	a[26].valid=true;


        a[27].index=27;
	strcpy(a[27].letter," ");
	a[27].colour='w';
	a[27].mx=200;
	a[27].my=300;
	a[27].valid=true;
     
        a[28].index=28;
	strcpy(a[28].letter," ");
	a[28].colour='B';
	a[28].mx=300;
	a[28].my=300;
	a[28].valid=true;


         a[29].index=29;
	strcpy(a[29].letter," ");
	a[29].colour='w';
	a[29].mx=400;
	a[29].my=300;
	a[29].valid=true;

       a[30].index=30;
	strcpy(a[30].letter," ");
	a[30].colour='B';
	a[30].mx=500;
	a[30].my=300;
	a[30].valid=true;


          a[31].index=31;
	strcpy(a[31].letter," ");
	a[31].colour='w';
	a[31].mx=600;
	a[31].my=300;
	a[31].valid=true;
 
         a[32].index=32;
	strcpy(a[32].letter," ");
	a[32].colour='B';
	a[32].mx=700;
	a[32].my=300;
	a[32].valid=true;

    a[33].index=33;
	strcpy(a[33].letter," ");
	a[33].colour='B';
	a[33].mx=00;
	a[33].my=400;
	a[33].valid=true;

        a[34].index=34;
	strcpy(a[34].letter," ");
	a[34].colour='w';
	a[34].mx=100;
	a[34].my=100;
	a[34].valid=true;


        a[35].index=35;
	strcpy(a[35].letter," ");
	a[35].colour='B';
	a[35].mx=200;
	a[35].my=400;
	a[35].valid=true;
     
        a[36].index=36;
	strcpy(a[36].letter," ");
	a[36].colour='w';
	a[36].mx=300;
	a[36].my=400;
	a[36].valid=true;


         a[37].index=37;
	strcpy(a[37].letter," ");
	a[37].colour='B';
	a[37].mx=400;
	a[37].my=400;
	a[37].valid=true;

       a[38].index=38;
	strcpy(a[38].letter," ");
	a[38].colour='w';
	a[38].mx=500;
	a[38].my=400;
	a[38].valid=true;


          a[39].index=39;
	strcpy(a[39].letter," " );
	a[39].colour='B';
	a[39].mx=600;
	a[39].my=400;
	a[39].valid=true;
 
         a[40].index=40;
	strcpy(a[40].letter," ");
	a[40].colour='w';
	a[40].mx=700;
	a[40].my=400;
	a[40].valid=true;




        a[41].index=41;
	strcpy(a[41].letter," ");
	a[41].colour='w';
	a[41].mx=0;
	a[41].my=500;
	a[41].valid=true;

        a[42].index=42;
	strcpy(a[42].letter," ");
	a[42].colour='B';
	a[42].mx=100;
	a[42].my=500;
	a[42].valid=true;


        a[43].index=43;
	strcpy(a[43].letter," ");
	a[43].colour='w';
	a[43].mx=200;
	a[43].my=500;
	a[43].valid=true;
     
        a[44].index=44;
	strcpy(a[44].letter," ");
	a[44].colour='B';
	a[44].mx=300;
	a[44].my=500;
	a[44].valid=true;


         a[45].index=45;
	strcpy(a[45].letter," ");
	a[45].colour='w';
	a[45].mx=400;
	a[45].my=500;
	a[45].valid=true;

       a[46].index=46;
	strcpy(a[46].letter," ");
	a[46].colour='B';
	a[46].mx=500;
	a[46].my=500;
	a[46].valid=true;


          a[47].index=47;
	strcpy(a[47].letter," ");
	a[47].colour='w';
	a[47].mx=600;
	a[47].my=500;
	a[47].valid=true;
 
         a[48].index=48;
	strcpy(a[48].letter," ");
	a[48].colour='B';
	a[48].mx=700;
	a[48].my=500;
	a[48].valid=true; 

      a[49].index=49;
	strcpy(a[49].letter,"S");
	a[49].colour='B';
	a[49].mx=0;
	a[49].my=600;
	a[49].valid=true;

          a[50].index=50;
	strcpy(a[50].letter,"S");
	a[50].colour='w';
	a[50].mx=100;
	a[50].my=600;
	a[50].valid=true;

         a[51].index=51;
	strcpy(a[51].letter,"S");
	a[51].colour='B';
	a[51].mx=200;
	a[51].my=600;
	a[51].valid=true;

        a[52].index=52;
	strcpy(a[52].letter,"S");
	a[52].colour='w';
	a[52].mx=300;
	a[52].my=600;
	a[52].valid=true;



        a[53].index=53;
	strcpy(a[53].letter,"S");
	a[53].colour='B';
	a[53].mx=400;
	a[53].my=600;
	a[53].valid=true;


         a[54].index=54;
	strcpy(a[54].letter,"S");
	a[54].colour='w';
	a[54].mx=500;
	a[54].my=600;
	a[54].valid=true;

          a[55].index=55;
	strcpy(a[55].letter,"S");
	a[55].colour='B';
	a[55].mx=600;
	a[55].my=600;
	a[55].valid=true;

         a[56].index=56;
	strcpy(a[56].letter,"S");
	a[56].colour='w';
	a[56].mx=700;
	a[56].my=600;
	a[56].valid=true;
         
    
    a[57].index=57;
	strcpy(a[57].letter,"Rook");
	a[57].colour='w';
	a[57].mx=0;
	a[57].my=700;
	a[57].valid=true;

	a[58].index=58;
	strcpy(a[58].letter,"Knight");
	a[58].colour='B';
	a[58].mx=100;
	a[58].my=700;
	a[58].valid=true;

	a[59].index=59;
	strcpy(a[59].letter,"Bishop");
	a[59].colour='w';
	a[59].mx=200;
	a[59].my=700;
	a[59].valid=true;

    a[60].index=60;
	strcpy(a[60].letter,"Queen");
	a[60].colour='B';
	a[60].mx=300;
	a[60].my=700;
	a[60].valid=true;

	a[61].index=61;
	strcpy(a[61].letter,"King");
	a[61].colour='w';
	a[61].mx=400;
	a[61].my=700;
	a[61].valid=true;

    a[62].index=62;
	strcpy(a[62].letter,"Bishop");
	a[62].colour='B';
	a[62].mx=500;
	a[62].my=700;
	a[62].valid=true;

	a[63].index=63;
	strcpy(a[63].letter,"Knight");
	a[63].colour='w';
	a[63].mx=600;
	a[63].my=700;
	a[63].valid=true;

    a[64].index=64;
	strcpy(a[64].letter,"Rook");
	a[64].colour='B';
	a[64].mx=700;
	a[64].my=700;
	a[64].valid=true;


	//For Pawn

	p[1].index=1;
    strcpy(p[1].letter,"Rook");
    p[1].colour='w';
	p[1].mx=30;
	p[1].my=30;
	p[1].valid=true;

	p[2].index=2;
    strcpy(p[2].letter,"Knight");
    p[2].colour='w';
	p[2].mx=130;
	p[2].my=30;
	p[2].valid=true; 


    p[3].index=3;
    strcpy(p[3].letter,"Bishop");
    p[3].colour='w';
	p[3].mx=230;
	p[3].my=30;
	p[3].valid=true; 


    p[4].index=4;
    strcpy(p[3].letter,"Queen");
    p[4].colour='w';
	p[4].mx=330;
	p[4].my=30;
	p[4].valid=true; 

    p[5].index=5;
    strcpy(p[5].letter,"King");
    p[5].colour='w';
	p[5].mx=430;
	p[5].my=30;
	p[5].valid=true; 


    p[6].index=6;
    strcpy(p[6].letter,"Bishop");
    p[6].colour='w';
	p[6].mx=530;
	p[6].my=30;
	p[6].valid=true; 



    p[7].index=7;
    strcpy(p[7].letter,"Knight");
    p[7].colour='w';
	p[7].mx=630;
	p[7].my=30;
	p[7].valid=true; 

    p[8].index=8;
    strcpy(p[8].letter,"Rook");
    p[8].colour='w';
	p[8].mx=730;
	p[8].my=30;
	p[8].valid=true;


   for(j=9,m_x=30;j<=17;j++,m_x+=100){
    p[j].index= j;
	strcpy(p[j].letter,"S");	        
	p[j].colour='w';
	p[j].mx=m_x;
	p[j].my=130;
	p[j].valid=true;

   }



   for(k=49,m_x=30;k<=56;k++,m_x+=100){
	p[k].index=k;
	strcpy(p[k].letter,"S");	        
	p[k].colour='B';
	p[k].mx=m_x;
	p[k].my=630;
	p[k].valid=true;

   }


   p[57].index=57;
   strcpy(p[57].letter,"Rook");
   p[57].colour='B';
   p[57].mx=30;
   p[25].my=730;
   p[25].valid=true;

    p[58].index=58;
    strcpy(p[58].letter,"Knight");
    p[58].colour='B';
	p[58].mx=130;
	p[58].my=730;
	p[58].valid=true; 


    p[59].index=59;
    strcpy(p[59].letter,"Bishop");
    p[59].colour='B';
	p[59].mx=230;
	p[59].my=730;
	p[59].valid=true; 


    p[60].index=60;
    strcpy(p[60].letter,"Queen");
    p[60].colour='B';
	p[60].mx=330;
	p[60].my=730;
	p[60].valid=true; 

    p[61].index=61;
    strcpy(p[61].letter,"King");
    p[62].colour='B';
	p[62].mx=430;
	p[62].my=730;
	p[62].valid=true; 


    p[61].index=61;
    strcpy(p[61].letter,"Bishop");
    p[61].colour='B';
	p[61].mx=530;
	p[61].my=730;
	p[61].valid=true; 



    p[63].index=63;
    strcpy(p[63].letter,"Knight");
    p[63].colour='B';
	p[63].mx=630;
	p[63].my=730;
	p[63].valid=true; 

    p[64].index=64;
    strcpy(p[64].letter,"Rook");
    p[64].colour='B';
	p[64].mx=730;
	p[64].my=730;
	p[64].valid=true;

}

  




void Menu1(int mx , int my){


	if(mx>=0&&mx<=100&&my>=0&&my<=100)
		n=1;
	else if(mx>=100&&mx<=200&&my>=0&&my<=100)
		n=2;
	else if(mx>=200&&mx<=300&&my>=0&&my<=100)
		n=3;
    else if(mx>=300&&mx<=400&&my>=0&&my<=100)
		n=4;
	else if(mx>=400&&mx<=500&&my>=0&&my<=100)
		n=5;
	else if(mx>=500&&mx<=600&&my>=0&&my<=100)
		n=6;
    else if(mx>=600&&mx<=700&&my>=0&&my<=100)
		n=7;
	else if(mx>=700&&mx<=800&&my>=0&&my<=100)
		n=8;
	

    else if(mx>=0&&mx<=100&&my>=100&&my<=200)
		n=9;
	else if(mx>=100&&mx<=200&&my>=100&&my<=200)
		n=10;
	else if(mx>=200&&mx<=300&&my>=100&&my<=200)
		n=11;
    else if(mx>=300&&mx<=400&&my>=100&&my<=200)
		n=12;
	else if(mx>=400&&mx<=500&&my>=100&&my<=200)
		n=13;
	else if(mx>=500&&mx<=600&&my>=100&&my<=200)
		n=14;
    else if(mx>=600&&mx<=700&&my>=100&&my<=200)
		n=15;
	else if(mx>=700&&mx<=800&&my>=100&&my<=200)
		n=16;


    else if(mx>=0&&mx<=100&&my>=200&&my<=300)
		n=17;
	else if(mx>=100&&mx<=200&&my>=200&&my<=300)
		n=18;
	else if(mx>=200&&mx<=300&&my>=200&&my<=300)
		n=19;
    else if(mx>=300&&mx<=400&&my>=200&&my<=300)
		n=20;
	else if(mx>=400&&mx<=500&&my>=200&&my<=300)
		n=21;
	else if(mx>=500&&mx<=600&&my>=200&&my<=300)
		n=22;
    else if(mx>=600&&mx<=700&&my>=200&&my<=300)
		n=23;
	else if(mx>=700&&mx<=800&&my>=200&&my<=300)
		n=24;



    else if(mx>=0&&mx<=100&&my>=300&&my<=400)
		n=25;
	else if(mx>=100&&mx<=200&&my>=300&&my<=400)
		n=26;
	else if(mx>=200&&mx<=300&&my>=300&&my<=400)
		n=27;
    else if(mx>=300&&mx<=400&&my>=300&&my<=400)
		n=28;
	else if(mx>=400&&mx<=500&&my>=300&&my<=400)
		n=29;
	else if(mx>=500&&mx<=600&&my>=300&&my<=400)
		n=30;
    else if(mx>=600&&mx<=700&&my>=300&&my<=400)
		n=31;
	else if(mx>=700&&mx<=800&&my>=300&&my<=400)
		n=32;


    else if(mx>=0&&mx<=100&&my>=400&&my<=500)
		n=33;
	else if(mx>=100&&mx<=200&&my>=400&&my<=500)
		n=34;
	else if(mx>=200&&mx<=300&&my>=400&&my<=500)
		n=35;
    else if(mx>=300&&mx<=400&&my>=400&&my<=500)
		n=36;
	else if(mx>=400&&mx<=500&&my>=400&&my<=500)
		n=37;
	else if(mx>=500&&mx<=600&&my>=400&&my<=500)
		n=38;
    else if(mx>=600&&mx<=700&&my>=400&&my<=500)
		n=39;
	else if(mx>=700&&mx<=800&&my>=400&&my<=500)
		n=40;



    else if(mx>=0&&mx<=100&&my>=500&&my<=600)
		n=41;
	else if(mx>=100&&mx<=200&&my>=500&&my<=600)
		n=42;
	else if(mx>=200&&mx<=300&&my>=500&&my<=600)
		n=43;
    else if(mx>=300&&mx<=400&&my>=500&&my<=600)
		n=44;
	else if(mx>=400&&mx<=500&&my>=500&&my<=600)
		n=45;
	else if(mx>=500&&mx<=600&&my>=500&&my<=600)
		n=46;
    else if(mx>=600&&mx<=700&&my>=500&&my<=600)
		n=47;
	else if(mx>=700&&mx<=800&&my>=500&&my<=600)
		n=48;


    else if(mx>=0&&mx<=100&&my>=600&&my<=700)
		n=49;
	else if(mx>=100&&mx<=200&&my>=600&&my<=700)
		n=50;
	else if(mx>=200&&mx<=300&&my>=600&&my<=700)
		n=51;
    else if(mx>=300&&mx<=400&&my>=600&&my<=700)
		n=52;
	else if(mx>=400&&mx<=500&&my>=600&&my<=700)
		n=53;
	else if(mx>=500&&mx<=600&&my>=600&&my<=700)
		n=54;
    else if(mx>=600&&mx<=700&&my>=600&&my<=700)
		n=55;
	else if(mx>=700&&mx<=800&&my>=600&&my<=700)
		n=56;


    else if(mx>=0&&mx<=100&&my>=700&&my<=800)
		n=57;
	else if(mx>=100&&mx<=200&&my>=700&&my<=800)
		n=58;
	else if(mx>=200&&mx<=300&&my>=700&&my<=800)
		n=59;
    else if(mx>=300&&mx<=400&&my>=700&&my<=800)
		n=60;
	else if(mx>=400&&mx<=500&&my>=700&&my<=800)
		n=61;
	else if(mx>=500&&mx<=600&&my>=700&&my<=800)
		n=62;
    else if(mx>=600&&mx<=700&&my>=700&&my<=800)
		n=63;
	else if(mx>=700&&mx<=800&&my>=700&&my<=800)
		n=64;






}

/*
void Menu2(){

	if(mx>=0&&mx<=100&&my>=0&&my<=100)
		m=1;
	else if(mx>=100&&mx<=200&&my>=0&&my<=100)
		m=2;
	else if(mx>=200&&mx<=300&&my>=0&&my<=100)
		m=3;
    else if(mx>=300&&mx<=400&&my>=0&&my<=100)
		m=4;
	else if(mx>=400&&mx<=500&&my>=0&&my<=100)
		m=5;
	else if(mx>=500&&mx<=600&&my>=0&&my<=100)
		m=6;
    else if(mx>=600&&mx<=700&&my>=0&&my<=100)
		m=7;
	else if(mx>=700&&mx<=800&&my>=0&&my<=100)
		m=8;
	

    else if(mx>=0&&mx<=100&&my>=100&&my<=200)
		m=9;
	else if(mx>=100&&mx<=200&&my>=100&&my<=200)
		m=10;
	else if(mx>=200&&mx<=300&&my>=100&&my<=200)
		m=11;
    else if(mx>=300&&mx<=400&&my>=100&&my<=200)
		m=12;
	else if(mx>=400&&mx<=500&&my>=100&&my<=200)
		m=13;
	else if(mx>=500&&mx<=600&&my>=100&&my<=200)
		m=14;
    else if(mx>=600&&mx<=700&&my>=100&&my<=200)
		m=15;
	else if(mx>=700&&mx<=800&&my>=100&&my<=200)
		m=16;


    else if(mx>=0&&mx<=100&&my>=200&&my<=300)
		m=17;
	else if(mx>=100&&mx<=200&&my>=200&&my<=300)
		m=18;
	else if(mx>=200&&mx<=300&&my>=200&&my<=300)
		m=19;
    else if(mx>=300&&mx<=400&&my>=200&&my<=300)
		m=20;
	else if(mx>=400&&mx<=500&&my>=200&&my<=300)
		m=21;
	else if(mx>=500&&mx<=600&&my>=200&&my<=300)
		m=22;
    else if(mx>=600&&mx<=700&&my>=200&&my<=300)
		m=23;
	else if(mx>=700&&mx<=800&&my>=200&&my<=300)
		m=24;



    else if(mx>=0&&mx<=100&&my>=300&&my<=400)
		m=25;
	else if(mx>=100&&mx<=200&&my>=300&&my<=400)
		m=26;
	else if(mx>=200&&mx<=300&&my>=300&&my<=400)
		m=27;
    else if(mx>=300&&mx<=400&&my>=300&&my<=400)
		m=28;
	else if(mx>=400&&mx<=500&&my>=300&&my<=400)
		m=29;
	else if(mx>=500&&mx<=600&&my>=300&&my<=400)
	    m=30;
    else if(mx>=600&&mx<=700&&my>=300&&my<=400)
		m=31;
	else if(mx>=700&&mx<=800&&my>=300&&my<=400)
		m=32;


    else if(mx>=0&&mx<=100&&my>=400&&my<=500)
		m=33;
	else if(mx>=100&&mx<=200&&my>=400&&my<=500)
		m=34;
	else if(mx>=200&&mx<=300&&my>=400&&my<=500)
		m=35;
    else if(mx>=300&&mx<=400&&my>=400&&my<=500)
		m=36;
	else if(mx>=400&&mx<=500&&my>=400&&my<=500)
		m=37;
	else if(mx>=500&&mx<=600&&my>=400&&my<=500)
		m=38;
    else if(mx>=600&&mx<=700&&my>=400&&my<=500)
		m=39;
	else if(mx>=700&&mx<=800&&my>=400&&my<=500)
		m=40;



    else if(mx>=0&&mx<=100&&my>=500&&my<=600)
		m=41;
	else if(mx>=100&&mx<=200&&my>=500&&my<=600)
		m=42;
	else if(mx>=200&&mx<=300&&my>=500&&my<=600)
		m=43;
    else if(mx>=300&&mx<=400&&my>=500&&my<=600)
		m=44;
	else if(mx>=400&&mx<=500&&my>=500&&my<=600)
		m=45;
	else if(mx>=500&&mx<=600&&my>=500&&my<=600)
		m=46;
    else if(mx>=600&&mx<=700&&my>=500&&my<=600)
		m=47;
	else if(mx>=700&&mx<=800&&my>=500&&my<=600)
		m=48;


    else if(mx>=0&&mx<=100&&my>=600&&my<=700)
		m=49;
	else if(mx>=100&&mx<=200&&my>=600&&my<=700)
		m=50;
	else if(mx>=200&&mx<=300&&my>=600&&my<=700)
		m=51;
    else if(mx>=300&&mx<=400&&my>=600&&my<=700)
		m=52;
	else if(mx>=400&&mx<=500&&my>=600&&my<=700)
		m=53;
	else if(mx>=500&&mx<=600&&my>=600&&my<=700)
		m=54;
    else if(mx>=600&&mx<=700&&my>=600&&my<=700)
		m=55;
	else if(mx>=700&&mx<=800&&my>=600&&my<=700)
		m=56;


    else if(mx>=0&&mx<=100&&my>=700&&my<=800)
		m=57;
	else if(mx>=100&&mx<=200&&my>=700&&my<=800)
		m=58;
	else if(mx>=200&&mx<=300&&my>=700&&my<=800)
		m=59;
    else if(mx>=300&&mx<=400&&my>=700&&my<=800)
		m=60;
	else if(mx>=400&&mx<=500&&my>=700&&my<=800)
		m=61;
	else if(mx>=500&&mx<=600&&my>=700&&my<=800)
		m=62;
    else if(mx>=600&&mx<=700&&my>=700&&my<=800)
		m=63;
	else if(mx>=700&&mx<=800&&my>=700&&my<=800)
		m=64;


	 
}
*/
	


void Board (){


	//1
	iSetColor(100,0,0);
	iFilledRectangle(0,0,100,100);
	iRectangle(0,0,100,100);

	iSetColor(500,500,500);
	iText(30, 30, "R00k", GLUT_BITMAP_TIMES_ROMAN_24);

		
    //2
	iSetColor(500,0,0);
	iFilledRectangle(100,0,100,100);
	iRectangle(100,0,100,100);

	iSetColor(500,500,500);
	iText(130, 30, "Knight", GLUT_BITMAP_TIMES_ROMAN_24);

	//3
	iSetColor(100,0,0);
	iFilledRectangle(200,0,100,100);
	iRectangle(200,0,100,100);

	iSetColor(500,500,500);
	iText(230, 30, "Bishop", GLUT_BITMAP_TIMES_ROMAN_24);

	//4
	iSetColor(500,0,0);
	iFilledRectangle(300,0,100,100);
	iRectangle(300,0,100,100);

	iSetColor(500,500,500);
	iText(330, 30, "Queen", GLUT_BITMAP_TIMES_ROMAN_24);

	//5
	iSetColor(100,0,0);
	iFilledRectangle(400,0,100,100);
	iRectangle(4000,0,100,100);

	iSetColor(500,500,500);
	iText(430, 30, "King", GLUT_BITMAP_TIMES_ROMAN_24);

	//6
	iSetColor(500,0,0);
	iFilledRectangle(500,0,100,100);
	iRectangle(500,0,100,100);

	iSetColor(500,500,500);
	iText(530, 30, "Bishop", GLUT_BITMAP_TIMES_ROMAN_24);

	//7
	iSetColor(100,0,0);
	iFilledRectangle(600,0,100,100);
	iRectangle(600,0,100,100);

	iSetColor(500,500,500);
	iText(630, 30, "knight", GLUT_BITMAP_TIMES_ROMAN_24);

    //8
	iSetColor(500,0,0);
	iFilledRectangle(700,0,100,100);
	iRectangle(700,0,100,100);

	iSetColor(500,500,500);
	iText(730, 30, "R00k", GLUT_BITMAP_TIMES_ROMAN_24);

	//9
	iSetColor(500,0,0);
	iFilledRectangle(0,100,100,100);
	iRectangle(0,100,100,100);

	iSetColor(500,500,500);
	iText(50, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//10
	iSetColor(100,0,0);
	iFilledRectangle(100,100,100,100);
	iRectangle(100,100,100,100);

	iSetColor(500,500,500);
	iText(150, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//11
	iSetColor(500,0,0);
	iFilledRectangle(200,100,100,100);
	iRectangle(200,100,100,100);

	iSetColor(500,500,500);
	iText(250, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//12
	iSetColor(100,0,0);
	iFilledRectangle(300,100,100,100);
	iRectangle(300,100,100,100);
	
	iSetColor(500,500,500);
	iText(350, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//13
	iSetColor(500,0,0);
	iFilledRectangle(400,100,100,100);
	iRectangle(400,100,100,100);

	iSetColor(500,500,500);
	iText(450, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//14
	iSetColor(100,0,0);
	iFilledRectangle(500,100,100,100);
	iRectangle(500,100,100,100);

	iSetColor(500,500,500);
	iText(550, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//15
	iSetColor(500,0,0);
	iFilledRectangle(600,100,100,100);
	iRectangle(600,100,100,100);

	iSetColor(500,500,500);
	iText(650, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//16
	iSetColor(100,0,0);
	iFilledRectangle(700,100,100,100);
	iRectangle(700,100,100,100);

	iSetColor(500,500,500);
	iText(750, 150, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//17
	iSetColor(100,0,0);
	iFilledRectangle(0,200,100,100);
	iRectangle(0,200,100,100);
	//18
	iSetColor(500,0,0);
	iFilledRectangle(100,200,100,100);
	iRectangle(100,200,100,100);
	//19
	iSetColor(100,0,0);
	iFilledRectangle(200,200,100,100);
	iRectangle(200,200,100,100);
	//20
    iSetColor(500,0,0);
	iFilledRectangle(300,200,100,100);
	iRectangle(300,200,100,100);
	//21
	iSetColor(100,0,0);
	iFilledRectangle(400,200,100,100);
	iRectangle(400,200,100,100);
	//22
	iSetColor(500,0,0);
	iFilledRectangle(500,200,100,100);
	iRectangle(500,200,100,100);
	//23
    iSetColor(100,0,0);
	iFilledRectangle(600,200,100,100);
	iRectangle(600,200,100,100);
	//24
	iSetColor(500,0,0);
	iFilledRectangle(700,200,100,100);
	iRectangle(700,200,100,100);
    //25
	iSetColor(500,0,0);
	iFilledRectangle(0,300,100,100);
	iRectangle(0,300,100,100);
	//26
	iSetColor(100,0,0);
	iFilledRectangle(100,300,100,100);
	iRectangle(100,300,100,100);
	//27
	iSetColor(500,0,0);
	iFilledRectangle(200,300,100,100);
	iRectangle(200,300,100,100);
	//28
	iSetColor(100,0,0);
	iFilledRectangle(300,300,100,100);
	iRectangle(300,300,100,100);
	//29
	iSetColor(500,0,0);
	iFilledRectangle(400,300,100,100);
	iRectangle(400,300,100,100);
	//30
	iSetColor(100,0,0);
	iFilledRectangle(500,300,100,100);
	iRectangle(500,300,100,100);
	//31
	iSetColor(500,0,0);
	iFilledRectangle(600,300,100,100);
	iRectangle(600,300,100,100);
	//32
	iSetColor(100,0,0);
	iFilledRectangle(700,300,100,100);
	iRectangle(700,300,100,100);
	//33
	iSetColor(100,0,0);
	iFilledRectangle(0,400,100,100);
	iRectangle(0,400,100,100);
	//34
	iSetColor(500,0,0);
	iFilledRectangle(100,400,100,100);
	iRectangle(100,400,100,100);
	//35
	iSetColor(100,0,0);
	iFilledRectangle(200,400,100,100);
	iRectangle(200,400,100,100);
	//36
	iSetColor(500,0,0);
	iFilledRectangle(300,400,100,100);
	iRectangle(300,400,100,100);
	//37
	iSetColor(100,0,0);
	iFilledRectangle(400,400,100,100);
	iRectangle(400,400,100,100);
	//38
	iSetColor(500,0,0);
	iFilledRectangle(500,400,100,100);
	iRectangle(500,400,100,100);
	//39
	iSetColor(100,0,0);
	iFilledRectangle(600,400,100,100);
	iRectangle(600,400,100,100);
	//40
	iSetColor(500,0,0);
	iFilledRectangle(700,400,100,100);
	iRectangle(700,400,100,100);
	//41
	iSetColor(500,0,0);
	iFilledRectangle(0,500,100,100);
	iRectangle(0,500,100,100);
	//42
	iSetColor(100,0,0);
	iFilledRectangle(100,500,100,100);
	iRectangle(100,500,100,100);
	//43
	iSetColor(500,0,0);
	iFilledRectangle(200,500,100,100);
	iRectangle(200,500,100,100);
	//44
	iSetColor(100,0,0);
	iFilledRectangle(300,500,100,100);
	iRectangle(300,500,100,100);
	//45
	iSetColor(500,0,0);
	iFilledRectangle(400,500,100,100);
	iRectangle(400,500,100,100);
	//46
	iSetColor(100,0,0);
	iFilledRectangle(500,500,100,100);
	iRectangle(500,500,100,100);
	//47
	iSetColor(500,0,0);
	iFilledRectangle(600,500,100,100);
	iRectangle(600,500,100,100);
	//48
	iSetColor(100,0,0);
	iFilledRectangle(700,500,100,100);
	iRectangle(700,500,100,100);
	//49
	iSetColor(100,0,0);
	iFilledRectangle(0,600,100,100);
	iRectangle(0,500,600,100);

	iSetColor(0,0,500);
	iText(50, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//50
	iSetColor(500,0,0);
	iFilledRectangle(100,600,100,100);
	iRectangle(100,600,100,100);

	iSetColor(0,0,500);
	iText(150, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//51
	iSetColor(100,0,0);
	iFilledRectangle(200,600,100,100);
	iRectangle(200,600,100,100);

	iSetColor(0,0,500);
	iText(250, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//52
	iSetColor(500,0,0);
	iFilledRectangle(300,600,100,100);
	iRectangle(300,600,100,100);

	iSetColor(0,0,500);
	iText(350, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//53
	iSetColor(100,0,0);
	iFilledRectangle(400,600,100,100);
	iRectangle(400,600,100,100);

	iSetColor(0,0,500);
	iText(450, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//54
	iSetColor(500,0,0);
	iFilledRectangle(500,600,100,100);
	iRectangle(500,600,100,100);

	iSetColor(0,0,500);
	iText(550, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//55
	iSetColor(100,0,0);
	iFilledRectangle(600,600,100,100);
	iRectangle(600,600,100,100);

	iSetColor(0,0,500);
	iText(650, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//56
	iSetColor(500,0,0);
	iFilledRectangle(700,600,100,100);
	iRectangle(700,600,100,100);

	iSetColor(0,0,500);
	iText(750, 650, "S", GLUT_BITMAP_TIMES_ROMAN_24);

	//57
	iSetColor(500,0,0);
	iFilledRectangle(0,700,100,100);
	iRectangle(0,700,100,100);

	iSetColor(0,0,500);
	iText(30, 730, "R00k", GLUT_BITMAP_TIMES_ROMAN_24);

	//58
	iSetColor(100,0,0);
	iFilledRectangle(100,700,100,100);
	iRectangle(100,700,100,100);

	iSetColor(0,0,500);
	iText(130, 730, "Knight", GLUT_BITMAP_TIMES_ROMAN_24);

	//59
	iSetColor(500,0,0);
	iFilledRectangle(200,700,100,100);
	iRectangle(200,700,100,100);

	iSetColor(0,0,500);
	iText(230, 730, "Bishop", GLUT_BITMAP_TIMES_ROMAN_24);

	//60
	iSetColor(100,0,0);
	iFilledRectangle(300,700,100,100);
	iRectangle(300,700,100,100);
	
	iSetColor(0,0,500);
	iText(330, 730, "Queen", GLUT_BITMAP_TIMES_ROMAN_24);

	//61
	iSetColor(500,0,0);
	iFilledRectangle(400,700,100,100);
	iRectangle(400,700,100,100);

	iSetColor(0,0,500);
	iText(430, 730, "King", GLUT_BITMAP_TIMES_ROMAN_24);

	//62
	iSetColor(100,0,0);
	iFilledRectangle(500,700,100,100);
	iRectangle(500,700,100,100);

	iSetColor(0,0,500);
	iText(530, 730, "Bishop", GLUT_BITMAP_TIMES_ROMAN_24);

	//63
	iSetColor(500,0,0);
	iFilledRectangle(600,700,100,100);
	iRectangle(600,700,100,100);

	iSetColor(0,0,500);
	iText(630, 730, "Knight", GLUT_BITMAP_TIMES_ROMAN_24); 

	//64
	iSetColor(100,0,0);
	iFilledRectangle(700,700,100,100);
	iRectangle(700,700,100,100);
	
	iSetColor(0,0,500);
	iText(730, 730, "R00k", GLUT_BITMAP_TIMES_ROMAN_24); 



}







void iDraw()
{
	Initialize();

	iClear();
		
	Board ();

	if(a[n].colour=='w'){

		iSetColor(200,0,0);
	    iFilledRectangle(a[n].mx,a[n].my,100,100);
	    iRectangle(a[n].mx,a[n].mx,100,100);

		iSetColor(500,500,500);
	    iText(a[n].mx+30,a[n].my+130, a[n].letter, GLUT_BITMAP_TIMES_ROMAN_24);
	}

	else if(a[n].colour=='B'){

		iSetColor(50,0,0);
	    iFilledRectangle(a[n].mx,a[n].my,100,100);
	    iRectangle(a[n].mx,a[n].mx,100,100);

		iSetColor(0,0,500);
	    iText(a[n].mx+30,a[n].my+130, a[n].letter, GLUT_BITMAP_TIMES_ROMAN_24);
	}


	if(a[m].colour=='w'){

		iSetColor(500,0,0);
	    iFilledRectangle(a[m].mx,a[m].my,100,100);
	    iRectangle(a[m].mx,a[m].mx,100,100);

		iSetColor(500,500,500);
	    iText(a[m].mx+30,a[m].my+130, a[n].letter, GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(500,0,0);
	    iFilledRectangle(a[n].mx,a[n].my,100,100);
	    iRectangle(a[n].mx,a[n].mx,100,100);
	}

	else if(a[m].colour=='B'){

		iSetColor(100,0,0);
	    iFilledRectangle(a[m].mx,a[m].my,100,100);
	    iRectangle(a[m].mx,a[m].mx,100,100);

		iSetColor(0,0,500);
	    iText(a[m].mx+30,a[m].my+130, a[n].letter, GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(100,0,0);
	    iFilledRectangle(a[n].mx,a[n].my,100,100);
	    iRectangle(a[n].mx,a[n].mx,100,100);
	}





}

void iMouseMove(int mx, int my)
{ 
	

}
	

void iMouse(int button, int state, int mx, int my)
{
	

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		
  
	if(i==1){

	Menu1(mx , my); // before Menu1(); 
	// ********************************************************************mx and my are not global variables.****************************** changed here!
   // i++;

	}



/*	else if(i==2){

		  Menu2();
          i--;
	}
	*/
	
	
	 
		
	
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}

 }

}


/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	
	
}
	 
	



void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		
	}
	
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	
}

int main()
{
	//place your own initialization codes here.
	iInitialize(800, 800, "demooo");
	return 0;
}
