#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int32_t allInput(int32_t *width, int32_t *height, int32_t *mine);
int32_t input(int32_t *a, int32_t range0, int32_t range1);
int32_t getChoice(int32_t *o, int32_t *c, int32_t *r, int32_t width, int32_t height, int32_t *open);
int32_t getunOpenSquare(int32_t *open, int32_t w, int32_t h);
void drawGrid(int32_t *num, int32_t w, int32_t h, int32_t *open);
void modifySquare(int32_t *game, int32_t *mine, int32_t *open, int32_t x, int32_t y, int32_t w, int32_t h, int32_t option);
void minesweeper();

