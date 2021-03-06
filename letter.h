// letter.h
// 노가다의 결정체
// 문자 데이터들은 계속 추가될 예정.
​
#pragma once
#include<stdio.h>
​
// A 데이터
char A[7][8] = { {' ','_','_','_','_','_',' ',0 },
		 {'/',' ',' ',' ',' ',' ', '|', 0 },
		 {'|', ' ',' ','0',' ',' ','|',0},
		 {'|',' ',' ',' ',' ',' ', '|', 0 },
		 {'|',' ',' ','_',' ',' ', '|', 0 },
		 {'|',' ',' ','|',' ',' ', '|', 0 },
		 {'|','_','_','|','_','_', '|', 0 },
};
​
// B 데이터
char B[7][8] = { {' ','_','_','_','_','_',' ',0},
		 {'|',' ',' ',' ',' ',' ', ')', 0 },
		 {'|', ' ',' ','0',' ',' ',')',0},
		 {'|', ' ',' ',' ',' ','<',' ',0},
	         {'|', ' ',' ','0',' ',' ',')',0},
		 {'|', ' ',' ',' ',' ',' ',')',0},
		 {'|', '_','_','_','_','/',' ',0},
};
​
// C 데이터
char C[7][8] = { {' ',' ',' ','_','_','_',' ', 0},
		 {' ',' ','/',' ',' ','_',']', 0},
		 {' ','/',' ',' ','|',' ', ' ', 0 },
		 {' ','|',' ',' ','|',' ', ' ', 0 },
		 {' ','|',' ',' ','|','_', ' ', 0 },
		 {' ','|',' ',' ',' ',' ', '|', 0 },
		 {' ','|','_','_','_','_', '|', 0 },
};
​
// D 데이터
char D[7][8] = { {' ','_','_','_','_',' ',' ', 0},
		 {'|', ' ',' ',' ',' ',')',' ',0},
		 {'|', ' ',' ',' ',' ',' ',')',0},
		 {'|', ' ',' ','D',' ',' ',')',0},
		 {'|', ' ',' ',' ',' ',' ',')',0},
		 {'|', ' ',' ',' ',' ',' ',')',0},
		 {'|', '_','_','_','_',')',' ',0},
};
​
// E 데이터
char E[7][8] = { {' ',' ',' ','_','_','_',' ', 0},
		 {' ',' ','/',' ',' ','_',']', 0},
		 {' ','/',' ',' ','|','_', ' ', 0 },
		 {' ','|',' ',' ',' ','_', ']', 0 },
		 {' ','|',' ',' ','|','_', ' ', 0 },
		 {' ','|',' ',' ',' ',' ', '|', 0 },
		 {' ','|','_','_','_','_', '|', 0 },
​
};
​
// F 데이터
char F[7][8] = { {' ','_','_','_','_','_',' ', 0},
		 {'|', ' ',' ','_','_','_',']',0},
		 {'|', ' ',' ','|','_','_',' ',0},
		 {'|', ' ',' ','_','_','_',']',0},
		 {'|', ' ',' ','|',' ',' ',' ',0},
		 {'|', ' ',' ','|',' ',' ',' ',0},
		 {'|', '_','_','|',' ',' ',' ',0},
};
​
// G 데이터
char G[7][8] = { {' ',' ','_','_','_','_',' ', 0},
		 {' ','/',' ',' ','_','_',']', 0},
		 {'/',' ',' ','|','_','_', '_', 0 },
		 {'|',' ',' ','|','|',' ', '|', 0 },
		 {'|',' ',' ','|','|',' ', '|', 0 },
		 {'|',' ',' ',' ',' ',' ', '|', 0 },
		 {'|','_','_','_','_','_', '|', 0 },
};
​
// H 데이터
char H[7][8] = {                 {' ','_',' ',' ',' ','_',' ',0},
				 {'|',' ','|',' ','|',' ','|',0},
				 {'|',' ','|','_','|',' ','|',0},
				 {'|',' ',' ','_',' ',' ','|',0},
				 {'|',' ','|',' ','|',' ','|',0},
				 {'|',' ','|',' ','|',' ','|',0},
				 {'|','_','|',' ','|','_','|',0},
};
​
// I 데이터
char I[7][8] = { {' ','_','_','_','_','_',' ',0},
				 {'|', '_',' ',' ',' ','_','|',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', '_','|',' ','|','_',' ',0},
				 {'|', '_','_','_','_','_','|',0},
};
​
// J 데이터
char J[7][8] = {                 {' ','_','_','_','_','_',' ',0},
				 {'|', '_',' ',' ',' ','_','|',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {'_', '_','|',' ','|',' ',' ',0},
				 {'|', '|','|',' ','|',' ',' ',0},
				 {'|', '_','_','_','|',' ',' ',0},
};
​
// K 데이터
char K[7][8] = {                 {' ','_','_',' ',' ','_',' ', 0},
				 {'|', ' ',' ','|','/',' ',']',0},
				 {'|', ' ',' ','|',' ','/',' ',0},
				 {'|', ' ',' ',' ',' ','|',' ',0},
				 {'|', ' ',' ',' ',' ',' ',')',0},
				 {'|', ' ',' ','|',')',' ','|',0},
				 {'|', '_','_','|','|','_','|',0},
​
};
​
// L 데이터
char L[7][8] = {                 {' ','_',' ',' ',' ',' ',' ', 0},
				 {'|',' ','|',' ',' ',' ',' ', 0},
				 {'|',' ','|',' ',' ',' ',' ', 0},
				 {'|',' ','|','_','_','_',' ', 0},
				 {'|',' ',' ',' ',' ',' ','|', 0},
				 {'|',' ',' ',' ',' ',' ','|', 0},
				 {'|','_','_','_','_','_','|', 0},
};
​
// M 데이터
char M[7][8] = {                 {' ','_',' ',' ',' ','_',' ', 0},
				 {'|',' ','|','_','|',' ','|', 0},
				 {'[',' ','|',' ','|',' ',']', 0},
				 {'|',' ',' ',' ',' ',' ','|', 0},
				 {'|',' ','|',' ','|',' ','|', 0},
				 {'|',' ','|',' ','|',' ','|', 0},
				 {'|','_','|','_','|','_','|', 0},
​
};
​
// N 데이터
char N[7][8] = {                 {' ',' ','_','_','_',' ',' ', 0},
				 {' ','|',' ',' ',' ',')',' ', 0},
				 {' ','|',' ',' ','_',' ',')', 0},
				 {' ','|',' ',' ','|',' ','|', 0},
				 {' ','|',' ',' ','|',' ','|', 0},
				 {' ','|',' ',' ','|',' ','|', 0},
				 {' ','|','_','_','|','_','|', 0},
​
};
​
// O 데이터
char O[7][8] = {                 {' ','_','_','_','_','_',' ', 0},
				 {'|',' ','_','_','_',' ','|', 0},
				 {'|','|',' ',' ',' ','|','|', 0},
				 {'|','|',' ',' ',' ','|','|', 0},
				 {'|','|',' ',' ',' ','|','|', 0},
				 {'|','|','_','_','_','|','|', 0},
				 {'|','_','_','_','_','_','|', 0},
​
};
​
// P 데이터
char P[7][8] = {                 {' ','_','_','_','_',' ',' ', 0},
				 {'|',' ',' ',' ',' ',')',' ', 0},
				 {'|',' ','D',' ',' ',' ',')', 0},
				 {'|',' ',' ','_','_',')',' ', 0},
				 {'|',' ',' ','|',' ',' ',' ', 0},
				 {'|',' ',' ','|',' ',' ',' ', 0},
				 {'|','_','_','|',' ',' ',' ', 0},
​
};
​
// Q 데이터
char Q[7][8] = {                 {' ',' ','_','_','_','_',' ', 0},
				 {' ','(',' ',' ',' ',' ','|', 0},
				 {'(',' ',' ',' ','o',' ','|', 0},
				 {' ','(','_','_',' ',' ','|', 0},
				 {' ',' ',' ','|',' ',' ','|', 0},
				 {' ',' ',' ','|',' ',' ','|', 0},
				 {' ',' ',' ','|','_','_','|', 0},
​
};
​
// R 데이터
char R[7][8] = {                 {' ','_','_','_','_',' ',' ', 0},
				 {'|',' ',' ',' ',' ',')',' ', 0},
				 {'|',' ','D',' ',' ',' ',')', 0},
				 {'|',' ',' ',' ',' ',')',' ', 0},
				 {'|',' ','_',' ','<',' ',' ', 0},
				 {'|',' ','|','|',' ',')',' ', 0},
				 {'|','_','|','|','_','|',' ', 0},
​
};
​
// S / 5 데이터
char S[7][8] = {                 {' ',' ',' ','_','_','_',' ', 0},
				 {' ',' ','/',' ',' ','_',']', 0},
				 {' ','/',' ',' ','|','_', ' ', 0 },
				 {' ','|','_','_',' ',' ', ']', 0 },
				 {' ',' ','_','_','|',' ', '|', 0 },
				 {' ','|',' ',' ',' ',' ', '|', 0 },
				 {' ','|','_','_','_','_', '|', 0 },
};
​
// T 데이터
char T[7][8] = {                 {' ','_','_','_','_','_',' ',0},
				 {'|', '_',' ',' ',' ','_','|',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|','_','|',' ',' ',0},
};
​
// U 데이터
char U[7][8] = {                 {' ','_',' ',' ',' ','_',' ', 0},
				 {'|',' ','|',' ','|',' ','|', 0},
				 {'|',' ','|',' ','|',' ','|', 0},
				 {'|',' ','|','_','|',' ','|', 0},
				 {'|',' ',' ',' ',' ',' ','|', 0},
				 {'|',' ',' ',' ',' ',' ','|', 0},
				 {'|','_','_','_','_','_','|', 0},
};
​
// v 데이터
char V[7][8] = {                 {' ','_',' ',' ',' ','_',' ', 0},
				 {'|',' ','|',' ','|',' ','|', 0},
				 {'|',' ','|',' ','|',' ','|', 0},
				 {'|',' ','|','_','|',' ','|', 0},
				 {'|',' ',' ',' ',' ',' ','|', 0},
				 {' ','[',' ',' ',' ',']',' ', 0},
				 {' ',' ','[','_',']',' ',' ', 0},
};
​
// W 데이터
char W[7][8] = {                 {' ','_', ' ',' ', ' ', '_',' ', 0},
				 {'|',' ','|','_','|',' ','|', 0},
				 {'|',' ','|',' ','|',' ','|', 0},
				 {'|',' ','\'',' ','\'',' ','|', 0},
				 {'[','_',' ',' ',' ','_',']', 0},
				 {' ','[',' ','|',' ',']',' ', 0},
				 {' ','[','_','|','_',']',' ', 0},
​
};
​
// X 데이터
char X[7][8] = {                 {' ','_','_',' ',' ','_','_', 0},
				 {'[', ' ','|',' ','|',' ',']',0},
				 {' ', '|','|','_','|','|',' ',0},
				 {' ', '|',' ',' ',' ','|',' ',0},
				 {' ', '|',' ','_',' ','|',' ',0},
				 {'[', ' ',']',' ','[',' ',']',0},
				 {'[', '_',']',' ','[','_',']',0},
​
};
​
// Y 데이터
char Y[7][8] = {                 {' ','_','_',' ',' ','_',' ',0},
				 {'[', ' ','|',' ','|',' ',']',0},
				 {'[', ' ','|','_','|',' ',']',0},
				 {' ', '[',' ',' ',' ',']',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|','_','|',' ',' ',0},
};
​
// Z  데이터
char Z[7][8] = {                 {' ','_','_','_','_','_',' ', 0},
				 {'|','_','_','_',' ',' ','|', 0},
				 {' ',' ','_','_','[',' ','|', 0},
				 {'_','_','|',' ',' ',' ','|', 0},
				 {'|',' ',' ',' ','_','_','|', 0},
				 {'|',' ',' ',' ','|','_',' ', 0},
				 {'|','_','_','_','_','_','|', 0},
​
};
​
// . 데이터
char period[7][8] = {                     {' ',' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ','_','_',' ',' ',0},
					  {' ', ' ','|',' ',' ','|',' ',0},
					  {' ', ' ','|','_','_','|',' ',0},
};
​
// 1 데이터
char _1[7][8] = {                {' ',' ','_','_','_',' ',' ',0},
				 {'_', '_','|',' ','|',' ',' ',0},
				 {'|', '_',' ',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {' ', ' ','|',' ','|',' ',' ',0},
				 {'_', '_','|',' ','|','_','_',0},
				 {'|', '_','_','_','_','_','|',0},
};
​
// 2 데이터
char _2[7][8] = {                {' ','_','_','_','_','_',' ', 0},
				 {'|','_','_','_',' ',' ','|', 0},
				 {'_','_','_','_','[',' ','|', 0},
				 {'|',' ',' ','_','_','_','|', 0},
				 {'|',' ','[',' ',' ',' ',' ', 0},
				 {'|',' ','[','_','_','_',' ', 0},
				 {'|','_','_','_','_','_','|', 0},
​
};
​
// 3 데이터
char _3[7][8] = {                 {' ','_','_','_',' ',' ',' ', 0},
				  {'[','_',' ',' ',')',' ',' ', 0},
				  {' ','_','|',' ',' ',')', ' ', 0 },
				  {'[','_','_',' ',' ','|', ' ', 0 },
				  {' ','_','|',' ',' ','|', ' ', 0 },
				  {'|',' ',' ',' ',' ','|', ' ' , 0 },
				  {'|','_','_','_','_','|', ' ', 0 },
​
};
​
// 4 데이터
char _4[7][8] = {                {' ',' ',' ',' ','/','|',' ', 0},
				 {' ',' ',' ','/',' ','|',' ', 0},
				 {' ',' ','/',' ',' ','|','_', 0},
				 {' ','/',' ',' ','o',' ','|', 0},
				 {'[','_','_','_',' ','_','|', 0},
				 {' ',' ',' ','|',' ','|',' ', 0},
				 {' ',' ',' ','|','_','|',' ', 0},
​
};
​
// 6 데이터
char _6[7][8] = {                {' ','_','_','_','_',' ',' ', 0},
				 {'/', ' ',' ','_','_','|',' ',0},
				 {'|', ' ','<','_','_',' ',' ',0},
				 {'(', ' ',' ',' ',' ',')',' ',0},
				 {'[', ' ',' ','O',' ',' ',')',0},
				 {'[', ' ',' ',' ',' ',' ',')',0},
				 {'(', '_','_','_','_','/',' ',0},
};
​
// 7 데이터
char _7[7][8] = {                {'_','_','_','_','_','_',' ',0},
				 {'|',' ',' ',' ',' ',' ','|',0},
				 {'|',' ','_','_',' ',' ','|',0},
				 {'|','_','|',' ','|',' ','|',0},
				 {' ',' ',' ',' ','|',' ','|',0},
				 {' ',' ',' ',' ','|',' ','|',0},
				 {' ',' ',' ',' ','|','_','|',0},
};
​
// 8 데이터
char _8[7][8] = {                {' ',' ','_','_','_',' ',' ', 0},
				 {' ','(',' ',' ',' ',')',' ', 0},
				 {'(',' ',' ','O',' ',' ',')', 0},
				 {'(','_',' ',' ',' ','_',')', 0},
				 {' ','(',' ',' ',' ',')',' ', 0},
				 {'(',' ',' ','O',' ',' ',')', 0},
				 {' ','(','_','_','_',')',' ', 0},
​
};
​
// 0 데이터
char _0[7][8] = {                {' ','_','_','_','_','_',' ', 0},
				 {'(',' ','_','_','_',' ',')', 0},
				 {'[','|',' ',' ',' ','|',']', 0},
				 {'[','|',' ',' ',' ','|',']', 0},
				 {'[','|',' ',' ',' ','|',']', 0},
				 {'[','|','_','_','_','|',']', 0},
				 {'(','_','_','_','_','_',')', 0},
​
};
​
// ! 데이터
char exclamation[7][8] = {                         {' ',' ',' ','_','_',' ',' ',0},
						   {' ', ' ','|',' ',' ','|',' ',0},
						   {' ', ' ','|',' ',' ','|',' ',0},
						   {' ', ' ','|','_','_','|',' ',0},
						   {' ', ' ',' ','_','_',' ',' ',0},
						   {' ', ' ','|',' ',' ','|',' ',0},
						   {' ', ' ','|','_','_','|',' ',0},
};
​
// ? 데이터
char question[7][8] = {                            {' ',' ','_','_','_',' ',' ',0},
						   {' ', '(',' ',' ',' ','|',' ',0},
						   {'(', '_','_','_',' ','|',' ',0},
						   {' ', ' ',' ','_','|','|',' ',0},
						   {' ', ' ','|','_','_','|',' ',0},
							{' ', ' ',' ','_',' ',' ',' ',0},
						   {' ', ' ','|','_','|',' ',' ',0},
};
​
// ( 데이터
char parenthesis[7][8] = {                         {' ',' ','_','_','_','_',' ', 0},
						   {' ', '(',' ','_','_','_','|',0},
						   {'(', ' ','(',' ',' ',' ',' ',0},
						   {'(', '(',' ',' ',' ',' ',' ',0},
						   {'(', '(',' ',' ',' ',' ',' ',0},
						   {'(', ' ','(','_','_','_',' ',0},
						   {' ', '(','_','_','_','_','|',0},
};
​
​
// ) 데이터
char parenthesis2[7][8] = {                        {' ','_','_','_','_',' ',' ', 0},
						   {'|', '_','_','_',' ',')',' ',0},
						   {' ', ' ',' ',' ',')',' ',')',0},
						   {' ', ' ',' ',' ',' ',')',')',0},
						   {' ', ' ',' ',' ',' ',')',')',0},
						   {' ', '_','_','_',')',' ',')',0},
						   {'|', '_','_','_','_',')',' ',0},
};
​
// , 데이터
char comma[7][8] = {                      {' ',' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ','_','_',' ',' ',' ',0},
					  {' ', '|',' ',' ','|',' ',' ',0},
					  {' ', '|','_',' ','|',' ',' ',0},
					  {' ', ' ',' ','|','|',' ',' ',0},
};
​
// + 데이터
char plus[7][8] = {                     {' ',' ',' ',' ',' ',' ',' ',0},
					{' ', ' ',' ','_',' ',' ',' ',0},
					{' ', '_','|',' ','|','_',' ',0},
					{'|', '_',' ',' ',' ','_','|',0},
					{' ', ' ','|','_','|',' ',' ',0},
					{' ', ' ',' ',' ',' ',' ',' ',0},
					{' ', ' ',' ',' ',' ',' ',' ',0},
};
​
// - 데이터
char minus[7][8] = {                    {' ',' ',' ',' ',' ',' ',' ',0},
					{' ', ' ',' ',' ',' ',' ',' ',0},
					{' ', '_','_','_','_','_',' ',0},
					{'|', '_','_','_','_','_','|',0},
					{' ', ' ',' ',' ',' ',' ',' ',0},
					{' ', ' ',' ',' ',' ',' ',' ',0},
					{' ', ' ',' ',' ',' ',' ',' ',0},
};
​
// & 데이터
char ampersand[7][8] = {                          {' ',' ','_','_',' ',' ',' ', 0},
						  {' ','(',' ',' ',')',' ',' ', 0},
						  {'(',' ','O',' ',' ',')',' ', 0},
						  {'(','_',' ',' ',' ',')',' ', 0},
						  {' ','(',' ',' ',')','_',' ', 0},
						  {'(',' ','O',' ','|','_','|', 0},
						  {' ','(','_','_','_','_','|', 0},
​
};
​
// ^ 데이터
char carrot[7][8] = {                     {' ',' ',' ','_',' ',' ',' ',0},
					  {' ', ' ','(',' ',')',' ',' ',0},
					  {' ', '(',' ','_',' ',')',' ',0},
					  {' ', '[','|',' ','|',']',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
					  {' ', ' ',' ',' ',' ',' ',' ',0},
};
​
// * 데이터
char asterisk[7][8] = {                         {' ','_','_','_','_','_',' ',0},
						{'(', ' ','|',' ','|',' ',')',0},
						{'|', '_','.',' ','.','_','|',0},
						{'|', ' ',' ',' ',' ',' ','|',0},
						{'(', '_','|','_','|','_',')',0},
						{' ', ' ',' ',' ',' ',' ',' ',0},
						{' ', ' ',' ',' ',' ',' ',' ',0},
};
​
// % 데이터
char percent[7][8] = {                     {' ','_',' ',' ','_','_',' ',0},
					   {'|', '_','|','/',' ','/',' ',0},
					   {' ', ' ','/',' ','/',' ',' ',0},
					   {' ', '/',' ','/','_',' ',' ',0},
					   {'|', '_','/','|','_','|',' ',0},
					   {' ', ' ',' ',' ',' ',' ',' ',0},
					   {' ', ' ',' ',' ',' ',' ',' ',0},
};
​
// $ 데이터
char peso[7][8] = {                     {' ',' ',' ','|','|','_',' ', 0},
					{' ',' ','/',' ',' ','_',']', 0},
					{' ','/',' ',' ','|','_', ' ', 0 },
					{' ','|','_',' ',' ',' ', ']', 0 },
					{' ',' ','_','|','|',' ', '|', 0 },
					{' ','|','_',' ',' ','_', '|', 0 },
					{' ',' ',' ','|','|',' ', ' ', 0 },
};
​
// # 데이터
char number[7][8] = {
				 {' ','|','|',' ','|','|',' ',0},
				 {' ','|','|','_','|','|',' ',0},
				 {'|','_',' ','_',' ','_','|',0},
				 {' ','|','|',' ','|','|',' ',0},
				 {' ','_','|','_','|','_',' ',0},
				 {'|','_',' ','_',' ','_','|',0},
				 {' ','|','|',' ','|','|',' ',0},
};
// ' 데이터
char apostrophe[7][8] = { {' ','_','_',' ',' ',' ',' ',0},
			  {'|', ' ',' ','|',' ',' ',' ',0},
			  {'|', '_','_','|',' ',' ',' ',0},
			  {' ', ' ',' ',' ',' ',' ',' ',0},
			  {' ', ' ',' ',' ',' ',' ',' ',0},
			  {' ', ' ',' ',' ',' ',' ',' ',0},
			  {' ', ' ',' ',' ',' ',' ',' ',0},
};
​
// " 데이터
char double_apostrophe[7][8] = { {' ','_',' ',' ','_',' ',' ',0},
				 {'|', ' ','|','|',' ','|',' ',0},
				 {'|', '_','|','|','_','|',' ',0},
				 {' ', ' ',' ',' ',' ',' ',' ',0},
				 {' ', ' ',' ',' ',' ',' ',' ',0},
				 {' ', ' ',' ',' ',' ',' ',' ',0},
				 {' ', ' ',' ',' ',' ',' ',' ',0},
};
​
int rep = 0; // (rep: strtd() 또는 fstrtd() 함수를 재귀 호출할지 여부)
const char* reptr = NULL; // (reptr: \n문자 다음에 있는 문자가 있는 주소값을 보관합니다.)
​
// 문자열을 입체적으로 화면에 출력해줍니다.
// 그리고, 문자열의 길이를 반환합니다.
// 키보드에 보이는 문자들은 대부분 지원합니다.
// 단, 지원하지 않는 문자들은 공백으로 처리됩니다.
// 이 함수는 종료되면서 알아서 \n을 출력 합니다.
int strtd(const char* const string) // strtd: function( const char* const ) returning int  
{
​
	// 문자열의 길이를 구합니다.
	const char* temp = string;
	int len = 0; // ( len: 문자열의 길이)
​
	while (*temp)
	{
		temp++;
		len++;
	}
​
	// 화면에 출력합니다.
	int temp2;
​
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < len; j++)
		{
			temp2 = string[j];
​
			// 알파벳 대문자일 경우, +32를 함.
			if (65 <= string[j] && string[j] <= 90)
				temp2 += 32;
​
			//어떤 글자인지 판별 시작
			switch (temp2)
			{
			case 'a': printf("%s ", A[i]); break;
			case 'b': printf("%s ", B[i]); break;
			case 'c': printf("%s ", C[i]); break;
			case 'd': printf("%s ", D[i]); break;
			case 'e': printf("%s ", E[i]); break;
			case 'f': printf("%s ", F[i]); break;
			case 'g': printf("%s ", G[i]); break;
			case 'h': printf("%s ", H[i]); break;
			case 'i': printf("%s ", I[i]); break;
			case 'j': printf("%s ", J[i]); break;
			case 'k': printf("%s ", K[i]); break;
			case 'l': printf("%s ", L[i]); break;
			case 'm': printf("%s ", M[i]); break;
			case 'n': printf("%s ", N[i]); break;
			case 'o': printf("%s ", O[i]); break;
			case 'p': printf("%s ", P[i]); break;
			case 'q': printf("%s ", Q[i]); break;
			case 'r': printf("%s ", R[i]); break;
			case 's': printf("%s ", S[i]); break;
			case 't': printf("%s ", T[i]); break;
			case 'u': printf("%s ", U[i]); break;
			case 'v': printf("%s ", V[i]); break;
			case 'w': printf("%s ", W[i]); break;
			case 'x': printf("%s ", X[i]); break;
			case 'y': printf("%s ", Y[i]); break;
			case 'z': printf("%s ", Z[i]); break;
			case '.': printf("%s ", period[i]); break;
			case '1': printf("%s ", _1[i]); break;
			case '2': printf("%s ", _2[i]); break;
			case '3': printf("%s ", _3[i]); break;
			case '4': printf("%s ", _4[i]); break;
			case '5': printf("%s ", S[i]); break;
			case '6': printf("%s ", _6[i]); break;
			case '7': printf("%s ", _7[i]); break;
			case '8': printf("%s ", _8[i]); break;
			case '9': printf("%s ", Q[i]); break;
			case '0': printf("%s ", _0[i]); break;
			case '!': printf("%s ", exclamation[i]); break;
			case '?': printf("%s ", question[i]); break;
			case '(': printf("%s ", parenthesis[i]); break;
			case ')': printf("%s ", parenthesis2[i]); break;
			case ',': printf("%s ", comma[i]); break;
			case '+': printf("%s ", plus[i]); break;
			case '-': printf("%s ", minus[i]); break;
			case '&': printf("%s ", ampersand[i]); break;
			case '^': printf("%s ", carrot[i]); break;
			case '*': printf("%s ", asterisk[i]); break;
			case '%': printf("%s ", percent[i]); break;
			case '$': printf("%s ", peso[i]); break;
			case '#': printf("%s ", number[i]); break;
			case '\'': printf("%s ", apostrophe[i]); break;
			case '\"': printf("%s ", double_apostrophe[i]); break;
​
			case '\n': if (!rep)
				      {
					   rep = 1;
​
					   reptr = &string[j + 1];
			          } break;
​
			default: printf("    ");
			}
​
			// 개행 문자를 만나게 되면, 문자열의 출력을 개행문자까지 하기로 함.
			if (temp2 == '\n')
				break;
​
		}
​
		printf("\n");
​
	}
​
​
	// rep의 값이 1일 경우, 다시 신호를 off로 바꿈.
	if (rep)
	{
		rep = 0;
​
		// 개행문자가 있을 경우, 그 이후의 문자열들은 재귀적으로 호출한 strtd()에서 처리한다.
		strtd(reptr);
​
		reptr = NULL;
   }
​
​
	return len;
}
​
​
// 문자열을 입체적으로 스트림에 출력해줍니다.
// 그리고, 문자열의 길이를 반환합니다.
// 키보드에 보이는 문자들은 대부분 지원합니다.
// 단, 지원하지 않는 문자들은 공백으로 처리됩니다.
// 이 함수는 종료되면서 알아서 \n을 출력 합니다.
int fstrtd(FILE* stream, const char* const string)
{
​
	// 문자열의 길이를 구합니다.
	const char* temp = string;
	int len = 0; // ( len: 문자열의 길이)
​
	while (*temp)
	{
		temp++;
		len++;
	}
​
	// 스트림에 출력합니다.
	int temp2;
​
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < len; j++)
		{
			temp2 = string[j];
​
			// 알파벳 대문자일 경우, +32를 함.
			if (65 <= string[j] && string[j] <= 90)
				temp2 += 32;
​
			//어떤 글자인지 판별 시작
			switch (temp2)
			{
			case 'a': fprintf(stream, "%s ", A[i]); break;
			case 'b': fprintf(stream, "%s ", B[i]); break;
			case 'c': fprintf(stream, "%s ", C[i]); break;
			case 'd': fprintf(stream, "%s ", D[i]); break;
			case 'e': fprintf(stream, "%s ", E[i]); break;
			case 'f': fprintf(stream, "%s ", F[i]); break;
			case 'g': fprintf(stream, "%s ", G[i]); break;
			case 'h': fprintf(stream, "%s ", H[i]); break;
			case 'i': fprintf(stream, "%s ", I[i]); break;
			case 'j': fprintf(stream, "%s ", J[i]); break;
			case 'k': fprintf(stream, "%s ", K[i]); break;
			case 'l': fprintf(stream, "%s ", L[i]); break;
			case 'm': fprintf(stream, "%s ", M[i]); break;
			case 'n': fprintf(stream, "%s ", N[i]); break;
			case 'o': fprintf(stream, "%s ", O[i]); break;
			case 'p': fprintf(stream, "%s ", P[i]); break;
			case 'q': fprintf(stream, "%s ", Q[i]); break;
			case 'r': fprintf(stream, "%s ", R[i]); break;
			case 's': fprintf(stream, "%s ", S[i]); break;
			case 't': fprintf(stream, "%s ", T[i]); break;
			case 'u': fprintf(stream, "%s ", U[i]); break;
			case 'v': fprintf(stream, "%s ", V[i]); break;
			case 'w': fprintf(stream, "%s ", W[i]); break;
			case 'x': fprintf(stream, "%s ", X[i]); break;
			case 'y': fprintf(stream, "%s ", Y[i]); break;
			case 'z': fprintf(stream, "%s ", Z[i]); break;
			case '.': fprintf(stream, "%s ", period[i]); break;
			case '1': fprintf(stream, "%s ", _1[i]); break;
			case '2': fprintf(stream, "%s ", _2[i]); break;
			case '3': fprintf(stream, "%s ", _3[i]); break;
			case '4': fprintf(stream, "%s ", _4[i]); break;
			case '5': fprintf(stream, "%s ", S[i]); break;
			case '6': fprintf(stream, "%s ", _6[i]); break;
			case '7': fprintf(stream, "%s ", _7[i]); break;
			case '8': fprintf(stream, "%s ", _8[i]); break;
			case '9': fprintf(stream, "%s ", Q[i]); break;
			case '0': fprintf(stream, "%s ", _0[i]); break;
			case '!': fprintf(stream, "%s ", exclamation[i]); break;
			case '?': fprintf(stream, "%s ", question[i]); break;
			case '(': fprintf(stream, "%s ", parenthesis[i]); break;
			case ')': fprintf(stream, "%s ", parenthesis2[i]); break;
			case ',': fprintf(stream, "%s ", comma[i]); break;
			case '+': fprintf(stream, "%s ", plus[i]); break;
			case '-': fprintf(stream, "%s ", minus[i]); break;
			case '&': fprintf(stream, "%s ", ampersand[i]); break;
			case '^': fprintf(stream, "%s ", carrot[i]); break;
			case '*': fprintf(stream, "%s ", asterisk[i]); break;
			case '%': fprintf(stream, "%s ", percent[i]); break;
			case '$': fprintf(stream, "%s ", peso[i]); break;
			case '#': fprintf(stream, "%s ", number[i]); break;
			case '\'': fprintf(stream, "%s ", apostrophe[i]); break;
			case '\"': fprintf(stream, "%s ", double_apostrophe[i]); break;
​
			case '\n': if (!rep)
			           {
				        rep = 1;
​
				        reptr = &string[j + 1];
​
			            }
					   break;
​
			default: fprintf(stream, "    ");
			}
​
			// 개행 문자를 만나게 되면, 문자열의 출력을 개행문자까지 하기로 함.
			if (temp2 == '\n')
				break;
		}
​
		fprintf(stream, "\n");
	}
​
	// rep의 값이 1일 경우, 다시 신호를 off로 바꿈.
	if (rep)
	{
		rep = 0;
​
		// 개행문자가 있을 경우, 그 이후의 문자열들은 재귀적으로 호출한 fstrtd()에서 처리한다.
		fstrtd(stream, reptr);
​
		reptr = NULL;
	}
​
​
	fflush(stream);
	return len;
}​
​​