#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char isWin(char board[ROW][COL], int row, int col);
int isFull(char board[ROW][COL], int row, int col);