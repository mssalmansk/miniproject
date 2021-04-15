#include"stdio.h"
#include"string.h"
#include"time.h"
#include"stdlib.h"
#include"bookcricket.h"
int GetPlayerToss(char player_1[],char player_2[],int oversToplay);
int batting(char battingplayer[],char bowlingplayer[],int oversToplay);
int main()
{
 int i,j,overs,noofovers,player_1Toss,player_2Toss;
 char player_1[50],player_2[50];
 srand(time(NULL));
 printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\tWELCOME TO BOOK CRICKET GAME\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
 printf("Enter Player 1 Name:");
 fflush(stdin);
 gets(player_1);
 printf("Enter Player 2 Name:");
 fflush(stdin);
 gets(player_2);
 printf("Enter\n1 - Fixed Overs\n2 - Play Until Out\n3 - Instructions For Book Cricket\n4 - Exit: ");
 scanf("%d",&noofovers);
  do{
 if(noofovers==1)
 {
  printf("Enter No Of Overs: ");
  scanf("%d",&overs);
  player_1Toss=GetPlayerToss(player_1,player_2,overs); 
  
 }
 else if(noofovers==2)
 {
  player_1Toss=GetPlayerToss(player_1,player_2,0);
 }
 else if(noofovers==3)
 {
  printf("How To Play?\n");
  printf("Until a player Won the toss Follow the Output and give whatever it asks you to give\n");
  printf("Then the Player who won the toss chooses either to Bat or to Bowl\n");
  printf("The Player who chose batting and bowling has to proceed by pressing enter Key one by one\n");
  printf("Where System will generate Random number as runs for both players.Player 1 runs keeps on adding until his runs equals to player 2 runs\n");
  printf("Finally When Player 1 is Out.Till then his runs are his final Score.The Same process will be Conducted for player 2.\n");
  printf("Finally whoever is having Highest Score is the Winner.\n\n");
  printf("For Example: Player 1 Won the Toss And Chose Batting.Then When Player 1 Press Enter Key,A score will be generated for Player 1\n");
  printf("Suppose runs are 5 So Player 1 Score=5.Then Player 2 Also Presses Enter key.Then if he got a Score of 4.So Player 2 Score =4\n");
  printf("As Player 1 Score is not equal to player 2 Score Then Player 1 is not out and hi score will be 5 after 1st ball \n");
  printf("In 2nd ball Player 1 got 3 runs and Player 2 got 4.Since again both are not equal.Player 1 Score=5+3=8\n");
  printf("If in the 3rd Ball Player 1 got 4 runs and Player 2 also got 4 runs Then Player 1 Score is equal to Player 2's Score Then Player 1 is Out\n");
  printf("Then Final Score of player 1 is 8 runs.\n");
  printf("The Same Process is done for Player 2.So Finaly who ever got more score is Winner\n");
 }
 else
 {
  printf("--------------------------------------------Invalid Choice--------------------------------------------\n");
 }
 printf("Enter 1 - Fixed Overs\n2 - Play Until Out\n3 - How to Play?\n4 - Exit: ");
 scanf("%d",&noofovers);
  }while(noofovers>=1 && noofovers<=3);
 return(0);
}

