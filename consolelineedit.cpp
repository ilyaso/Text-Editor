//consolelineedit.cpp

#include <cstring>

#include "console.h"

namespace cio {

	void display(const char *str, int row, int col, int fieldLen){

		int numCharstoprint;

		

		//if fieldchar is 0. need to print strlen

		if(!str){

			numCharstoprint = 0;

		}

		else{

			int strlen = std::strlen(str);

			if(!fieldLen){

				numCharstoprint = strlen;

			}

			else{

				numCharstoprint = fieldLen;

				if (strlen < fieldLen) 

					numCharstoprint = strlen;

			}

		}

		for(int i = 0; i < numCharstoprint; i++){

			console.setPosition(row,col + i); //column pushed forward evrytime

			console.setCharacter(str[i]);

			console.setPosition(row,col + i);

			console.drawCharacter();



		}

		//some things still missing



		//- guarding against writing off the edge of the screen

		//- blanking out the

		



	}

	int edit(char *str, int row, int col, int fieldLength, int maxStrLength, bool* insertMode, int* strOffset, int* curPosition){

		return 0;



	}

}