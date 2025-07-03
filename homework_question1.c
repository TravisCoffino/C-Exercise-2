#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char board[3][3];
  int i,j, turn=1,win=0,position,winner=0; 
   printf("\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
            board[i][j]='0';
                printf("%c", board[i][j]);
            }
            printf("\n");
            if (i < 2) printf("---------\n");
        }
  while(win==0){
   
    // printf("")
  if(turn%2==1){
    printf("Player 'X's turn, enter a position by row and column: "); scanf("%d %d",&i,&j);
    if(board[i][j]=='X'||board[i][j]=='O'){
      printf("Invalid position!\n");
      printf("Player 'X's turn, enter a position by row and column: "); scanf("%d %d",&i,&j);
    }
    board[i][j]='X';
    printf("\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
           
                printf("%c", board[i][j]);
            }
            printf("\n");
            if (i < 2) printf("---------\n");}
    turn++;
  }
  else if(turn%2==0){
    printf("Player 'O's turn, enter a position by row and column: "); scanf("%d %d",&i,&j);
    if(board[i][j]=='X'||board[i][j]=='O'){
      printf("Invalid position!\n");
      printf("Player 'O's turn, enter a position by row and column: "); scanf("%d %d",&i,&j);
    }
    board[i][j]='O';
    printf("\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
           
                printf("%c", board[i][j]);
            }
            printf("\n");
            if (i < 2) printf("---------\n");}
    turn++;
  }
if((board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')||(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')||(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')||(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')||(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')){
printf("'X' has won!\n'");
break;
}
else if((board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')||(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')||(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')||(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')||(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')){
printf("'O' has won!\n'");
break;
}
  }
}