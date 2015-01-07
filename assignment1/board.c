/***********************************************************************
 * COSC1076 - Advanced Programming Techniques
 * Summer 2015 Assignment #1 
 * Full Name        : Michael Vescovo
 * Student Number   : s3459317
 * Course Code      : COSC1076
 * Program Code     : BP094
 * Start up code provided by David Shaw
 * Based on 2014 code by Paul Miller and Virginia King
 **********************************************************************/

#include <stdio.h>
#include "board.h"

void printCell(CELL_CONTENTS);
void printAxis(void);

/* copies the master board to a local copy for each game */
void init_board(enum cell_contents board[][BOARD_WIDTH])
{
   int i, j;

   for (i = 0; i < BOARD_HEIGHT; ++i) {
      for (j = 0; j < BOARD_WIDTH; ++j) {
         board[i][j] = master_board[i][j];
      }
   }
}

/* display the game board to the screen */
void display_board(enum cell_contents board[][BOARD_WIDTH])
{
   int i, j;

   for (i = 0; i < BOARD_HEIGHT; ++i) {
      for (j = 0; j < BOARD_WIDTH; ++j) {
         printCell(board[i][j]);
      }
      putchar('\n');
   }
}

/* displays an individual cell */
void printCell(CELL_CONTENTS cell) {
   switch (cell) {
      case PEG:
         printf("o");
         break;
      case HOLE:
         printf(".");
         break;
      case INVALID:
         break;
   }
}

void printAxis(void) {

}
