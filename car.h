#ifndef CAR_H
#define CAR_H
#include "general.h"

struct bmw
{
	float x[81];
	float y;
	float speed;
	//bmw();
	//bmw(float,float);
};

void draw_bmw(bmw k,float a,float b,float c,float d,float e,float f);
void draw_bmw_r(bmw k,float a,float b,float c,float d,float e,float f);

/*bmw::bmw()//problem
{
	int i;
	for(i=2;i<=65;i++)
		x[i]=x[i-1]+1;
	for(i=1;i<=65;i++){if(x[i]>W)x[i]=(int)x[i]%W;}
}*/
/*bmw::bmw(float f,float g)
{
	int i;
	x[1]=f;
	y=g;
	for(i=2;i<=65;i++)
		x[i]=x[i-1]+1;
	for(i=1;i<=65;i++){if(x[i]>W)x[i]=(int)x[i]%W;}
}*/

void body(){green();}
void rear(){blue();}
void front(){blue();}
void side(){deep_gray();}
void roof(){pink();}

void white_bmw(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.92,c=.92;
	//.22,.22,.92 for blue body
	//.22,.92,.22 for green body
	//.92,.22,.22 for red body
	d=.3,e=.3,f=.3;//black window tint

	draw_bmw(k,a,b,c,d,e,f);
}

void red_bmw(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.22,c=.22;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw(k,a,b,c,d,e,f);
}

void green_bmw(bmw k)
{
	float a,b,c,d,e,f;
	a=.22,b=.92,c=.22;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw(k,a,b,c,d,e,f);
}

void blue_bmw(bmw k)
{
	float a,b,c,d,e,f;
	a=.22,b=.22,c=.92;
	d=.3,e=.3,f=.3;//black window tint	
	draw_bmw(k,a,b,c,d,e,f);
}

void yellow_bmw(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.92,c=.22;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw(k,a,b,c,d,e,f);
}

void pink_bmw(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.22,c=.92;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw(k,a,b,c,d,e,f);
}

void indigo_bmw(bmw k)
{
	float a,b,c,d,e,f;
	a=.22,b=.92,c=.92;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw(k,a,b,c,d,e,f);
}

