#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int h,w,height=20,width=20;
int gameover,score;
int x,y,fruitx,fruity,flag;

void setup(){
	gameover=0;
	x=height/2;
	y=width/2;
	label1:
	fruitx=rand()%20;
	if(fruitx==0)
	goto label1;
	label2:
	fruity=rand()%20;
	if(fruity==0)
	goto label2;
	score=0;	
}

void draw(){
	system("cls");
	for(h=0;h<height;h++){
		for(w=0;w<width;w++){
			if(h==0||h==width-1||w==0||w==height-1){
				printf("+");
			}
			else{
				if(h==x && w==y)
				printf("0");
				else if(h==fruitx && w==fruity)
				printf("*");
				else 
				printf(" ");
			}
			
		}
		printf("\n");
	}
	 printf("score = %d", score);
    printf("\n");
    printf("press X to quit the game\n");
}

void input(){
	if(kbhit()){
		switch(getch()){
			case 'a':
				flag=1;
				break;
			case 's':
				flag=2;
				break;
			case 'd':
				flag=3;
				break;
			case 'w':
				flag=4;
				break;
			case 'x':
				gameover=1;
				break;
		}
	}
}

void logic()
{
    sleep(0.01);
    switch (flag) {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }
    if (x < 0 || x > height
        || y < 0 || y > width)
        gameover = 1;
    if (x == fruitx && y == fruity) {
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0)
            goto label3;
    label4:
        fruity = rand() % 20;
        if (fruity == 0)
            goto label4;
        score += 10;
    }
}

void main(){
	int m,n;
	setup();
	while(!gameover){
		draw();
		input();
		logic();
	}
}
