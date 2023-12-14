#include <stdio.h>
#include <stdbool.h>

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

int not = 0;      //number of terms

void PrintBoard();
bool GameOver();

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

    printf("To play, please input the spot you would like to play. (TMB;LCR)");
    
    while(!GameOver())
    {

    }
}

void PrintBoard()
{
    printf("%c %c %c\n",TL,TC,TR);
    printf("%c %c %c\n",ML,MC,MR);
    printf("%c %c %c\n",BL,BC,BR);
}

bool GameOver()
{
    //Checking for wins
    if(not < 3)
    {
        return false;
    }
    else
    {
        // checks top row win
        if( TL == TC && TL == TR && TC == TR && TR != '_' )
        {
            return true;
        }
        else if( ML == MC && ML == MR && MC == MR && MR != '_' )
        {
            return true;
        }
        else if( BL == BC && BL == BR && BC == BR && BR != '_' )
        {
            return true;
        }
        else if( TL == ML && BL == TL && ML == BL && TL != '_' )
    }
    return false;
}