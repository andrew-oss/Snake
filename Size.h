#pragma once
#ifndef _CSCREEN_H_
#define _CSCREEN_H_
#endif // !_CSCREEN_H_
#include <windows.h>

class CSScreenExeption {
public:
	CSScreenExeption(int _err) :err(_err) {

	}
	const char* what();
	int err;
};

class CScreen {
	CScreen();
	~CScreen();
	void cursor_show(bool visible);
	void text_attr(DWORD attr);
	void pos(int x, int y, char ch = 0);
	void pos_str(int x, int y, const char* srt);
	void cls();


private:
	HANDLE hConsoleOutput;
	CONSOLE_CURSOR_INFO oldCursorInfo;
	
	WORD oldTextAttr;
};


