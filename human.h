#ifndef HUMAN_H
#define HUMAN_H

#include "general.h"

struct human
{
	float x;
	float y;
};

void cap(){orange();}
void wrist(){orange();}
void top(){yellow();}
void arm(){blue();}

void draw_human(human k)
{
	if(U_ENABLE==1)
	{
		if(U%2==0)
		{
			int i;
			for(i=k.x;i<k.x+10;i++)//left hand state one
			{
				int depth=0;int j=i-k.x;
				switch(j)
				{
				case 0:arm();line(i,k.y+8,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+11,depth);break;//1
				case 1:arm();line(i,k.y+6,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+12,depth);break;
				case 2:arm();line(i,k.y+5,i,k.y+8,depth);break;
				case 3:arm();line(i,k.y+4,i,k.y+7,depth);break;
				case 4:arm();line(i,k.y+3,i,k.y+6,depth);break;
				case 5:arm();line(i,k.y+2,i,k.y+7,depth);break;
				case 6:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y-1,i,k.y+1,depth);break;//boot
				case 7:cap();line(i,k.y+1,i,k.y+8,depth);black();line(i,k.y-1,i,k.y+1,depth);break;
				case 8:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 9:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
			for(i=k.x+10;i<k.x+20;i++)
			{
				int depth=0;int j=i-(k.x+10);
				switch(j)
				{
				case 9:arm();line(i,k.y+4,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;//1
				case 8:arm();line(i,k.y+3,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;
				case 7:arm();line(i,k.y+2,i,k.y+5,depth);break;
				case 6:arm();line(i,k.y+1,i,k.y+4,depth);break;
				case 5:arm();line(i,k.y+0,i,k.y+3,depth);break;
				case 4:arm();line(i,k.y+0,i,k.y+5,depth);black();line(i,k.y+7,i,k.y+9,depth);break;//boot
				case 3:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y+8,i,k.y+9,depth);break;
				case 2:cap();line(i,k.y+1,i,k.y+8,depth);break;
				case 1:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 0:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
		}
		else if(U%2==1)
		{
			int i;
			for(i=k.x;i<k.x+10;i++)//left hand state two
			{
				int depth=0;int j=i-k.x;
				switch(j)
				{
				case 0:arm();line(i,k.y+4,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;//1
				case 1:arm();line(i,k.y+3,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;
				case 2:arm();line(i,k.y+2,i,k.y+5,depth);break;
				case 3:arm();line(i,k.y+1,i,k.y+4,depth);break;
				case 4:arm();line(i,k.y+0,i,k.y+3,depth);break;
				case 5:arm();line(i,k.y+0,i,k.y+5,depth);black();line(i,k.y+7,i,k.y+9,depth);break;//boot
				case 6:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y+8,i,k.y+9,depth);break;
				case 7:cap();line(i,k.y+1,i,k.y+8,depth);break;
				case 8:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 9:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
			for(i=k.x+10;i<k.x+20;i++)
			{
				int depth=0;int j=i-(k.x+10);
				switch(j)
				{
				case 9:arm();line(i,k.y+8,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+11,depth);break;//1
				case 8:arm();line(i,k.y+6,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+12,depth);break;
				case 7:arm();line(i,k.y+5,i,k.y+8,depth);break;
				case 6:arm();line(i,k.y+4,i,k.y+7,depth);break;
				case 5:arm();line(i,k.y+3,i,k.y+6,depth);break;
				case 4:arm();line(i,k.y+2,i,k.y+7,depth);break;
				case 3:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y-1,i,k.y+1,depth);break;//boot
				case 2:cap();line(i,k.y+1,i,k.y+8,depth);black();line(i,k.y-1,i,k.y+1,depth);break;
				case 1:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 0:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
		}
	}
	else if(D_ENABLE==1)
	{
		if(D%2==0)
		{
			int i;
			for(i=k.x+19;i>=k.x+10;i--)//left hand state one
			{
				int depth=0;int j=k.x+19-i;
				switch(j)
				{
				case 0:arm();line(i,k.y+4,i,k.y+3,depth);wrist();line(i,k.y+3,i,k.y+1,depth);break;//1
				case 1:arm();line(i,k.y+6,i,k.y+3,depth);wrist();line(i,k.y+3,i,k.y+0,depth);break;
				case 2:arm();line(i,k.y+7,i,k.y+4,depth);break;
				case 3:arm();line(i,k.y+8,i,k.y+5,depth);break;
				case 4:arm();line(i,k.y+9,i,k.y+6,depth);break;
				case 5:arm();line(i,k.y+10,i,k.y+5,depth);break;
				case 6:arm();line(i,k.y+11,i,k.y+5,depth);black();line(i,k.y+13,i,k.y+11,depth);break;//boot
				case 7:cap();line(i,k.y+11,i,k.y+4,depth);black();line(i,k.y+13,i,k.y+11,depth);break;
				case 8:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				case 9:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				};
			}
			for(i=k.x+9;i>=k.x;i--)
			{
				int depth=0;int j=k.x+9-i;
				switch(j)
				{
				case 9:arm();line(i,k.y+8,i,k.y+7,depth);wrist();line(i,k.y+7,i,k.y+5,depth);break;//1
				case 8:arm();line(i,k.y+9,i,k.y+7,depth);wrist();line(i,k.y+7,i,k.y+5,depth);break;
				case 7:arm();line(i,k.y+10,i,k.y+7,depth);break;
				case 6:arm();line(i,k.y+11,i,k.y+8,depth);break;
				case 5:arm();line(i,k.y+12,i,k.y+9,depth);break;
				case 4:arm();line(i,k.y+12,i,k.y+7,depth);black();line(i,k.y+5,i,k.y+3,depth);break;//boot
				case 3:arm();line(i,k.y+11,i,k.y+5,depth);black();line(i,k.y+4,i,k.y+3,depth);break;
				case 2:cap();line(i,k.y+11,i,k.y+4,depth);break;
				case 1:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				case 0:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				};
			}
		}
		else if(D%2==1)
		{
			int i;
			for(i=k.x+19;i>=k.x+10;i--)//left hand state two
			{
				int depth=0;int j=k.x+19-i;
				switch(j)
				{
				case 0:arm();line(i,k.y+8,i,k.y+7,depth);wrist();line(i,k.y+7,i,k.y+5,depth);break;//1
				case 1:arm();line(i,k.y+9,i,k.y+7,depth);wrist();line(i,k.y+7,i,k.y+5,depth);break;
				case 2:arm();line(i,k.y+10,i,k.y+7,depth);break;
				case 3:arm();line(i,k.y+11,i,k.y+8,depth);break;
				case 4:arm();line(i,k.y+12,i,k.y+9,depth);break;
				case 5:arm();line(i,k.y+12,i,k.y+7,depth);black();line(i,k.y+5,i,k.y+3,depth);break;//boot
				case 6:arm();line(i,k.y+11,i,k.y+5,depth);black();line(i,k.y+4,i,k.y+3,depth);break;
				case 7:cap();line(i,k.y+11,i,k.y+4,depth);break;
				case 8:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				case 9:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				};
			}
			for(i=k.x+9;i>=k.x;i--)
			{
				int depth=0;int j=k.x+9-i;
				switch(j)
				{
				case 9:arm();line(i,k.y+4,i,k.y+3,depth);wrist();line(i,k.y+3,i,k.y+1,depth);break;//1
				case 8:arm();line(i,k.y+6,i,k.y+3,depth);wrist();line(i,k.y+3,i,k.y+0,depth);break;
				case 7:arm();line(i,k.y+7,i,k.y+4,depth);break;
				case 6:arm();line(i,k.y+8,i,k.y+5,depth);break;
				case 5:arm();line(i,k.y+9,i,k.y+6,depth);break;
				case 4:arm();line(i,k.y+10,i,k.y+5,depth);break;
				case 3:arm();line(i,k.y+11,i,k.y+5,depth);black();line(i,k.y+13,i,k.y+11,depth);break;//boot
				case 2:cap();line(i,k.y+11,i,k.y+4,depth);black();line(i,k.y+13,i,k.y+11,depth);break;
				case 1:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				case 0:cap();line(i,k.y+12,i,k.y+3,depth);top();line(i,k.y+4,i,k.y+2,depth);break;
				};
			}
		}
	}
	else if(L_ENABLE==1)
	{
		if(L%2==0)
		{
			int i;
			for(i=k.x;i<k.x+10;i++)//left hand state one
			{
				int depth=0;int j=i-k.x;
				switch(j)
				{
				case 0:arm();line(i,k.y+8,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+11,depth);break;//1
				case 1:arm();line(i,k.y+6,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+12,depth);break;
				case 2:arm();line(i,k.y+5,i,k.y+8,depth);break;
				case 3:arm();line(i,k.y+4,i,k.y+7,depth);break;
				case 4:arm();line(i,k.y+3,i,k.y+6,depth);break;
				case 5:arm();line(i,k.y+2,i,k.y+7,depth);break;
				case 6:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y-1,i,k.y+1,depth);break;//boot
				case 7:cap();line(i,k.y+1,i,k.y+8,depth);black();line(i,k.y-1,i,k.y+1,depth);break;
				case 8:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 9:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
			for(i=k.x+10;i<k.x+20;i++)
			{
				int depth=0;int j=i-(k.x+10);
				switch(j)
				{
				case 9:arm();line(i,k.y+4,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;//1
				case 8:arm();line(i,k.y+3,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;
				case 7:arm();line(i,k.y+2,i,k.y+5,depth);break;
				case 6:arm();line(i,k.y+1,i,k.y+4,depth);break;
				case 5:arm();line(i,k.y+0,i,k.y+3,depth);break;
				case 4:arm();line(i,k.y+0,i,k.y+5,depth);black();line(i,k.y+7,i,k.y+9,depth);break;//boot
				case 3:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y+8,i,k.y+9,depth);break;
				case 2:cap();line(i,k.y+1,i,k.y+8,depth);break;
				case 1:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 0:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
		}
		else if(L%2==1)
		{
			int i;
			for(i=k.x;i<k.x+10;i++)//left hand state two
			{
				int depth=0;int j=i-k.x;
				switch(j)
				{
				case 0:arm();line(i,k.y+4,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;//1
				case 1:arm();line(i,k.y+3,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;
				case 2:arm();line(i,k.y+2,i,k.y+5,depth);break;
				case 3:arm();line(i,k.y+1,i,k.y+4,depth);break;
				case 4:arm();line(i,k.y+0,i,k.y+3,depth);break;
				case 5:arm();line(i,k.y+0,i,k.y+5,depth);black();line(i,k.y+7,i,k.y+9,depth);break;//boot
				case 6:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y+8,i,k.y+9,depth);break;
				case 7:cap();line(i,k.y+1,i,k.y+8,depth);break;
				case 8:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 9:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
			for(i=k.x+10;i<k.x+20;i++)
			{
				int depth=0;int j=i-(k.x+10);
				switch(j)
				{
				case 9:arm();line(i,k.y+8,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+11,depth);break;//1
				case 8:arm();line(i,k.y+6,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+12,depth);break;
				case 7:arm();line(i,k.y+5,i,k.y+8,depth);break;
				case 6:arm();line(i,k.y+4,i,k.y+7,depth);break;
				case 5:arm();line(i,k.y+3,i,k.y+6,depth);break;
				case 4:arm();line(i,k.y+2,i,k.y+7,depth);break;
				case 3:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y-1,i,k.y+1,depth);break;//boot
				case 2:cap();line(i,k.y+1,i,k.y+8,depth);black();line(i,k.y-1,i,k.y+1,depth);break;
				case 1:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 0:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
		}
	}
	else if(R_ENABLE==1)
	{
		if(R%2==0)
		{
			int i;
			for(i=k.x;i<k.x+10;i++)//left hand state one
			{
				int depth=0;int j=i-k.x;
				switch(j)
				{
				case 0:arm();line(i,k.y+8,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+11,depth);break;//1
				case 1:arm();line(i,k.y+6,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+12,depth);break;
				case 2:arm();line(i,k.y+5,i,k.y+8,depth);break;
				case 3:arm();line(i,k.y+4,i,k.y+7,depth);break;
				case 4:arm();line(i,k.y+3,i,k.y+6,depth);break;
				case 5:arm();line(i,k.y+2,i,k.y+7,depth);break;
				case 6:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y-1,i,k.y+1,depth);break;//boot
				case 7:cap();line(i,k.y+1,i,k.y+8,depth);black();line(i,k.y-1,i,k.y+1,depth);break;
				case 8:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 9:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
			for(i=k.x+10;i<k.x+20;i++)
			{
				int depth=0;int j=i-(k.x+10);
				switch(j)
				{
				case 9:arm();line(i,k.y+4,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;//1
				case 8:arm();line(i,k.y+3,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;
				case 7:arm();line(i,k.y+2,i,k.y+5,depth);break;
				case 6:arm();line(i,k.y+1,i,k.y+4,depth);break;
				case 5:arm();line(i,k.y+0,i,k.y+3,depth);break;
				case 4:arm();line(i,k.y+0,i,k.y+5,depth);black();line(i,k.y+7,i,k.y+9,depth);break;//boot
				case 3:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y+8,i,k.y+9,depth);break;
				case 2:cap();line(i,k.y+1,i,k.y+8,depth);break;
				case 1:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 0:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
		}
		else if(R%2==1)
		{
			int i;
			for(i=k.x;i<k.x+10;i++)//left hand state two
			{
				int depth=0;int j=i-k.x;
				switch(j)
				{
				case 0:arm();line(i,k.y+4,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;//1
				case 1:arm();line(i,k.y+3,i,k.y+5,depth);wrist();line(i,k.y+5,i,k.y+7,depth);break;
				case 2:arm();line(i,k.y+2,i,k.y+5,depth);break;
				case 3:arm();line(i,k.y+1,i,k.y+4,depth);break;
				case 4:arm();line(i,k.y+0,i,k.y+3,depth);break;
				case 5:arm();line(i,k.y+0,i,k.y+5,depth);black();line(i,k.y+7,i,k.y+9,depth);break;//boot
				case 6:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y+8,i,k.y+9,depth);break;
				case 7:cap();line(i,k.y+1,i,k.y+8,depth);break;
				case 8:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 9:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
			for(i=k.x+10;i<k.x+20;i++)
			{
				int depth=0;int j=i-(k.x+10);
				switch(j)
				{
				case 9:arm();line(i,k.y+8,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+11,depth);break;//1
				case 8:arm();line(i,k.y+6,i,k.y+9,depth);wrist();line(i,k.y+9,i,k.y+12,depth);break;
				case 7:arm();line(i,k.y+5,i,k.y+8,depth);break;
				case 6:arm();line(i,k.y+4,i,k.y+7,depth);break;
				case 5:arm();line(i,k.y+3,i,k.y+6,depth);break;
				case 4:arm();line(i,k.y+2,i,k.y+7,depth);break;
				case 3:arm();line(i,k.y+1,i,k.y+7,depth);black();line(i,k.y-1,i,k.y+1,depth);break;//boot
				case 2:cap();line(i,k.y+1,i,k.y+8,depth);black();line(i,k.y-1,i,k.y+1,depth);break;
				case 1:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				case 0:cap();line(i,k.y,i,k.y+9,depth);top();line(i,k.y+8,i,k.y+10,depth);break;
				};
			}
		}
	}
	blue();
	/*
	point(k.x,k.y);
	point(k.x+19,k.y);
	point(k.x+19,k.y+12);
	point(k.x,k.y+12);
	*/
}
/*
	else if(U%3==2)//left hand state two
	{
		int i;
		for(i=k.x;i<k.x+10;i++)
		{
			int depth=0;
			int j=i-k.x;

			switch(j)
			{
			case 0:
				arm();line(i,k.y+6,i,k.y+7,depth);
				wrist();line(i,k.y+7,i,k.y+9,depth);break;//1
			case 1:
				arm();line(i,k.y+5,i,k.y+7,depth);
				wrist();line(i,k.y+7,i,k.y+9,depth);break;
			case 2:
				arm();line(i,k.y+4,i,k.y+7,depth);break;
			case 3:
				arm();line(i,k.y+3,i,k.y+6,depth);break;
			case 4:
				arm();line(i,k.y+3,i,k.y+6,depth);break;
			case 5:
				arm();line(i,k.y+2,i,k.y+7,depth);break;
			case 6:
				arm();line(i,k.y+1,i,k.y+7,depth);break;
			case 7:
				cap();line(i,k.y+1,i,k.y+8,depth);break;
			case 8:
				cap();line(i,k.y,i,k.y+9,depth);
				top();line(i,k.y+8,i,k.y+10,depth);break;
			case 9:
				cap();line(i,k.y,i,k.y+9,depth);
				top();line(i,k.y+8,i,k.y+10,depth);break;
			};
		}
		for(i=k.x+10;i<k.x+20;i++)
		{
			int depth=0;
			int j=i-(k.x+10);

			switch(j)
			{
			case 9:
				arm();line(i,k.y+6,i,k.y+7,depth);
				wrist();line(i,k.y+7,i,k.y+9,depth);break;//1
			case 8:
				arm();line(i,k.y+5,i,k.y+7,depth);
				wrist();line(i,k.y+7,i,k.y+9,depth);break;
			case 7:
				arm();line(i,k.y+4,i,k.y+7,depth);break;
			case 6:
				arm();line(i,k.y+3,i,k.y+6,depth);break;
			case 5:
				arm();line(i,k.y+3,i,k.y+6,depth);break;
			case 4:
				arm();line(i,k.y+2,i,k.y+7,depth);break;
			case 3:
				arm();line(i,k.y+1,i,k.y+7,depth);break;
			case 2:
				cap();line(i,k.y+1,i,k.y+8,depth);break;
			case 1:
				cap();line(i,k.y,i,k.y+9,depth);
				top();line(i,k.y+8,i,k.y+10,depth);break;
			case 0:
				cap();line(i,k.y,i,k.y+9,depth);
				top();line(i,k.y+8,i,k.y+10,depth);break;
			};
		}
	}
*/
#endif