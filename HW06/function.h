#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>
#pragma once

void options(int64_t *num);//hw0601
void edit(int64_t *num, int32_t position, uint32_t change_num );//hw0601
void printNumber(int32_t *a_ptr, int32_t index);//hw0602
void redo(int32_t *index);//hw0602
void undo(int32_t *index);//hw0602
void TenNum(int32_t *a_ptr);//hw0602
void rotate( double *x, double *y, double theta );//hw0603
void project(double *x, double *y, double *z, int32_t a, int32_t b, int32_t c, int32_t d );//hw0604
int32_t examine( uint8_t a[], uint8_t b[], uint8_t c[], uint8_t d[] );//hw0605
void sort_card( uint8_t player[], void (func()));//hw0605
void print_card( uint8_t []);//hw0605.c
void func01( uint8_t [] );//hw0605.c
void func02( uint8_t [] );//hw0605.c
void func03( uint8_t [] );//hw0605.c 
