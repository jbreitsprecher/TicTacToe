#include <stdio.h>

/*Initializing to 'e' for "empty"*/
char TL = 'e';    //top left
char TC = 'e';    //top center
char TR = 'e';    //top right

char ML = 'e';    //middle left
char MC = 'e';    //middle center
char MR = 'e';    //middle right

char BL = 'e';    //bottom left
char BC = 'e';    //bottom center
char BR = 'e';    //bottome right

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