void draw_bmw(bmw k,float a,float b,float c,float d,float e,float f)
{
	int i;
	for(i=1;i<=65;i++)
	{
		int j=k.x[i];
		int depth=0;

		switch(i)
		{
		case 1:
			glColor3f(a-.12,b-.12,c-.12);line(j,k.y+8,j,k.y+22,depth);break;
		case 2:
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+4,j,k.y+26,depth);break;
		case 3:
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+2,j,k.y+28,depth);break;
		case 4:
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+1,j,k.y+29,depth);break;
		case 5:
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y,j,k.y+30,depth);break;
		case 6:
			glColor3f(a-.02,b-.02,c-.02);line(j,k.y,j,k.y+30,depth);break;

		case 7:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+7,depth);
			glColor3f(d+.12,e+.12,f+.1);line(j,k.y+7,j,k.y+23,depth);//rear starts
			glColor3f(a,b,c);line(j,k.y+23,j,k.y+30,depth);break;
		case 8:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+3,depth);
			glColor3f(d+.1,e+.1,f+.08);line(j,k.y+3,j,k.y+27,depth);
			glColor3f(a,b,c);line(j,k.y+27,j,k.y+30,depth);break;
		case 9:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			glColor3f(d+.08,e+.08,f+.06);line(j,k.y+1,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 10:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+2,depth);//side one
			glColor3f(d+.06,e+.06,f+.04);line(j,k.y+2,j,k.y+28,depth);
			side();line(j,k.y+28,j,k.y+29,depth);//side two
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 11:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d+.04,e+.04,f+.02);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 12:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d+.02,e+.02,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 13:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d,e,f);line(j,k.y+5,j,k.y+25,depth);//rear ends
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		
		case 14:/*roof starts*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 15:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 16:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 17:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 18:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 19:/*middle line one*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			line(j,k.y+1,j,k.y+5,depth);//
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			line(j,k.y+25,j,k.y+29,depth);//
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 20:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 21:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 22://middle point of plus
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 23:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 24:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 25:/*common*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 26:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 27:/*middle line two*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			line(j,k.y+1,j,k.y+5,depth);//
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+5,j,k.y+25,depth);
			line(j,k.y+25,j,k.y+29,depth);//
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 28:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 29:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 30:/*roof ends*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 31:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d-.12,e-.12,f);line(j,k.y+5,j,k.y+25,depth);//front starts
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 32:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d-.1,e-.1,f);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 33:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d-.08,e-.08,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 34:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d-.06,e-.06,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 35:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d-.04,e-.04,f);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 36:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d-.02,e-.02,f);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 37:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+2,depth);
			glColor3f(d,e,f);line(j,k.y+2,j,k.y+28,depth);
			side();line(j,k.y+28,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		
		case 38:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			glColor3f(d+.02,e+.02,f);line(j,k.y+1,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 39:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+2,depth);
			glColor3f(d+.04,e+.04,f+.02);line(j,k.y+2,j,k.y+28,depth);
			glColor3f(a,b,c);line(j,k.y+28,j,k.y+30,depth);break;
		case 40:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+2,depth);
			glColor3f(d+.06,e+.06,f+.04);line(j,k.y+2,j,k.y+28,depth);
			glColor3f(a,b,c);line(j,k.y+28,j,k.y+30,depth);break;
		case 41:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+4,depth);
			glColor3f(d+.08,e+.08,f+.06);line(j,k.y+4,j,k.y+26,depth);
			glColor3f(a,b,c);line(j,k.y+26,j,k.y+30,depth);break;
		case 42:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+6,depth);
			glColor3f(d+.1,e+.1,f+.08);line(j,k.y+6,j,k.y+24,depth);
			glColor3f(a,b,c);line(j,k.y+24,j,k.y+30,depth);break;
		case 43:/*front ends*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+10,depth);
			glColor3f(d+.12,e+.12,f+.1);line(j,k.y+10,j,k.y+20,depth);
			glColor3f(a,b,c);line(j,k.y+20,j,k.y+30,depth);break;
		case 44:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+30,depth);break;
		case 45:
			glColor3f(a-.02,b-.02,c-.02);line(j,k.y+0,j,k.y+30,depth);break;
		case 46:
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+0,j,k.y+30,depth);break;
		case 47:
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+0,j,k.y+30,depth);break;
		case 48:
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+0,j,k.y+30,depth);break;
		case 49:
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+0,j,k.y+30,depth);break;
		case 50:
			glColor3f(a-.12,b-.12,c-.12);line(j,k.y+0,j,k.y+30,depth);break;
		case 51:
			glColor3f(a-.14,b-.14,c-.14);line(j,k.y+0,j,k.y+30,depth);break;
		case 52:
			glColor3f(a-.16,b-.16,c-.16);line(j,k.y+0,j,k.y+30,depth);break;
		case 53:
			glColor3f(a-.18,b-.18,c-.18);line(j,k.y+0,j,k.y+30,depth);break;
		case 54:
			glColor3f(a-.2,b-.2,c-.2);line(j,k.y+0,j,k.y+30,depth);break;
		case 55:
			glColor3f(a-.22,b-.22,c-.22);line(j,k.y+0,j,k.y+30,depth);break;
		case 56:
			glColor3f(a-.24,b-.24,c-.24);line(j,k.y+0,j,k.y+30,depth);break;
		case 57:
			glColor3f(a-.26,b-.26,c-.26);line(j,k.y+0,j,k.y+30,depth);break;
		case 58:
			glColor3f(a-.28,b-.28,c-.28);line(j,k.y+0,j,k.y+30,depth);break;
		case 59:
			glColor3f(a-.3,b-.3,c-.3);line(j,k.y+0,j,k.y+30,depth);break;
		
		case 60:/*curving starts*/
			glColor3f(a-.32,b-.32,c-.32);line(j,k.y+1,j,k.y+29,depth);break;
		case 61:
			glColor3f(a-.34,b-.34,c-.34);line(j,k.y+1,j,k.y+29,depth);break;
		case 62:
			glColor3f(a-.36,b-.36,c-.36);line(j,k.y+1,j,k.y+29,depth);break;
		case 63:
			glColor3f(a-.38,b-.38,c-.38);line(j,k.y+2,j,k.y+28,depth);break;
		case 64:
			glColor3f(a-.4,b-.4,c-.4);line(j,k.y+2,j,k.y+28,depth);break;
		case 65:
			glColor3f(a-.42,b-.42,c-.42);line(j,k.y+4,j,k.y+26,depth);break;
		}
	}
}
void white_bmw_r(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.92,c=.92;
	//.22,.22,.92 for blue body
	//.22,.92,.22 for green body
	//.92,.22,.22 for red body
	d=.3,e=.3,f=.3;//black window tint

	draw_bmw_r(k,a,b,c,d,e,f);
}

