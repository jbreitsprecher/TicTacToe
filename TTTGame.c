#include <stdio.h>

/*Initializing to '_' for "empty"*/
char TL = '_';    //top left
char TC = '_';    //top center
char TR = '_';    //top right

char ML = '_';    //middle left
char MC = '_';    //middle center
char MR = '_';    //middle right

char BL = '_';    //bottom left
char BC = '_';    //bottom center
char BR = '_';    //bottome right

void PrintBoard();

void main()
{
    char P1Name[] = "placeholder";
    char P2Name[] = "placeholder";

    printf("\nLet's Play Tic-Tac-Toe!\n\n");

    printf("Please Enter Player 1's name:\n");
    scanf("%s", &P1Name);
    printf("\n");

    printf("Please Enter Player 2's name:\n");
    scanf("%s", &P2Name);
    printf("\n");

    //printf("%s", P2Name);

    PrintBoard();
}

void PrintBoard()
{
    printf("%c %c %c\n",TL,TC,TR);
    printf("%c %c %c\n",ML,MC,MR);
    printf("%c %c %c\n",BL,BC,BR);
}
