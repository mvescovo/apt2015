/***********************************************************************
 * COSC1076 - Advanced Programming Techniques
 * Summer 2015 Assignment #2
 * Full Name        : Michael Vescovo
 * Student Number   : s3459317
 * Course Code      : COSC1076
 * Program Code     : BP094
 * Start up code provided by David Shaw
 * Based on 2014 code by Paul Miller and Virginia King
 **********************************************************************/

#include "type.h"
#include <stdio.h>

#ifndef UTILITY_H
#define UTILITY_H

void read_rest_of_line(void);
ERROR get_string(char string[], int length, FILE *fp, char prompt[]);
ERROR get_int(int *i, int min, int max, char prompt[]);

#endif
