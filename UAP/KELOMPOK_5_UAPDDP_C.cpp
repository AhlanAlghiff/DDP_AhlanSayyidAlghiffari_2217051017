#include <string>
#include <ncurses.h>
#include <iostream>
#include <Windows.h> //system
#include <stdio.h> //printf

/*
  PROGRAM KELOMPOK 5 - KELAS C - S1 ILMU KOMPUTER
  ANGGOTA :
  1. AHLAN SAYYID ALGHIFFARI (2217051017)
  2. GHULAM DARIS FAUZAN (2217051044)
  3. TRIO SAKTI ARDIKA (2257051012)
*/

using namespace std;

int centerPrint( int y, string teks )
{
    int x = ( COLS - teks.size() ) / 2;
    //teks.size() berfungsi untuk mengeluarkan size/jumlah dari string "text"

    mvprintw( y, x, teks.c_str() );
    //teks.c_str berfungsi untuk menulis kembali inputan pada variabel "teks"

    return x;
}



void loading()
{
    system("COLOR 0e");
    system("cls");
    printf("\e[?25l");

    //Set ASCII to print special character.
    //Code page 437
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;

    cout << "\n\n\n\n\n\t\t\t\t\t\t\tLoading...";
    cout << "\n\n\t\t\t\t\t\t";

    for(int i = 0; i < 25; i++)
        cout << (char)bar1;

    cout <<"\r";
    cout <<"\t\t\t\t\t\t";
    for(int i = 0; i < 25; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }

    cout<<"\n\t\t\t\t\t\t";
    system("Pause");
    system("cls");

}

void about()
{	
	printw( "\n" );
    for ( int i = 0; i < COLS; i++ )
	{
    	printw( "=" );
	}
	
	centerPrint( 2, "END" );
	
	printw( "\n" );
    for ( int i = 0; i < COLS; i++ ){
    	printw( "=" );	
	}
        
	centerPrint( 4, "Program ini dibuat untuk memenuhi tugas UAS Mata kuliah Dasar-Dasar Pemrograman" );
	centerPrint( 5, "oleh Kelompok 4 Kelas C" );
	centerPrint( 6, "S1-Ilmu Komputer" );
	centerPrint( 7, "Universitas Lampung\n" );
	
 	for ( int i = 0; i < COLS; i++ )
	{
  	printw( "=" );
 	}
    
	centerPrint( 10, "Terima Kasih! dan Sampai Jumpa! <3" );
	
	printw( "\n" );
    for ( int i = 0; i < COLS; i++ )
	{
    	printw( "=" );	
	}
        	
}

int papan_game()
{
    centerPrint( 4, "#########" );
    centerPrint( 5, "#| | | |#" );
    centerPrint( 6, "#|-+-+-|#" );
    centerPrint( 7, "#| | | |#" );
    centerPrint( 8, "#|-+-+-|#" );
    centerPrint( 9, "#| | | |#" );
    return 2 +
    centerPrint( 10,"#########" );
}
	
bool checkForWin( char Char, int& turn, const int x )
{
    if (( ( mvinch( 5, x )     == Char ) && ( mvinch( 5, x + 2 ) == Char ) && ( mvinch( 5, x + 4 ) == Char ) ) ||
        ( ( mvinch( 7, x )     == Char ) && ( mvinch( 7, x + 2 ) == Char ) && ( mvinch( 7, x + 4 ) == Char ) ) ||
        ( ( mvinch( 9, x )     == Char ) && ( mvinch( 9, x + 2 ) == Char ) && ( mvinch( 9, x + 4 ) == Char ) ) ||
        ( ( mvinch( 5, x )     == Char ) && ( mvinch( 7, x )     == Char ) && ( mvinch( 9, x )     == Char ) ) ||
        ( ( mvinch( 5, x + 2 ) == Char ) && ( mvinch( 7, x + 2 ) == Char ) && ( mvinch( 9, x + 2 ) == Char ) ) || 
        ( ( mvinch( 5, x + 4 ) == Char ) && ( mvinch( 7, x + 4 ) == Char ) && ( mvinch( 9, x + 4 ) == Char ) ) ||
        ( ( mvinch( 5, x )     == Char ) && ( mvinch( 7, x + 2 ) == Char ) && ( mvinch( 9, x + 4 ) == Char ) ) || 
        ( ( mvinch( 5, x + 4 ) == Char ) && ( mvinch( 7, x + 2 ) == Char ) && ( mvinch( 9, x )     == Char ) ) )  
    {
        string str = "";
        str = str + Char + " won";
        centerPrint( 15, str );
        papan_game();
        turn = 1;

        return 1;
    }
    else
        return 0;
}

void start(){
	
	   printw( "\n" );
    for ( int i = 0; i < COLS; i++ ){
    	printw( "=" );
	}
        
    for ( int i = 0; i < COLS; i++ ){
    	printw( "-" );
	}

    printw( "\n\n" );

    centerPrint( 1, " Tic Tac Toe " );
    centerPrint( 2, " Game " );

    noecho();


    int turn = 1;
    int y = 5;
    int x = papan_game();
    int x_ = x;

    move( y, x );

    while ( int c = 1 )
    {
        if ( turn % 2 == 0 )
            centerPrint( 3, "o" );
        else
            centerPrint( 3, "x" );
		
		//untuk print x o ditengah
		
        if ( turn != 10 )
        {
            checkForWin( 'x', turn, x_ );
            checkForWin( 'o', turn, x_ );
        }
        else{
            centerPrint( 15, "draw" );
            clear();
            papan_game();
            turn = 1;
        }

        move( y, x );

        char Char = getch();

        switch ( Char )
        {
            case 'd':
                x += 2;
                break;
            case 'a':
                x -= 2;
                break;
            case 's':
                y++;
                break;
            case 'w':
                y--;
                break;
        }

        if ( mvinch( y, x ) == '#' )
        {
            switch ( Char )
            {
                case 'd':
                    x -= 2;
                    break;
                case 'a':
                    x += 2;
                    break;
                case 's':
                    y--;
                    break;
                case 'w':
                    y++;
                    break;
            }
        }
        else
        {
            switch ( Char )
            {
                case 's':
                    y++;
                    break;
                case 'w':
                    y--;
                    break;
            }
        }

        move( y, x );

        if ( Char == 'e' && ( mvinch( y, x ) == ' ' ) )
        {
            if ( turn % 2 == 0 )
                printw( "o" );
            else
                printw( "x" );

            centerPrint( 15, "          ");
            move( y, x );
            turn++;
        }
    } 
}



int main()
{
	loading();
    initscr();
    
    for ( int i = 0; i < COLS; i++ )
	{
		printw( "=" );
	}
        
        
    centerPrint( 1, " WELCOME TO\n" );
	centerPrint( 2, " TIC TAC TOE GAME!\n" );
	
	for ( int i = 0; i < COLS; i++ )
        printw( "=" );
        
	centerPrint( 4, "<1> START" );
	centerPrint( 5, "<2> END GAME" );
	centerPrint( 8, "PLEASE ENTER TO SELECT : " );
	char menu = getch();
	clear();
	
	switch (menu){
	case '1':
		start();
	case '2':
		about();
	
}
 //while
	getch();
    endwin();

    return 0;
}
