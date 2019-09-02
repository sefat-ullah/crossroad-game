#ifndef INGAMEFUNCTIONS_H
#define INGAMEFUNCTIONS_H



int FORWARD, REVERSE;

void fence()
{
	blue();
	line(0,H-100,W,H-100,0);
	red();
	line(0,H-120,W,H-120,0);
}

void title(int k)
{
	char s[21];
	convert(k,s,'s');

	violet();
	draw_text(400,H-50,"STAGE");
	draw_text(430,H-75,s);
	switch(N)
	{
	case 0:green();	draw_text(W-100,H-80,"EASY");break;
	case 1:blue();	draw_text(W-135,H-80,"MEDIUM");break;
	case 2:red();	draw_text(W-100,H-80,"HARD");break;
	}
}

void track_system(int k)//Mission 1 to 5
{
	fence();
	title(k);

	switch(k)
	{
	case 1:track(4);break;
	case 2:track(5);break;
	case 3:track(6);break;
	case 4:track(7);break;
	case 5:track(8);break;
	}
}
bmw b[201];
void load_cars(int k)
{
	//

	int forward=k/2,reverse=k/2;
	int u,v,w,z;
	switch(S)
	{
	case 1:u=50+12;v=109+12;w=128;z=k/8;break;/*z=forward/4*/
	case 2:u=45+7;v=93+7;w=104;z=k/10;break;
	case 3:u=40+4;v=81+4;w=88;z=k/12;break;
	case 4:u=35+2;v=71+2;w=76;z=k/14;break;
	case 5:u=30+1;v=63+1;w=68;z=k/16;break;
	}
	/*u=initial	+						(width-30)/2	First lane */
	/*v=initial	+	width+barrier	+	(width-30)/2	Second lane */
	/*w=			width*2+barrier	+	rest			Distance */
	/*z=No. of cars per lane*/

	int i,j,count=1;
	for(j=1;j<=S+3;j++)
	{
		int x=random[j];/*critical*/
		for(i=1;i<=z;i++)
		{
			b[count].x[1]=x;
			b[count].y=u;
			b[count].speed=random[j]/10+1;/*critical*/

			x=x+(W-65)/z;
			count++;
		}
		u=u+w;
	}
	for(i=1;i<count;i++)
	{
		b[i].x[1]=b[i].x[1]+p*b[i].speed;
		int j;
		for(j=2;j<=65;j++)
			b[i].x[j]=b[i].x[j-1]+1;
		for(j=1;j<=65;j++)
		{
			if(b[i].x[j]>W)
				b[i].x[j]=(int)b[i].x[j]%W;
		}
		green_bmw(b[i]);
	}

	FORWARD=count-1;

	int pup=count;

	for(j=1;j<=S+3;j++)
	{
		int x=random[20-j];/*critical*/
		for(i=1;i<=z;i++)
		{
			b[count].x[1]=x;
			b[count].y=v;
			b[count].speed=random[20-j]/10+1;/*critical*/

			x=x+(W-65)/z;
			count++;
		}
		v=v+w;
	}
	count--;/*No. of actual cars*/
	REVERSE=count-FORWARD;

	int zzz=INF;

	for(i=pup;i<=count;i++)
	{
		b[i].x[1]=b[i].x[1]-p*b[i].speed;
		int j;
		for(j=2;j<=65;j++)
			b[i].x[j]=b[i].x[j-1]+1;
		for(j=1;j<=65;j++)
		{
			if(b[i].x[j]<0)
			{
				b[i].x[j]=(int)(b[i].x[j]+W*zzz)%W;
				zzz++;
			}
		}
		green_bmw_r(b[i]);
	}
	/* Destroy rest of the cars */
	for(i=count+1;i<=200;i++)
	{
		for(j=0;j<=65;j++)
			b[i].x[j]=0;
		b[i].y=0;
		b[i].speed=0;
	}
}

void life_system(int k)
{
	hearts h[21];
	int i,x=W-50,y=H-50;
	
	for(i=1;i<=k;i++)
	{
		h[i].x=x;
		h[i].y=y;
		draw_hearts(h[i]);
		x=x-25;
	}
}

