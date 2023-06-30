#pragma once
#ifndef GENERATORH
#define GENERATORH

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<time.h>
using namespace std;

#define SUDOKUPATH  "sudoku.txt"
#define GENERATEPATH "game.txt" 
#define MAX 200000000
static char AbsolutePath[100] = { 0 };
static char ques_board[10][20];


extern void sudoku_generate(int n);
extern void ques_generate(int ques_num);


#endif // !GENERATORH


