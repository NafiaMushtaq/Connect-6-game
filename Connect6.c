
#include <stdio.h>

boarddraw();
wincondition(int pn);
int board[6][6]={{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};
main()
{
printf("\n\t connect 3\t\n\n ");
boarddraw();
int a,b,c;
for (a=1;a<=36;a++)
{
if(a%2!=0)
{
if(c==0||c==1||c==2||c==3||c==4||c==5){
printf("\n\tplayer 1 Turn:\t");
scanf("%d",&c);
for(b=5;b>=0;b--){
if(board[b][c]==0){
board[b][c]=1;
break;
}
}
boarddraw();
wincondition(1);
}else{
}
}else{
if(c==0||c==1||c==2||c==3||c==4||c==5){
printf("\n\tplayer 2 Turn:\t");
scanf("%d",&c);
for(b=5;b>=0;b--){
if(board[b][c]==0){
board[b][c]=2;
break;
}
}
boarddraw();
wincondition(2);
}else{
}
}
}
}
boarddraw()
{
printf("\n\t|%d|%d|%d|%d|%d|%d|\n\t-------------\n\t|%d|%d|%d|%d|%d|%d|\n\t-------------\n\t|%d|%d|%d|%d|%d|%d|\n\t-------------\n\t|%d|%d|%d|%d|%d|%d|\n\t-------------\n\t|%d|%d|%d|%d|%d|%d|\n\t-------------\n\t|%d|%d|%d|%d|%d|%d|\n\t-------------\n\t 0 1 2 3 4 5\n",
board[0][0],board[0][1],board[0][2],
board[0][3],board[0][4],board[0][5],board[1][0],board[1][1],board[1][2],board[1][3],
board[1][4],board[1][5],board[2][0],board[2][1],board[2][2],board[2][3],board[2][4],
board[2][5],board[3][0],board[3][1],board[3][2],board[3][3],board[3][4],board[3][5],
board[4][0],board[4][1],board[4][2],board[4][3],board[4][4],board[4][5],board[5][0],
board[5][1],board[5][2],board[5][3],board[5][4],board[5][5]);
}
wincondition(int pn)
{
if (board[2][0]==pn && board[1][1]==pn && board[0][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][0]==pn && board[2][1]==pn && board[1][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][1]==pn && board[1][2]==pn && board[0][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][0]==pn && board[3][1]==pn && board[2][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][1]==pn && board[2][2]==pn && board[1][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][2]==pn && board[1][3]==pn && board[0][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][0]==pn && board[4][1]==pn && board[3][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][1]==pn && board[3][2]==pn && board[2][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][2]==pn && board[2][3]==pn && board[1][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][3]==pn && board[1][4]==pn && board[0][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][1]==pn && board[4][2]==pn && board[3][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][2]==pn && board[3][3]==pn && board[2][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][3]==pn && board[2][4]==pn && board[1][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][2]==pn && board[4][3]==pn && board[3][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][3]==pn && board[3][4]==pn && board[2][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][3]==pn && board[4][4]==pn && board[3][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}
else if (board[0][0]==pn && board[0][1]==pn && board[0][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][3]==pn && board[0][4]==pn && board[0][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][1]==pn && board[0][2]==pn && board[0][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][2]==pn && board[0][3]==pn && board[0][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][0]==pn && board[1][1]==pn && board[1][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][1]==pn && board[1][2]==pn && board[1][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][2]==pn && board[1][3]==pn && board[1][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][3]==pn && board[1][4]==pn && board[1][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][0]==pn && board[2][1]==pn && board[2][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][1]==pn && board[2][2]==pn && board[2][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][2]==pn && board[2][3]==pn && board[2][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][3]==pn && board[2][4]==pn && board[2][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][0]==pn && board[3][1]==pn && board[3][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][1]==pn && board[3][2]==pn && board[3][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][2]==pn && board[3][3]==pn && board[3][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][3]==pn && board[3][4]==pn && board[3][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][0]==pn && board[4][1]==pn && board[4][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][1]==pn && board[4][2]==pn && board[4][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][2]==pn && board[4][3]==pn && board[4][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[4][3]==pn && board[4][4]==pn && board[4][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][0]==pn && board[5][1]==pn && board[5][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][1]==pn && board[5][2]==pn && board[5][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][2]==pn && board[5][3]==pn && board[5][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[5][3]==pn && board[5][4]==pn && board[5][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}
else if (board[0][0]==pn && board[1][0]==pn && board[2][0]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][0]==pn && board[2][0]==pn && board[3][0]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][0]==pn && board[3][0]==pn && board[4][0]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][0]==pn && board[4][0]==pn && board[5][0]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][1]==pn && board[1][1]==pn && board[2][1]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][1]==pn && board[2][1]==pn && board[3][1]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][1]==pn && board[3][1]==pn && board[4][1]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][1]==pn && board[4][1]==pn && board[5][1]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][2]==pn && board[1][2]==pn && board[2][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][2]==pn && board[2][2]==pn && board[3][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][2]==pn && board[3][2]==pn && board[4][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][2]==pn && board[4][2]==pn && board[5][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][3]==pn && board[1][3]==pn && board[2][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][1]==pn && board[3][2]==pn && board[3][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][3]==pn && board[3][3]==pn && board[4][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][3]==pn && board[4][3]==pn && board[5][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][4]==pn && board[1][4]==pn && board[2][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][4]==pn && board[2][4]==pn && board[3][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][4]==pn && board[3][4]==pn && board[4][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][4]==pn && board[4][4]==pn && board[5][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][5]==pn && board[1][5]==pn && board[2][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][5]==pn && board[2][5]==pn && board[3][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][5]==pn && board[3][5]==pn && board[4][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][5]==pn && board[4][5]==pn && board[5][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}
else if (board[3][0]==pn && board[4][1]==pn && board[5][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][0]==pn && board[3][1]==pn && board[4][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][1]==pn && board[4][2]==pn && board[5][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][0]==pn && board[2][1]==pn && board[3][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][1]==pn && board[3][2]==pn && board[4][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][2]==pn && board[4][3]==pn && board[5][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][0]==pn && board[1][1]==pn && board[2][2]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][1]==pn && board[2][2]==pn && board[3][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][2]==pn && board[3][3]==pn && board[4][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[3][3]==pn && board[4][4]==pn && board[5][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][1]==pn && board[1][2]==pn && board[2][3]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][2]==pn && board[2][3]==pn && board[3][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[2][3]==pn && board[3][4]==pn && board[4][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][2]==pn && board[1][3]==pn && board[2][4]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[1][3]==pn && board[2][4]==pn && board[3][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}else if (board[0][3]==pn && board[1][4]==pn && board[2][5]==pn)
{
printf("\n\t player %d Won",pn);
getch();
exit(0);
}
}
