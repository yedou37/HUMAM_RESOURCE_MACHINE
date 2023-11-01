#ifndef GAME_HPP
#define GAME_HPP

#define MAX_CNV 10
#define MAX_AREA 5
#define pXX %s
#define dXX %3d
#define MAX_CMD 20
/*
need global variables:
	int	boxInHand
	int inConv[]
	int outConv[]	
	int area[]       
				//using func intToString to the num as a string " 3 " or " X "
need functions :
	
	init interface
	level selection
	
	input commands (from FILE* or stdin)
	clear screen
	std print screen
	
	inBox
	outBox
	addBox
	subBox
	copyTo
	copyFrom
	jumpTo
	jumpIfZero




*/

char* intToString(int num);
void logMessage(const char* message);
void stdPrint(int cmdIdx);


typedef struct _conveyor
{
	int Idx[MAX_CNV];
	int Top;
}conveyor;


typedef struct _operate
{
	int Idx;
	char command[20];

}operate;

conveyor inCnv , outCnv;
int area[MAX_AREA];
int boxInHand; 
char lInfo[40]="temp level info";
operate cmd[MAX_CMD];

#endif

