#ifndef HEARTS_H
#define HEARTS_H
#include "general.h"

struct hearts
{
	float x,y;
	//hearts();
	//hearts(float,float);
};
//hearts::hearts(){}
//hearts::hearts(float f,float g){x=f;y=g;}

struct bar
{
	float x,y;
	//bar();
	//bar(float,float);
};
//bar::bar(){}
//bar::bar(float f,float g){x=f;y=g;}

/*draw prototypes*/
void draw_hearts(hearts);
void draw_bar(bar);
/*draw prototypes*/

void draw_hearts(hearts k)
{
	red();
	int i;
	for(i=k.x;i<k.x+10;i++)
	{
		int depth=0;
		int j=i-k.x;

		switch(j)
		{
		case 0:line(i,k.y+9,i,k.y+13,depth);break;//1
		case 1:line(i,k.y+8,i,k.y+14,depth);break;
		case 2:line(i,k.y+7,i,k.y+15,depth);break;
		case 3:line(i,k.y+6,i,k.y+15,depth);break;
		case 4:line(i,k.y+5,i,k.y+16,depth);break;
		case 5:line(i,k.y+4,i,k.y+16,depth);break;
		case 6:line(i,k.y+3,i,k.y+15,depth);break;
		case 7:line(i,k.y+2,i,k.y+15,depth);break;
		case 8:line(i,k.y+1,i,k.y+14,depth);break;
		case 9:line(i,k.y+0,i,k.y+13,depth);break;
		};
	}
	for(i=k.x+10;i<k.x+20;i++)
	{
		int depth=0;
		int j=i-(k.x+10);

		switch(j)
		{
		case 9:line(i,k.y+9,i,k.y+13,depth);break;//1
		case 8:line(i,k.y+8,i,k.y+14,depth);break;
		case 7:line(i,k.y+7,i,k.y+15,depth);break;
		case 6:line(i,k.y+6,i,k.y+15,depth);break;
		case 5:line(i,k.y+5,i,k.y+16,depth);break;
		case 4:line(i,k.y+4,i,k.y+16,depth);break;
		case 3:line(i,k.y+3,i,k.y+15,depth);break;
		case 2:line(i,k.y+2,i,k.y+15,depth);break;
		case 1:line(i,k.y+1,i,k.y+14,depth);break;
		case 0:line(i,k.y+0,i,k.y+13,depth);break;
		};
	}
}

#endif