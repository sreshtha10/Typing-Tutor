#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>


int begin();
int about();
int page_change();
int menu();

/* Delay */
void delay(int sec){
    int milli = 1000*sec;
    clock_t start = clock();
    while (clock() < start + milli)
    {
        ;
    }
}

/* greeting */
void greeting(){
    printf("\n");
    printf(" \t \t \t \t \t \t \t WELCOME to\n");
    printf("\n");
    printf("\n");
}
void art(){
/* ascii art */ 
    system("color 04");
    printf("\t");printf("@@@@@@@  @@@ @@@  @@@@@@@   @@@  @@@  @@@   @@@@@@@@     @@@@@@@  @@@  @@@  @@@@@@@   @@@@@@   @@@@@@@   \n");
    printf("\t");printf("@@@@@@@  @@@ @@@  @@@@@@@@  @@@  @@@@ @@@  @@@@@@@@@     @@@@@@@  @@@  @@@  @@@@@@@  @@@@@@@@  @@@@@@@@ \n");
    printf("\t");printf("  @@!    @@! !@@  @@!  @@@  @@!  @@!@!@@@  !@@             @@!    @@!  @@@    @@!    @@!  @@@  @@!  @@@ \n");
    printf("\t");printf("  !@!    !@! @!!  !@!  @!@  !@!  !@!!@!@!  !@!             !@!    !@!  @!@    !@!    !@!  @!@  !@!  @!@ \n");
    printf("\t");printf("  @!!     !@!@!   @!@@!@!   !!@  @!@ !!@!  !@! @!@!@       @!!    @!@  !@!    @!!    @!@  !@!  @!@!!@! \n");
    printf("\t");printf("  !!!      @!!!   !!@!!!    !!!  !@!  !!!  !!! !!@!!       !!!    !@!  !!!    !!!    !@!  !!!  !!@!@! \n");
    printf("\t");printf("  !!:      !!:    !!:       !!:  !!:  !!!  :!!   !!:       !!:    !!:  !!!    !!:    !!:  !!!  !!: :!!   \n");
    printf("\t");printf("  :!:      :!:    :!:       :!:  :!:  !:!  :!:   !::       :!:    :!:  !:!    :!:    :!:  !:!  :!:  !:!  \n");
}

/* button art */
int button(){
    printf(" \n \n \n \n");
    printf("\t \t \t \t \t \t Press ENTER to continue....");
    return 0;

}


/* Entering the program from greeting*/

int press_enter(){

    int ch ;
    ch =fgetc(stdin);
    if (ch == 0x0A)
    {
        system("cls");
        /* Entered the program */
        /* printf("Entered"); */
        menu();
    }
}

/* begin page*/ 
int begin ()
{
    /* Greeting */
    system("color 03");
    printf("\t \t@@@       @@@@@@@@  @@@@@@@  @@@   @@@@@@         @@@@@@@  @@@ @@@  @@@@@@@   @@@@@@@@  \n");
    printf("\t \t@@@       @@@@@@@@  @@@@@@@   @@  @@@@@@@         @@@@@@@  @@@ @@@  @@@@@@@@  @@@@@@@@  \n");
    printf("\t \t@@!       @@!         @@!    @!   !@@               @@!    @@! !@@  @@!  @@@  @@!       \n");
    printf("\t \t!@!       !@!         !@!         !@!               !@!    !@! @!!  !@!  @!@  !@!       \n");
    printf("\t \t@!!       @!!!:!      @!!         !!@@!!            @!!     !@!@!   @!@@!@!   @!!!:!    \n");
    printf("\t \t!!!       !!!!!:      !!!          !!@!!!           !!!      @!!!   !!@!!!    !!!!!: \n");
    printf("\t \t!!:       !!:         !!:              !:!           !!:     !!:    !!:       !!:     \n");
    printf("\t \t:!:       :!:         :!:             !:!           :!:      :!:    :!:       :!:    \n");
    printf("\t \t:: ::::   :: ::::     ::         :::: ::            ::       ::     ::        :: ::::\n");
    printf("\t \t: :: : :  : :: ::      :          :: : :             :        :      :        : :: ::  \n");
    printf("\n");
    printf("\n");
    printf("\n");






    /*Details */
    printf("Enter your name: \t");
    char name[100];
    gets(name);
    printf("\n \n \n");
    /* Saving */
    int i = 3;
    printf(" \t SAVING.... \n \n \n");
    delay(i);
    printf(" \t SAVED \n \n \n");

    
    

    /* Difficulty level */








    /*Start*/

    printf("Press ENTER to Start \n");
    /* LOAD MAIN TYPING PROTOCOL */




    /* exit */
    printf(" \n \n \n");
    printf("EXIT (Press ESC)");
    int esc;
    esc = getch();
    if (esc == 27 ){
        exit(0);
    }

}

