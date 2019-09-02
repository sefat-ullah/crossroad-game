#include "menu.h"
#include "track.h"
#include "hearts.h"
#include "car.h"
#include "human.h"
#include "ingamefunctions.h"
#include "bitmap.h"

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	if(M==0)
	{
		starting();
	}
	else if(M==1)
	{
		main_menu();
	}
	else if(M==2)
	{
		options();
	}
	else if(M==3)
	{
		high_score();
	}
	else if(M==4)
	{
		track_system(S);
		life_system(LIFE);

		switch(N)
		{
		case 0:
			switch(S)
			{
			case 1:CAR=16;SPEED=5;break;
			case 2:CAR=20;SPEED=6;break;
			case 3:CAR=24;SPEED=7;break;
			case 4:CAR=28;SPEED=8;break;
			case 5:CAR=32;SPEED=20;break;
			}
			break;
		case 1:
			switch(S)
			{
			case 1:CAR=24;SPEED=5;break;
			case 2:CAR=30;SPEED=6;break;
			case 3:CAR=36;SPEED=7;break;
			case 4:CAR=42;SPEED=8;break;
			case 5:CAR=48;SPEED=20;break;
			}
			break;
		case 2:
			switch(S)
			{
			case 1:CAR=32;SPEED=5;break;
			case 2:CAR=40;SPEED=6;break;
			case 3:CAR=48;SPEED=7;break;
			case 4:CAR=56;SPEED=8;break;
			case 5:CAR=64;SPEED=20;break;
			}
			break;
		}
		load_cars(CAR);
		load_human();

		collision_impact();		
		finish_impact();		

		if(MODE==0)//Normal Game
		{
			crossing_impact();
			score_system(SCORE);			
		}
		else if(MODE==1)//Challenging
		{
			FLAG=1;
			time_system();
			try_system();
			if(LIMIT_1==0 && finish()!=1)
			{
				FLAG=0;
				time_up();
				while(WAIT<=0){}
			}
			if(TRY==0)
				M=5;
		}
		if(LIFE<0)
			M=5;
	}
	else if(M==5)
	{
		game_over();
	}
	else if(M==200)
	{
		exit(0);
	}
	glutSwapBuffers();
}

void keyboard(unsigned char key,int x,int y)
{
	if(M==0){switch(key){default:M=1;break;}}/*Starting*/
	else if(M==1)/*In the Main Menu*/
	{
		switch(key)
		{
		case 'n':M=4;break;
		case 'o':M=2;break;
		case 'h':M=3;break;
		case 'e':M=200;break;
		case '\r':
			if(BAR==1)
				M=4;
			else if(BAR==2)
				M=2;
			else if(BAR==3)
				M=3;
			else if(BAR==4)
				M=200;
			break;
		}
	}
	else if(M==2)/*Option*/
	{
		switch(key)
		{
		case 'e':N=0;break;
		case 'm':N=1;break;
		case 'h':N=2;break;
		case '\r':
			if(OP_BAR==1)
				N<2?N++:N=N%2;
			else if(OP_BAR==2)
				MODE<2?MODE++:MODE=MODE%2;
			else if(OP_BAR==3)
				TYPE==0?TYPE=1:TYPE=0;
			else if(OP_BAR==4)
				M=1;
			break;
		case 27:
			M=1;
			break;
		}
	}
	else if(M==3)/*High Score*/
	{
		switch(key)
		{
		case 'b':M=1;break;
		case 27:M=1;break;
		}
	}
	else if(M==4)/*Ingame*/
	{
		switch(key)
		{
		case 'n':
			LIMIT_1=100;
			LIMIT_2=350;
			LIMIT_3=400;
			LIMIT_4=450;
			LIMIT_5=500;
			TRY=3;
			if(S<5)
				S++;
			else
			{
				N<2?N++:N=N%2;
				S=1;
			}
			break;
		case 's':
			SCORE++;break;
		case 'l':
			LIFE++;break;
		case 'k':
			LIFE--;break;
		}
	}
	else if(M==5){switch(key){default:M=1;break;}}
}

