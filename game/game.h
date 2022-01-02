#pragma once
# define Row 3
# define Col 3
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
//ÉùÃ÷
void initboard(char board[Row][Col], int row, int col);
void displayboard(char board[Row][Col], int row, int col);
void playermove(char board[Row][Col], int row, int col);
void computermove(char board[Row][Col],int row, int col);
char iswin(char board[Row][Col], int row, int col);