int about(){
    system("color 09");
    printf("\t \t \t");printf("___________________________  _________\n");
    printf("\t \t \t");printf("___    |__  __ )_  __ \\_  / / /__  __/\n");
    printf("\t \t \t");printf("__  /| |_  __  |  / / /  / / /__  /   \n");
    printf("\t \t \t");printf("_  ___ |  /_/ // /_/ // /_/ / _  /    \n");
    printf("\t \t \t");printf("/_/  |_/_____/ \\____/ \\____/  /_/     \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Typing is the basic command to run a computer and your typing speed plays vital role while working in computer to save \n time. Here we have presented a Typing Tutor to measure users typing speed and to enhance their typing speed.  \n \n \n");
    printf("Many people face problems because of slow typing speed and low accuracy. Slow typing results in a lot of time wastage. Using C programming language we are going to make a program that solves this problem. \n Typing tutor will help people to increase the speed and accuracy while typing.");
    printf("\n \n \n \n");
    printf("View code at github (Press 1) \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("EXIT (Press ESC)");
    char opt;
    opt = getch();
    if (opt == '1')
    {
            system("start https://github.com/sreshthamehrotra00/Typing-Tutor");
    }
    int esc;
    esc = getch();
    if (esc == 27 ){
        exit(0);
    }



}




/* MENU */ 
int menu(){
    /* Header */
    system("color 0E");
    printf("\t \t \t \t ,--.   ,--.,------.,--.  ,--.,--. ,--.\n");
    printf("\t \t \t \t |   `.'   ||  .---'|  ,'.|  ||  | |  |\n");
    printf("\t \t \t \t |  |'.'|  ||  `--, |  |' '  ||  | |  |\n");
    printf("\t \t \t \t |  |   |  ||  `---.|  | `   |'  '-'  '\n");
    printf("\t \t \t \t `--'   `--'`------'`--'  `--' `-----' \n");

    printf("\n \n \n \n \n");
    
    printf("\t \t \t \t ** Press the designated number to each of the options to access them \n \n \n \n \n \n");
    /* List */

    printf("\t \t \t \t <1> BEGIN \n \n \n");
    printf("\t \t \t \t <2> STATS \n \n \n");
    printf("\t \t \t \t <3> ABOUT \n \n \n");
    printf("\t \t \t \t <4> EXIT \n \n \n");

    char opt;
    opt = getch();
     /* cases */
    if (opt == '1' )
    {
        system("cls");
        begin();
        getch();
    }
     else
    {
        if (opt == '2')
        {
            system("cls");
            printf("STATS");
        }
        else
        {
            if (opt == '3')
            {
                 system("cls");
                 about();
            }
            else
            {
                if (opt == '4')
                {
                     system("cls");
                    printf("EXIT");
                }   
            }  
        }   
    }        
    return 0;
}
/* main function */
void main()
{
    greeting();
    printf("\n");
    art();
    printf(" \n ");
    button();
    press_enter();
    getch();
}




