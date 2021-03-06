/* [mmn 14 : ]:
in this file: 

author: Uri K.H,   Lihi Haim       Date: 21.3.2021 
ID: 215105321,     313544165       Tutor: Danny Calfon */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "line.h"
#include "util.h"
#include "label.h"

#define MAX_DIR_COM_LEN 8 /* maximum length of a directive command */ 
#define DIR_COMS 4 /* the directive commands */

int getDirCom(char *line, int *lInd, int lineCnt){
     char *dirCommands[DIR_COMS] =  {".data", ".string", ".entry", ".extern"}; /* the directive commands */
     int i;
     char *command;

     jumpSpaces(line,lInd);
     command = readWord(line, lInd);
     
     for(i = 0; i < DIR_COMS; i++){
          if(strcmp(command, dirCommands[i]))
               return i;
     }
     printf("error [line %d]: directive command - %s , is not valid.", lineCnt, command);
     printf("Command must be: %s / %s / %s / %s\n",dirCommands[data],dirCommands[string],dirCommands[entry],dirCommands[external]);
     return -1;
}