
#ifndef __SCOORD_H__
#define __SCOORD_H__
#include <time.h> 
#include <fstream> 
#include <utility> 

using namespace std; 
const int NAMELENGTH = 16; 


struct SRecord { char name[NAMELENGTH];

 double rating; 
 int length;


double game_time;
time_t date;
SRecord();

void as_string(char *buffer); 
}; 
class CGame {
public: CGame(CScreen& _scr, int _width = 80, int _height = 24, int _latency = 100); 
	  void game_loop(); 
	
	  void top10(bool after_game); 
	  bool once_more(); 
	  void pak(int y); 
	  void read_top10(); 
	  void write_top10(); 
	  void logo(); 
	  void goodbye();
private: enum Command { CMD_NOCOMMAND = 0, CMD_EXIT, CMD_LEFT, CMD_RIGHT, CMD_UP, CMD_DOWN }; 
	   enum State { STATE_OK, STATE_EXIT, STATE_DIED }; typedef pair<int, Command> CmdPair; 
	   int width, height; 
	   int latency;
	   	   CScreen scr; 
		   
	   double duration_game; 
	   double rating, rating_i; 
	   SRecord ttop10[10]; 
	   CmdPair cmd_table[5]; 
	   void draw_field(); 
	   SCoord make_food(); 
	   void print_stat(); 
	   Command get_command(); 
	   void top10_table();
}; 
#endif  CGAME_H
