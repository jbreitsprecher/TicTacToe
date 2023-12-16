#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

int not = 0;      //number of turns
int Winner = 0;

bool Draw = false;//if there's a draw

void PrintBoard();
bool GameOver();

void main()
{
    char P1Name[] = "placeholder";
    char P2Name[] = "placeholder";
    char spotPick[] = "placeholder";

    int WhosTurn = 1;

    printf("\nLet's Play Tic-Tac-Toe!\n\n");

    printf("Please Enter Player 1's name:\n");
    scanf("%s", &P1Name);
    printf("\n");

    printf("Please Enter Player 2's name:\n");
    scanf("%s", &P2Name);
    printf("\n");

    //printf("%s", P2Name);

    PrintBoard();

    printf("To play, please input the spot you would like to play. (TMB;LCR)\n");
    
    do
    {
        //if the game is happening and not over
        if( !GameOver() && Draw == false )
        {
            //printf("PickedSpot is: %s\n", spotPick);

            if( WhosTurn == 1 )
            {
                printf("Player 1, please enter your spot:\n");
            }

            else
            {
                printf("Player 2, please enter your spot:\n");
            }

            scanf("%s", &spotPick);

            //if( spotPick == "TL" && TL == '_' )
            if( strcmp(spotPick, "TL") == 0 && TL == '_' )
            {
                if( WhosTurn == 1 )
                {
                    TL = 'X';
                    not++;
                    WhosTurn = 2;
                    
                }

                else
                {
                    TL = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "TC") == 0 && TC == '_' )
            {
                if(WhosTurn == 1)
                {
                    TC = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    TC = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "TR") == 0 && TR == '_' )
            {
                if(WhosTurn == 1)
                {
                    TR = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    TR = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "ML") == 0 && ML == '_' )
            {
                if(WhosTurn == 1)
                {
                    ML = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    ML = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "MC") == 0 && MC == '_' )
            {
                if(WhosTurn == 1)
                {
                    MC = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    MC = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "MR") == 0 && MR == '_' )
            {
                if(WhosTurn == 1)
                {
                    MR = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    MR = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "BL") == 0 && BL == '_' )
            {
                if(WhosTurn == 1)
                {
                    BL = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    BL = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "BC") == 0 && BC == '_' )
            {
                if(WhosTurn == 1)
                {
                    BC = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    BC = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else if( strcmp(spotPick, "BR") == 0 && BR == '_' )
            {
                if(WhosTurn == 1)
                {
                    BR = 'X';
                    not++;
                    WhosTurn = 2;
                }
                else
                {
                    BR = 'O';
                    not++;
                    WhosTurn = 1;
                }
            }

            else
            {
                printf("\nDone made an error amigo, try again!\n");
            }

            PrintBoard();
            GameOver();
        }        
    } while( !GameOver() && Draw == false );
    
    if(Draw == true)
    {
        printf("The game ended as a draw!");
        //PrintBoard();
    }

    else if( GameOver() )
    {
        if(Winner == 1)
        {
            printf("%s Won!\n\n", P1Name );
        }

        else
        {
            printf("%s Won!\n\n", P2Name );
        }
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
    //cant win in less than 3 moves so why waste time checking
    if(not < 3)
    {
        return false;
    }

    else
    {
        // checks top row win
        if( TL == TC && TL == TR && TC == TR && TR != '_' )
        {
            if( TR == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }

            return true;
        }

        //checks middle row win
        else if( ML == MC && ML == MR && MC == MR && MR != '_' )
        {
            if( ML == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }
            return true;
        }

        //checks bottom row win
        else if( BL == BC && BL == BR && BC == BR && BR != '_' )
        {
            if( BL == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }
            return true;
        }

        //checks left column win
        else if( TL == ML && BL == TL && ML == BL && TL != '_' )
        {
            if( TL == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }
            return true;
        }

        //checks middle column win
        else if( TC == MC && BC == TC && MC == BC && TC != '_' )
        {
            if( TC == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }

            return true;
        }

        //checks right column win
        else if( TR == MR && BR == TR && MR == BR && TR != '_' )
        {
            if( TR == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }
            return true;
        }

        //checks diagonal top left to bottom right win
        else if( TL == MC && BR == TL && MC == BR && TL != '_' )
        {
            if( TL == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }
            return true;
        }

        //checks diagonal top right to bottom left win
        else if( TR == MC && BL == TR && MC == BL && TR != '_' )
        {
            if( TR == 'X' )
            {
                Winner = 1;
            }

            else
            {
                Winner = 2;
            }
            return true;
        }
        
        //checks for draw by checking not
        else if( not >= 9)
        {
            Draw = true;
            return true;
        }

        else
        {
            return false;
        }
    }

    return false;

}