#ifndef MENU_H
#define MENU_H

#include "general.h"

void draw_text(int f,int g,char* text)
{
	int i=0;
	glRasterPos2i(f,g);
	while(text[i]!=NULL)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,text[i]);
		//GLUT_BITMAP_8_BY_13 or 9_BY_15
		//GLUT_BITMAP_TIMES_ROMAN_10 or 24
		//GLUT_BITMAP_HELVETICA_10 or 12 or 18
		f=f+glutBitmapWidth(GLUT_BITMAP_TIMES_ROMAN_24,text[i++]);
	}
	//glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'.');
}
void draw_text_h(int f,int g,char* text)
{
	int i=0;
	glRasterPos2i(f,g);
	while(text[i]!=NULL)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,text[i]);
		//GLUT_BITMAP_8_BY_13 or 9_BY_15
		//GLUT_BITMAP_TIMES_ROMAN_10 or 24
		//GLUT_BITMAP_HELVETICA_10 or 12 or 18
		f=f+glutBitmapWidth(GLUT_BITMAP_HELVETICA_12,text[i++]);
	}
	//glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'.');
}

void draw_bar(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)//1000 by 40
{
	float a,b,c;
	float d,e,f;
	float g,h,i;
	float j,k,l;

	glBegin(GL_QUADS);
	
	a=color_cycle_one[(int)q%20];b=color_cycle_two[(int)q%20];c=color_cycle_three[(int)q%20];	
	glColor3f(a,b,c);
	glVertex2f(x1,y1);
	
	d=color_cycle_three[(int)q%20];e=color_cycle_four[(int)q%20];f=color_cycle_one[(int)q%20];
	glColor3f(d,e,f);
	glVertex2f(x2,y2);	
	
	g=color_cycle_one[(int)q%20];h=color_cycle_two[(int)q%20];i=color_cycle_three[(int)q%20];
	glColor3f(g,h,i);
	glVertex2f(x3,y3);
	
	j=color_cycle_three[(int)q%20];k=color_cycle_four[(int)q%20];l=color_cycle_one[(int)q%20];
	glColor3f(j,k,l);
	glVertex2f(x4,y4);
	
	glEnd();
}

void starting()
{
	draw_bar(0,0,0,0,0,0,0,0);
	draw_text_h(350,150,"p r e s s     a n y     k e y     t o     c o n t i n u e");
	/*starting code here*/
	printf("%d ",p);
}
void main_menu()/* DONE */
{
	glClearColor(0,0,0,0);
	if(BAR==1)
		draw_bar(0,700-460,1000,700-460,1000,700-460+40,0,700-460+40);
	else if(BAR==2)
		draw_bar(0,700-500,1000,700-500,1000,700-500+40,0,700-500+40);
	else if(BAR==3)
		draw_bar(0,700-540,1000,700-540,1000,700-540+40,0,700-540+40);
	else if(BAR==4)
		draw_bar(0,700-580,1000,700-580,1000,700-580+40,0,700-580+40);

	blue();

	draw_text(400,250,"START NEW GAME");
	draw_text(450,210,"OPTIONS");
	draw_text(425,170,"HIGH SCORES");
	draw_text(475,130,"EXIT");	
}

void options()/* DONE */
{
	if(OP_BAR==1)
		draw_bar(0,700-310,1000,700-310,1000,700-310+40,0,700-310+40);
	else if(OP_BAR==2)
		draw_bar(0,700-350,1000,700-350,1000,700-350+40,0,700-350+40);
	else if(OP_BAR==4)
		draw_bar(0,700-610,1000,700-610,1000,700-610+40,0,700-610+40);

	blue();
	draw_text(200,400,"Difficulty");draw_text(500,400,":");

	if(N==0){draw_text(600,400,"Easy");}
	else if(N==1){draw_text(585,400,"Medium");}
	else if(N==2){draw_text(600,400,"Hard");}

	
	draw_text(200,360,"Game Mode");draw_text(500,360,":");

	if(MODE==0)draw_text(590,360,"Normal");
	else if(MODE==1)draw_text(570,360,"Challenging");
	else if(MODE==2)draw_text(585,360,"Collector");

	if(MODE==2)
	{
		if(OP_BAR==3)
			draw_bar(0,700-390,1000,700-390,1000,700-390+40,0,700-390+40);

		blue();
		draw_text(200,320,"Collection Type");draw_text(500,320,":");
		
		if(TYPE==0)draw_text(600,320,"Text");
		else if(TYPE==1)draw_text(590,320,"Symbol");
	}
	draw_text(600,100,"Back");
}

void high_score()
{
	struct record
	{
		char name[21];
		int score;
	};
	record r;
	FILE* fp=fopen("c:\\highscore.txt","r");
	int x=50;
	orange();
	while(!feof(fp))
	{
		fscanf(fp,"%s %d",r.name,&r.score);
		draw_text(200,400-x,r.name);
		char s[21];
		convert(r.score,s,'s');
		draw_text(400,400-x,s);
		x=x+25;
	}
	fclose(fp);
	red();
	draw_text(200,400,"NAME");
	draw_text(400,400,"SCORE");
	
	if(H_BAR==1)
		draw_bar(0,700-610,1000,700-610,1000,700-610+40,0,700-610+40);
	blue();
	draw_text(600,100,"Back");
	
}

void game_over()
{
	red();
	draw_text(430,350,"GAME OVER");
	LIFE=5;
	SCORE=0;
	N=0;
	S=1;
	LIMIT_1=100;
	LIMIT_2=350;
	LIMIT_3=400;
	LIMIT_4=450;
	LIMIT_5=500;
	TRY=3;
}

#endif