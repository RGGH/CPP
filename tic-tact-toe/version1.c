#include<stdio.h>

char brd[10] = {'o','-','-','-','-','-','-','-','-','-'};
int played = 0;
int result = 0;

void boardRefresh(){
    int i=0; 
    printf("%c | %c | %c\n",brd[i+1],brd[i+2],brd[i+3]);  
    printf("%c | %c | %c\n",brd[i+4],brd[i+5],brd[i+6]); 
    printf("%c | %c | %c\n",brd[i+7],brd[i+8],brd[i+9]);             
    }

void playX(){
    int num;
    printf("\nPlayer X - enter a square, top left = 1, bottom right = 9\n");
    scanf("%d",&num);
    brd[num] = 'X';  

}

void play0(){
    int num;
    printf("\nPlayer 0 - enter a square, top left = 1, bottom right = 9\n");
    scanf("%d",&num);
    brd[num] = '0';  
}


void checkWin(char w){

    // check 3 horiz
    if (brd[1]==w && brd[2]==w && brd[3]==w) { 
        printf("\n%c wins\n\n", w);
        result=1;
        }
    if (brd[4]==w && brd[5]==w && brd[6]==w) { 
        printf("\n%c wins\n\n", w);
        result=1;
        }
    if (brd[7]==w && brd[8]==w && brd[9]==w) { 
        printf("\n%c wins\n\n",w);
        result=1;
        }

    // check 3 vert
        if (brd[1]==w && brd[4]==w && brd[7]==w) { 
        printf("\n%c wins\n\n", w);
        result=1;
        }
    if (brd[2]==w && brd[5]==w && brd[8]==w) { 
        printf("\n%c wins\n\n", w);
        result=1;
        }
    if (brd[3]==w && brd[6]==w && brd[9]==w) { 
        printf("\n%c wins\n\n",w);
        result=1;
        } 

    // check diagonal each way
    if (brd[1]==w && brd[5]==w && brd[9]==w) { 
        printf("\n%c wins\n\n", w);
        result=1;
        }
    if (brd[3]==w && brd[5]==w && brd[7]==w) { 
        printf("\n%c wins\n\n",w);
        result=1;
        } 
}

int main(){
    
    boardRefresh();

    char w;

    /* start game */
    while (result ==0 && played < 9){

    // play X    
    playX();
    played ++;
    boardRefresh();
    w = 'X';
    checkWin(w);
    if (result == 1){
        break;
    }
    
    // play 0
    play0();
    played ++;
    boardRefresh();
    w = '0';
    checkWin(w);
    if (result == 1){
        break;
    }
}}