void red_bmw_r(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.22,c=.22;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw_r(k,a,b,c,d,e,f);
}

void green_bmw_r(bmw k)
{
	float a,b,c,d,e,f;
	a=.22,b=.92,c=.22;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw_r(k,a,b,c,d,e,f);
}

void blue_bmw_r(bmw k)
{
	float a,b,c,d,e,f;
	a=.22,b=.22,c=.92;
	d=.3,e=.3,f=.3;//black window tint	
	draw_bmw_r(k,a,b,c,d,e,f);
}

void yellow_bmw_r(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.92,c=.22;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw_r(k,a,b,c,d,e,f);
}

void pink_bmw_r(bmw k)
{
	float a,b,c,d,e,f;
	a=.92,b=.22,c=.92;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw_r(k,a,b,c,d,e,f);
}

void indigo_bmw_r(bmw k)
{
	float a,b,c,d,e,f;
	a=.22,b=.92,c=.92;
	d=.3,e=.3,f=.3;//black window tint
	draw_bmw_r(k,a,b,c,d,e,f);
}
void draw_bmw_r(bmw k,float a,float b,float c,float d,float e,float f)
{
	int i;
	for(i=1;i<=65;i++)
	{
		int j=k.x[i];
		int depth=0;

		switch(i)
		{
		case 65:
			glColor3f(a-.12,b-.12,c-.12);line(j,k.y+8,j,k.y+22,depth);break;
		case 64:
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+4,j,k.y+26,depth);break;
		case 63:
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+2,j,k.y+28,depth);break;
		case 62:
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+1,j,k.y+29,depth);break;
		case 61:
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y,j,k.y+30,depth);break;
		case 60:
			glColor3f(a-.02,b-.02,c-.02);line(j,k.y,j,k.y+30,depth);break;

		case 59:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+7,depth);
			glColor3f(d+.12,e+.12,f+.1);line(j,k.y+7,j,k.y+23,depth);//rear starts
			glColor3f(a,b,c);line(j,k.y+23,j,k.y+30,depth);break;
		case 58:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+3,depth);
			glColor3f(d+.1,e+.1,f+.08);line(j,k.y+3,j,k.y+27,depth);
			glColor3f(a,b,c);line(j,k.y+27,j,k.y+30,depth);break;
		case 57:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			glColor3f(d+.08,e+.08,f+.06);line(j,k.y+1,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 56:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+2,depth);//side one
			glColor3f(d+.06,e+.06,f+.04);line(j,k.y+2,j,k.y+28,depth);
			side();line(j,k.y+28,j,k.y+29,depth);//side two
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 55:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d+.04,e+.04,f+.02);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 54:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d+.02,e+.02,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 53:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d,e,f);line(j,k.y+5,j,k.y+25,depth);//rear ends
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		
		case 52:/*roof starts*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 51:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 50:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 49:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 48:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 47:/*middle line one*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			line(j,k.y+1,j,k.y+5,depth);//
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			line(j,k.y+25,j,k.y+29,depth);//
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 46:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 45:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 44://middle point of plus
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 43:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 42:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 41:/*common*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 40:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 39:/*middle line two*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			line(j,k.y+1,j,k.y+5,depth);//
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+5,j,k.y+25,depth);
			line(j,k.y+25,j,k.y+29,depth);//
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 38:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 37:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 36:/*roof ends*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 35:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d-.12,e-.12,f);line(j,k.y+5,j,k.y+25,depth);//front starts
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 34:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d-.1,e-.1,f);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 33:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d-.08,e-.08,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 32:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d-.06,e-.06,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 31:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d-.04,e-.04,f);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 30:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d-.02,e-.02,f);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 29:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+2,depth);
			glColor3f(d,e,f);line(j,k.y+2,j,k.y+28,depth);
			side();line(j,k.y+28,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		
		case 28:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			glColor3f(d+.02,e+.02,f);line(j,k.y+1,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 27:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+2,depth);
			glColor3f(d+.04,e+.04,f+.02);line(j,k.y+2,j,k.y+28,depth);
			glColor3f(a,b,c);line(j,k.y+28,j,k.y+30,depth);break;
		case 26:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+2,depth);
			glColor3f(d+.06,e+.06,f+.04);line(j,k.y+2,j,k.y+28,depth);
			glColor3f(a,b,c);line(j,k.y+28,j,k.y+30,depth);break;
		case 25:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+4,depth);
			glColor3f(d+.08,e+.08,f+.06);line(j,k.y+4,j,k.y+26,depth);
			glColor3f(a,b,c);line(j,k.y+26,j,k.y+30,depth);break;
		case 24:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+6,depth);
			glColor3f(d+.1,e+.1,f+.08);line(j,k.y+6,j,k.y+24,depth);
			glColor3f(a,b,c);line(j,k.y+24,j,k.y+30,depth);break;
		case 23:/*front ends*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+10,depth);
			glColor3f(d+.12,e+.12,f+.1);line(j,k.y+10,j,k.y+20,depth);
			glColor3f(a,b,c);line(j,k.y+20,j,k.y+30,depth);break;
		case 22:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+30,depth);break;
		case 21:
			glColor3f(a-.02,b-.02,c-.02);line(j,k.y+0,j,k.y+30,depth);break;
		case 20:
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+0,j,k.y+30,depth);break;
		case 19:
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+0,j,k.y+30,depth);break;
		case 18:
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+0,j,k.y+30,depth);break;
		case 17:
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+0,j,k.y+30,depth);break;
		case 16:
			glColor3f(a-.12,b-.12,c-.12);line(j,k.y+0,j,k.y+30,depth);break;
		case 15:
			glColor3f(a-.14,b-.14,c-.14);line(j,k.y+0,j,k.y+30,depth);break;
		case 14:
			glColor3f(a-.16,b-.16,c-.16);line(j,k.y+0,j,k.y+30,depth);break;
		case 13:
			glColor3f(a-.18,b-.18,c-.18);line(j,k.y+0,j,k.y+30,depth);break;
		case 12:
			glColor3f(a-.2,b-.2,c-.2);line(j,k.y+0,j,k.y+30,depth);break;
		case 11:
			glColor3f(a-.22,b-.22,c-.22);line(j,k.y+0,j,k.y+30,depth);break;
		case 10:
			glColor3f(a-.24,b-.24,c-.24);line(j,k.y+0,j,k.y+30,depth);break;
		case 9:
			glColor3f(a-.26,b-.26,c-.26);line(j,k.y+0,j,k.y+30,depth);break;
		case 8:
			glColor3f(a-.28,b-.28,c-.28);line(j,k.y+0,j,k.y+30,depth);break;
		case 7:
			glColor3f(a-.3,b-.3,c-.3);line(j,k.y+0,j,k.y+30,depth);break;
		
		case 6:/*curving starts*/
			glColor3f(a-.32,b-.32,c-.32);line(j,k.y+1,j,k.y+29,depth);break;
		case 5:
			glColor3f(a-.34,b-.34,c-.34);line(j,k.y+1,j,k.y+29,depth);break;
		case 4:
			glColor3f(a-.36,b-.36,c-.36);line(j,k.y+1,j,k.y+29,depth);break;
		case 3:
			glColor3f(a-.38,b-.38,c-.38);line(j,k.y+2,j,k.y+28,depth);break;
		case 2:
			glColor3f(a-.4,b-.4,c-.4);line(j,k.y+2,j,k.y+28,depth);break;
		case 1:
			glColor3f(a-.42,b-.42,c-.42);line(j,k.y+4,j,k.y+26,depth);break;
		}
	}
}



