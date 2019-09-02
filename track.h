#ifndef TRACK_H
#define TRACK_H

#include "general.h"

void track(int t)
{
	glClearColor(0,1,1,0);
	int i,j;int depth=0;
	int initial,width,barrier,rest,start_x,start_y,x,y;
	switch(t)
	{
	case 4:initial=50;width=54;barrier=5;rest=15;break;/*3 tracks*/
	case 5:initial=45;width=44;barrier=4;rest=12;break;
	case 6:initial=40;width=38;barrier=3;rest=9;break;
	case 7:initial=35;width=34;barrier=2;rest=6;break;
	case 8:initial=30;width=32;barrier=1;rest=3;break;
	}
	//initial=45;	width=50; barrier=5; rest=15; 
	x=80; y=width/5;/*Mutable*/
	
	for(j=1;j<=t;j++)/*Mutable*/
	{
		start_x=20;/*Mutable*/
		start_y=initial+2*(width/5);

		glColor3f(0,0,.1);
		rectangle(0,initial, W,initial, W,initial+width, 0,initial+width, depth);
		glColor3f(.9,.9,.9);
		for(i=1;i<10;i++)
		{
			rectangle(start_x,start_y,start_x+x,start_y,start_x+x,start_y+y,start_x,start_y+y,depth);
			start_x+=120;
		}

		initial=initial+width+barrier;
		start_x=-30;/*Mutable*/
		start_y=initial+2*(width/5);

		glColor3f(0,0,.1);
		rectangle(0,initial, W,initial, W,initial+width, 0,initial+width, depth);	
		glColor3f(.9,.9,.9);
		for(i=1;i<10;i++)
		{
			rectangle(start_x,start_y,start_x+x,start_y,start_x+x,start_y+y,start_x,start_y+y,depth);
			start_x+=120;
		}

		initial=initial+width+rest;
	}
}
#endif