void special(int key,int x,int y)
{
	if(M==1)/* In the Main Menu */
	{
		switch(key)
		{
		case GLUT_KEY_UP:
			BAR>1?BAR--:BAR=4;
			break;
		case GLUT_KEY_DOWN:
			BAR<4?BAR++:BAR=1;
			break;
		}
	}
	if(M==2)/* In the Option Menu */
	{
		if(MODE==2)
		{
			switch(key)
			{
			case GLUT_KEY_UP:
				OP_BAR>1?OP_BAR--:OP_BAR=4;
				break;
			case GLUT_KEY_DOWN:
				OP_BAR<4?OP_BAR++:OP_BAR=1;
				break;
			}
		}
		else
		{
			switch(key)
			{
			case GLUT_KEY_UP:
				if(OP_BAR==0)
					OP_BAR=4;
				else if(OP_BAR==4)
					OP_BAR=2;
				else if(OP_BAR==2)
					OP_BAR=1;
				else if(OP_BAR==1)
					OP_BAR=4;
				break;
			case GLUT_KEY_DOWN:
				if(OP_BAR==0)
					OP_BAR=1;
				else if(OP_BAR==1)
					OP_BAR=2;
				else if(OP_BAR==2)
					OP_BAR=4;
				else if(OP_BAR==4)
					OP_BAR=1;
				break;
			}
		}
	}
	if(M==3)/* In the High Score List */
	{
		switch(key)
		{
		case GLUT_KEY_UP:
			if(H_BAR==0)
				H_BAR=1;
			break;
		case GLUT_KEY_DOWN:
			if(H_BAR==0)
				H_BAR=1;
			break;
		}
	}


	if((MODE==0 || FLAG==1)&& M==4){
	switch(key)
	{
	case GLUT_KEY_UP:
		U_ENABLE=1;D_ENABLE=0;L_ENABLE=0;R_ENABLE=0;
		U++;
		n=n+SPEED;
		break;
	case GLUT_KEY_DOWN:
		U_ENABLE=0;D_ENABLE=1;L_ENABLE=0;R_ENABLE=0;
		D++;
		n=n-SPEED;
		break;
	case GLUT_KEY_LEFT:
		U_ENABLE=0;D_ENABLE=0;L_ENABLE=1;R_ENABLE=0;
		L++;
		m=m-SPEED;
		break;
	case GLUT_KEY_RIGHT:
		U_ENABLE=0;D_ENABLE=0;L_ENABLE=0;R_ENABLE=1;
		R++;
		m=m+SPEED;
		break;
	}
	}
	glutPostRedisplay();
}
void mouse(int button,int state,int x,int y)
{
	if(M==0)/* Starting */
	{
		if(state==GLUT_DOWN)
			M=1;
	}
	else if(M==1)/* In the Main Menu */
	{
		if(y>420 && y<=460 && state==GLUT_DOWN)
			M=4;
		else if(y>460 && y<=500 && state==GLUT_DOWN)
			M=2;
		else if(y>500 && y<=540 && state==GLUT_DOWN)
			M=3;
		else if(y>540 && y<=580 && state==GLUT_DOWN)
			M=200;
	}
	else if(M==2)/* In the Option Menu */
	{
		if(y>270 && y<=310 && state==GLUT_DOWN)
			N<2?N++:N=N%2;
		else if(y>310 && y<=350 && state==GLUT_DOWN)
			MODE<2?MODE++:MODE=MODE%2;
		else if(y>350 && y<=390 && MODE==2 && state==GLUT_DOWN)
			TYPE==0?TYPE=1:TYPE=0;
		else if(y>570 && y<=610 && state==GLUT_DOWN)
			M=1;
	}
	else if(M==3)/* In the High Score List */
	{
		if(y>570 && y<=610 && state==GLUT_DOWN)
			M=1;
	}
	glutPostRedisplay();
}
void mouse_active(int x,int y)
{
	glutPostRedisplay();
}
void mouse_passive(int x,int y)
{
	if(M==1)/* In the Main Menu */
	{
		if(y>420 && y<=460)
			BAR=1;
		else if(y>460 && y<=500)
			BAR=2;
		else if(y>500 && y<=540)
			BAR=3;
		else if(y>540 && y<=580)
			BAR=4;
		else
			BAR=0;
	}
	else if(M==2)/* In the Option Menu */
	{
		if(y>270 && y<=310)
			OP_BAR=1;
		else if(y>310 && y<=350)
			OP_BAR=2;
		else if(y>350 && y<=390 && MODE==2)
			OP_BAR=3;
		else if(y>570 && y<=610)
			OP_BAR=4;
		else
			OP_BAR=0;
	}
	else if(M==3)/* In the High Score List */
	{
		if(y>570 && y<=610)
			H_BAR=1;
		else
			H_BAR=0;
	}
	printf("%d %d\n",x,y);
	glutPostRedisplay();
}

void time(int value)
{
	p=p+1;
	q=q+.8;

	if(M==4 && MODE==1 && FLAG==1)
	{
		switch(S)
		{
		case 1:LIMIT_1--;break;
		case 2:LIMIT_2--;break;
		case 3:LIMIT_3--;break;
		case 4:LIMIT_4--;break;
		case 5:LIMIT_5--;break;
		}
	}
	if(M==4 && MODE==1 && FLAG==0)
	{
		WAIT--;
		if(WAIT==0)
		{
			FLAG=1;
			LIMIT_1=100;
			LIMIT_2=350;
			LIMIT_3=400;
			LIMIT_4=450;
			LIMIT_5=500;
			WAIT=30;
			TRY--;
			m=0;
			n=0;
			U_ENABLE=1;
		}
	}

	glutPostRedisplay();
	glutTimerFunc(100,time,0);
}

int main()
{
	int i;
	srand(clock());
	for(i=0;i<=20;i++)
		random[i]=rand()%100+1;
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1000,700);
	glutCreateWindow("First");

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(special);
	
	/*Mouse*/
	glutMouseFunc(mouse);
	glutMotionFunc(mouse_active);
	glutPassiveMotionFunc(mouse_passive);
	
	glutTimerFunc(100,time,0);

	glutMainLoop();
	return 0;
}