void score_system(int k)
{
	char s[21];
	convert(k,s,'s');
	
	blue();
	draw_text(25,H-50,"SCORE : ");
	black();
	draw_text(130,H-50,s);
}
void time_system()
{
	int k,fraction;
	switch(S)
	{
	case 1:k=LIMIT_1/10,fraction=LIMIT_1%10;break;
	case 2:k=LIMIT_2/10,fraction=LIMIT_2%10;break;
	case 3:k=LIMIT_3/10,fraction=LIMIT_3%10;break;
	case 4:k=LIMIT_4/10,fraction=LIMIT_4%10;break;
	case 5:k=LIMIT_5/10,fraction=LIMIT_5%10;break;
	}

	char s[21];
	char f[21];
	convert(k,s,'b');
	convert(fraction,f,'s');

	deep_blue();
	draw_text(25,H-80,"TIME : ");
	violet();
	draw_text(100,H-80,s);
	draw_text(125,H-80,".");
	draw_text(130,H-80,f);
}
human h;/*0~19 width & 0~12 height*/
void load_human()
{
	//
	h.x=450+m;
	h.y=10+n;
	draw_human(h);
}

int collision()
{
	int i,detect=0;
	for(i=0;i<=200;i++)
	{
		if(h.x>b[i].x[1] && h.x<b[i].x[65] || h.x+19>b[i].x[1] && h.x+19<b[i].x[65])
		{
			if(h.y>b[i].y && h.y<b[i].y+30 || h.y+12>b[i].y && h.y+12<b[i].y+30)
				detect=1;
		}
	}
	return detect;
}
void wait(int k)
{
	clock_t t;
	for(t=clock()+k*1000;clock()<t;){}
}

void collision_impact()
{
	int i;
	if(collision()==1)
	{
		red();draw_text(50,0,"Collision Detected");
		LIFE--;

		red_back();
		
		glutPostRedisplay();

		m=0;n=0;
		U_ENABLE=1;
		load_human();

	}
	/*
	for(i=0;i<=200;i++)
	{
		red();
		glPointSize(2);
		point(b[i].x[1],b[i].y);
		point(b[i].x[65],b[i].y);
		point(b[i].x[65],b[i].y+30);
		point(b[i].x[1],b[i].y+30);
	}
	*/
	printf("%d %d\n",FORWARD,REVERSE);
}

int finish()
{
	if(h.y>580)
		return 1;
}

void finish_impact()
{
	if(finish()==1)
	{
		if(S<5)
			S++;
		else
		{
			N<2?N++:N=N%2;
			S=1;
		}
		LIMIT_1=100;
		LIMIT_2=350;
		LIMIT_3=400;
		LIMIT_4=450;
		LIMIT_5=500;
		TRY=3;
		m=0,n=0;
		load_human();
	}
}

void crossing_impact()
{
	switch(S)
	{
	case 1:if(F_11==0){if(h.y>700-600){SCORE+=2000;F_11=1;}}//60,65
		   if(F_12==0){if(h.y>700-540){SCORE+=4000;F_12=1;}}
		   if(F_13==0){if(h.y>700-475){SCORE+=2000;F_13=1;}}
		   if(F_14==0){if(h.y>700-415){SCORE+=4000;F_14=1;}}
		   if(F_15==0){if(h.y>700-345){SCORE+=2000;F_15=1;}}
		   if(F_16==0){if(h.y>700-285){SCORE+=4000;F_16=1;}}
		   if(F_17==0){if(h.y>700-215){SCORE+=2000;F_17=1;}}
		   if(F_18==0){if(h.y>700-155){SCORE+=4000;F_18=1;}}
		   break;
	case 2:if(F_21==0){if(h.y>700-615){SCORE+=2000;F_21=1;}}//50,55
		   if(F_22==0){if(h.y>700-565){SCORE+=4000;F_22=1;}}
		   if(F_23==0){if(h.y>700-510){SCORE+=2000;F_23=1;}}
		   if(F_24==0){if(h.y>700-460){SCORE+=4000;F_24=1;}}
		   if(F_25==0){if(h.y>700-405){SCORE+=2000;F_25=1;}}
		   if(F_26==0){if(h.y>700-355){SCORE+=4000;F_26=1;}}
		   if(F_27==0){if(h.y>700-300){SCORE+=2000;F_27=1;}}
		   if(F_28==0){if(h.y>700-250){SCORE+=4000;F_28=1;}}
		   if(F_29==0){if(h.y>700-195){SCORE+=4000;F_29=1;}}
		   if(F_210==0){if(h.y>700-145){SCORE+=4000;F_210=1;}}
		   break;
	case 3:break;
	case 4:break;
	case 5:break;
	}
}

struct box
{
	float x,y;
};

void draw_box(box k)
{
	draw_bar(k.x,k.y,k.x+20,k.y,k.x+20,k.y+20,k.x,k.y+20);
}

void try_system()
{
	box b[21];
	int i,x=W-400,y=H-50;
	
	for(i=1;i<=TRY;i++)
	{
		b[i].x=x;
		b[i].y=y;
		draw_box(b[i]);
		x=x-25;
	}
}

void time_up()
{
	blue_back();
	m=0,n=0;
	draw_text(200,20,"TIME UP");
}

#endif