void draw_bmw_ambulance(bmw k)
{
	float a,b,c;
	a=.92,b=.92,c=.92;//white body

	float d,e,f;//.48,.48,.2 original
	d=.4,e=.4,f=.4;//black window tint

	float x,y,z;
	x=1,y=0,z=0;//for red plus
	int i;
	for(i=1;i<=65;i++)
	{
		int j=k.x[i];
		int depth=0;

		switch(i)
		{
		case 1:
			glColor3f(a-.12,b-.12,c-.12);line(j,k.y+8,j,k.y+22,depth);break;
		case 2:
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+4,j,k.y+26,depth);break;
		case 3:
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+2,j,k.y+28,depth);break;
		case 4:
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+1,j,k.y+29,depth);break;
		case 5:
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y,j,k.y+30,depth);break;
		case 6:
			glColor3f(a-.02,b-.02,c-.02);line(j,k.y,j,k.y+30,depth);break;

		case 7:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+7,depth);
			glColor3f(d+.12,e+.12,f+.1);line(j,k.y+7,j,k.y+23,depth);//rear starts
			glColor3f(a,b,c);line(j,k.y+23,j,k.y+30,depth);break;
		case 8:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+3,depth);
			glColor3f(d+.1,e+.1,f+.08);line(j,k.y+3,j,k.y+27,depth);
			glColor3f(a,b,c);line(j,k.y+27,j,k.y+30,depth);break;
		case 9:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			glColor3f(d+.08,e+.08,f+.06);line(j,k.y+1,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 10:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+2,depth);//side one
			glColor3f(d+.06,e+.06,f+.04);line(j,k.y+2,j,k.y+28,depth);
			side();line(j,k.y+28,j,k.y+29,depth);//side two
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 11:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d+.04,e+.04,f+.02);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 12:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d+.02,e+.02,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 13:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d,e,f);line(j,k.y+5,j,k.y+25,depth);//rear ends
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		
		case 14:/*roof starts*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 15:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 16:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 17:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 18:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 19:/*middle line one*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			line(j,k.y+1,j,k.y+5,depth);//
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			line(j,k.y+25,j,k.y+29,depth);//
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 20:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 21:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 22://middle point of plus
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+10,depth);//
			glColor3f(x,y,z);line(j,k.y+10,j,k.y+20,depth);//
			glColor3f(a,b,c);line(j,k.y+20,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 23:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 24:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 25:/*common*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 26:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a,b,c);line(j,k.y+5,j,k.y+15,depth);//
			glColor3f(x,y,z);line(j,k.y+15,j,k.y+16,depth);//
			glColor3f(a,b,c);line(j,k.y+16,j,k.y+25,depth);//
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 27:/*middle line two*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			line(j,k.y+1,j,k.y+5,depth);//
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+5,j,k.y+25,depth);
			line(j,k.y+25,j,k.y+29,depth);//
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 28:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 29:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 30:/*roof ends*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 31:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d-.12,e-.12,f);line(j,k.y+5,j,k.y+25,depth);//front starts
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 32:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+5,depth);
			glColor3f(d-.1,e-.1,f);line(j,k.y+5,j,k.y+25,depth);
			side();line(j,k.y+25,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 33:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d-.08,e-.08,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 34:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+4,depth);
			glColor3f(d-.06,e-.06,f);line(j,k.y+4,j,k.y+26,depth);
			side();line(j,k.y+26,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 35:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d-.04,e-.04,f);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 36:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+3,depth);
			glColor3f(d-.02,e-.02,f);line(j,k.y+3,j,k.y+27,depth);
			side();line(j,k.y+27,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 37:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			side();line(j,k.y+1,j,k.y+2,depth);
			glColor3f(d,e,f);line(j,k.y+2,j,k.y+28,depth);
			side();line(j,k.y+28,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		
		case 38:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+1,depth);
			glColor3f(d+.02,e+.02,f);line(j,k.y+1,j,k.y+29,depth);
			glColor3f(a,b,c);line(j,k.y+29,j,k.y+30,depth);break;
		case 39:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+2,depth);
			glColor3f(d+.04,e+.04,f+.02);line(j,k.y+2,j,k.y+28,depth);
			glColor3f(a,b,c);line(j,k.y+28,j,k.y+30,depth);break;
		case 40:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+2,depth);
			glColor3f(d+.06,e+.06,f+.04);line(j,k.y+2,j,k.y+28,depth);
			glColor3f(a,b,c);line(j,k.y+28,j,k.y+30,depth);break;
		case 41:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+4,depth);
			glColor3f(d+.08,e+.08,f+.06);line(j,k.y+4,j,k.y+26,depth);
			glColor3f(a,b,c);line(j,k.y+26,j,k.y+30,depth);break;
		case 42:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+6,depth);
			glColor3f(d+.1,e+.1,f+.08);line(j,k.y+6,j,k.y+24,depth);
			glColor3f(a,b,c);line(j,k.y+24,j,k.y+30,depth);break;
		case 43:/*front ends*/
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+10,depth);
			glColor3f(d+.12,e+.12,f+.1);line(j,k.y+10,j,k.y+20,depth);
			glColor3f(a,b,c);line(j,k.y+20,j,k.y+30,depth);break;
		case 44:
			glColor3f(a,b,c);line(j,k.y+0,j,k.y+30,depth);break;
		case 45:
			glColor3f(a-.02,b-.02,c-.02);line(j,k.y+0,j,k.y+30,depth);break;
		case 46:
			glColor3f(a-.04,b-.04,c-.04);line(j,k.y+0,j,k.y+30,depth);break;
		case 47:
			glColor3f(a-.06,b-.06,c-.06);line(j,k.y+0,j,k.y+30,depth);break;
		case 48:
			glColor3f(a-.08,b-.08,c-.08);line(j,k.y+0,j,k.y+30,depth);break;
		case 49:
			glColor3f(a-.1,b-.1,c-.1);line(j,k.y+0,j,k.y+30,depth);break;
		case 50:
			glColor3f(a-.12,b-.12,c-.12);line(j,k.y+0,j,k.y+30,depth);break;
		case 51:
			glColor3f(a-.14,b-.14,c-.14);line(j,k.y+0,j,k.y+30,depth);break;
		case 52:
			glColor3f(a-.16,b-.16,c-.16);line(j,k.y+0,j,k.y+30,depth);break;
		case 53:
			glColor3f(a-.18,b-.18,c-.18);line(j,k.y+0,j,k.y+30,depth);break;
		case 54:
			glColor3f(a-.2,b-.2,c-.2);line(j,k.y+0,j,k.y+30,depth);break;
		case 55:
			glColor3f(a-.22,b-.22,c-.22);line(j,k.y+0,j,k.y+30,depth);break;
		case 56:
			glColor3f(a-.24,b-.24,c-.24);line(j,k.y+0,j,k.y+30,depth);break;
		case 57:
			glColor3f(a-.26,b-.26,c-.26);line(j,k.y+0,j,k.y+30,depth);break;
		case 58:
			glColor3f(a-.28,b-.28,c-.28);line(j,k.y+0,j,k.y+30,depth);break;
		case 59:
			glColor3f(a-.3,b-.3,c-.3);line(j,k.y+0,j,k.y+30,depth);break;
		
		case 60:/*curving starts*/
			glColor3f(a-.32,b-.32,c-.32);line(j,k.y+1,j,k.y+29,depth);break;
		case 61:
			glColor3f(a-.34,b-.34,c-.34);line(j,k.y+1,j,k.y+29,depth);break;
		case 62:
			glColor3f(a-.36,b-.36,c-.36);line(j,k.y+1,j,k.y+29,depth);break;
		case 63:
			glColor3f(a-.38,b-.38,c-.38);line(j,k.y+2,j,k.y+28,depth);break;
		case 64:
			glColor3f(a-.4,b-.4,c-.4);line(j,k.y+2,j,k.y+28,depth);break;
		case 65:
			glColor3f(a-.42,b-.42,c-.42);line(j,k.y+4,j,k.y+26,depth);break;
		}
	}
}
#endif