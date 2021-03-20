/* [mmn 14 : ]:
in this file: 

author: Uri K.H,   Lihi Haim       Date: 21.3.2021 
ID: 215105321,     313544165       Tutor: Danny Calfon */

#include <stdio.h>
#include "ineterface.h"

int main(int argc, char *argv[]){
     int i = 1;
     boolean compiled;

     while(argv[i]){
          if(!(compiled = compile(argv[i])))
               printf("could not compile the Assembly file: \"%s.as\"\n", argv[i]);
          if(compiled == ERROR){
               printf("hardware unexpected error: memory related error acurred while running the program\n");
               printf("the program has been terminated\n");
               i++;
               break;
          }
          i++;
     }
     if(i == 1)
          printf("no file names has been inserted in the command line\n");
     clean(TRUE);
     return 0;
}
