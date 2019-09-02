#ifndef GENERAL_H
#define GENERAL_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <gl/glut.h>

#define INF 2000000
int m,n;/*related to the arrow movement*/
int p;
float q;/*related to the time*/
int M,N;/*M=master select,N=Level*/
int S=1;//Stage
int SCORE=0;
int LIFE=5;
int random[21];
int U=1,D=1,L=1,R=1;
int U_ENABLE=1,D_ENABLE,L_ENABLE,R_ENABLE;

int CAR;

int SPEED=5;/* Human SPEED */

int BAR;/*Menu Bar*/

int OP_BAR;/*Option Bar*/
int MODE;
int TYPE;

int H_BAR;/*High Score Bar*/

int F_11,F_12,F_13,F_14,F_15,F_16,F_17,F_18;//Stage one
int F_21,F_22,F_23,F_24,F_25,F_26,F_27,F_28,F_29,F_210;//Stage two
int F_31,F_32,F_33,F_34,F_35,F_36,F_37,F_38,F_39,F_310,F_311,F_312;//Stage three


int FLAG,MINI_FLAG;
int LIMIT_1=100,LIMIT_2=350,LIMIT_3=400,LIMIT_4=450,LIMIT_5=500;
int WAIT=30;

int TRY=3;

#define W 1000/*width*/
#define H 700/*height*/

void rectangle(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,float depth)
{
	glBegin(GL_QUADS);
		glVertex3f(x1,y1,depth);
		glVertex3f(x2,y2,depth);
		glVertex3f(x3,y3,depth);
		glVertex3f(x4,y4,depth);
	glEnd();
}

void line(float x1,float y1,float x2,float y2,float depth)
{
	glBegin(GL_LINES);
		glVertex3f(x1,y1,depth);
		glVertex3f(x2,y2,depth);
	glEnd();
}

void point(float x,float y)
{
	glBegin(GL_POINTS);
		glVertex2f(x,y);
	glEnd();
}

void strrev_2(char* s)
{
	char c[21];
	int i=0,j=strlen(s)-1;
	while(s[i]!=NULL)
		c[i++]=s[j--];
	c[i]=NULL;
	strcpy(s,c);
}

void convert(int k,char* s,char type)
{
	int i=0,j;
	if(type=='b'){
		if(k==0){strcpy(s,"00");}
		else if(k<=9)
		{
			s[0]=k+48;
			s[1]=48;
			s[2]=NULL;
			strrev_2(s);
		}
		else
		{
			while(k!=0)
			{
				j=k%10;
				s[i++]=j+48;
				k=k/10;
			}
			s[i]=NULL;
			strrev_2(s);
		}
	}
	else if(type=='s')
	{
		if(k==0){strcpy(s,"0");}
		else
		{
			while(k!=0)
			{
				j=k%10;
				s[i++]=j+48;
				k=k/10;
			}
			s[i]=NULL;
			strrev_2(s);
		}
	}
}



void red(){glColor3f(1,0,0);}
void green(){glColor3f(0,1,0);}
void blue(){glColor3f(0,0,1);}
void pink(){glColor3f(1,0,1);}
void yellow(){glColor3f(1,1,0);}
void indigo(){glColor3f(0,1,1);}
void black(){glColor3f(0,0,0);}
void white(){glColor3f(1,1,1);}

void violet(){glColor3f(.5,0,1);}
void orange(){glColor3f(1,.5,0);}
void cream(){glColor3f(1,1,.5);}
void deep_blue(){glColor3f(0,0,.25);}
void deep_green(){glColor3f(0,.25,0);}
void light_gray(){glColor3f(.75,.75,.75);}
void deep_gray(){glColor3f(.5,.5,.5);}
/* BackGround */
void red_back(){glClearColor(1,0,0,0);}
void green_back(){glClearColor(0,1,0,0);}
void blue_back(){glClearColor(0,0,1,0);}
void pink_back(){glClearColor(1,0,1,0);}
void yellow_back(){glClearColor(1,1,0,0);}
void indigo_back(){glClearColor(0,1,1,0);}
void black_back(){glClearColor(0,0,0,0);}
void white_back(){glClearColor(1,1,1,0);}

void violet_back(){glClearColor(.5,0,1,0);}
void orange_back(){glClearColor(1,.5,0,0);}
void cream_back(){glClearColor(1,1,.5,0);}
void deep_blue_back(){glClearColor(0,0,.25,0);}
void deep_green_back(){glClearColor(0,.25,0,0);}
void light_gray_back(){glClearColor(.75,.75,.75,0);}
void deep_gray_back(){glClearColor(.5,.5,.5,0);}

float color_cycle_one[21]={1,.9,.8,.7,.6,.5,.4,.3,.2,.1,0,.1,.2,.3,.4,.5,.6,.7,.8,.9};
float color_cycle_two[21]={0,.1,.2,.3,.4,.5,.6,.7,.8,.9,1,.9,.8,.7,.6,.5,.4,.3,.2,.1};
float color_cycle_three[21]={.5,.4,.3,.2,.1,0,.1,.2,.3,.4,.5,.6,.7,.8,.9,1,.9,.8,.7,.6};
float color_cycle_four[21]={.5,.6,.7,.8,.9,1,.9,.8,.7,.6,.5,.4,.3,.2,.1,0,.1,.2,.3,.4};

/*
const double Xmin = 0.0, Xmax = 3.0;
const double Ymin = 0.0, Ymax = 3.0;
*/
void reshape(int w, int h)
{
	//glEnable(GL_DEPTH_TEST);
	/*
	double scale, center;
	double windowXmin, windowXmax, windowYmin, windowYmax;
	*/

	// Define the portion of the window used for OpenGL rendering.
	/*
	glViewport( 0, 0, w, h );	// View port uses whole window
	*/

	// Set up the projection view matrix: orthographic projection
	// Determine the min and max values for x and y that should appear in the window.
	// The complication is that the aspect ratio of the window may not match the
	//		aspect ratio of the scene we want to view.
	/*
	w = (w==0) ? 1 : w;
	h = (h==0) ? 1 : h;
	if ( (Xmax-Xmin)/w < (Ymax-Ymin)/h ) {
		scale = ((Ymax-Ymin)/h)/((Xmax-Xmin)/w);
		center = (Xmax+Xmin)/2;
		windowXmin = center - (center-Xmin)*scale;
		windowXmax = center + (Xmax-center)*scale;
		windowYmin = Ymin;
		windowYmax = Ymax;
	}
	else {
		scale = ((Xmax-Xmin)/w)/((Ymax-Ymin)/h);
		center = (Ymax+Ymin)/2;
		windowYmin = center - (center-Ymin)*scale;
		windowYmax = center + (Ymax-center)*scale;
		windowXmin = Xmin;
		windowXmax = Xmax;
	}
	
	// Now that we know the max & min values for x & y that should be visible in the window,
	//		we set up the orthographic projection.
	*/
	
	//glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	glOrtho( 0, 1000, 0, 700, 0, 1 );
}

#endif