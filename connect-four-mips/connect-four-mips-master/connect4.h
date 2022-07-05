//  Created by Shivendra Mall

#ifndef FUNCTION_H_
#define FUNCTION_H_
#include <stdio.h> 
#include <stdint.h>
#include <stdlib.h>
uint32_t random_in_range(uint32_t low, uint32_t high);
uint32_t get_random();
void printGameBoard();
int isGameOver();
void userMove();
void compMove();
#endif
