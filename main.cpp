#include"Engine.h"
#include<iostream>
#include <conio.h>

#include"CScreen.h"
#include"CGame.h"
#include <minwindef.h>
#include "Size.h"
 





using namespace std;

int main( void) {
	setlocale(LC_ALL, "Russian");
	try {
		CScreen screen;
		screen.cursor_show(false);
		screen.text_attr((DWORD)0x0a);
		screen.cls();
		CGame game(screen, 80, 24, 120);
		throw - 1;

		game.logo();

		game.read_top10();
		game.top10(false);
		game.pak(18);


		do {
			game.game_loop();
			game.top(false);

		} 
		while (game.once_more()) {
			
		}
		
		catch (CSScreenExeption& ex) {
			cerr << "***" << ex.what() << endl;
		}
		return 0;

	}
	


}

