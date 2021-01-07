#include "minesweeper.h"

void minesweeper()
{
    srand(time(NULL));
    int32_t w, h, mine;
    if (allInput(&w, &h, &mine))
        return;
    int32_t map[h][w];              //showing on screen,also saving flag placement
    int32_t open[h][w];             //checking is the square opened
    int32_t num[h][w];              //store mine place and mine counter
    for (int32_t i = 0; i < h; i++) //init arrays
    {
        for (int32_t j = 0; j < w; j++)
        {
            num[i][j] = 0;
            map[i][j] = 0;
            open[i][j] = 0;
        }
    }
    int32_t mineCount = mine;
    int32_t mx, my; //random location for mine
    while (mine) //init mine location
    {
        mx = rand() % w;
        my = rand() % h;
        if (num[my][mx] == 0)
        {
            num[my][mx] = -1;
            mine--;
        }
    }

    for (int32_t i = 0; i < h; i++) //caculate mine counter
    {
        for (int32_t j = 0; j < w; j++)
        {

            if (num[i][j] == -1)
                continue;
            int32_t counter = 0;
            for (int32_t p = -1; p < 2; p++)
                for (int32_t q = -1; q < 2; q++)
                {
                    if ((p + i) < 0 || (q + j) < 0 || p + i >= h || q + j >= w)
                        continue;
                    if (num[p + i][q + j] == -1)
                        counter++;
                }
            num[i][j] = counter;
        }
    }
    int32_t game = 1; //check whether the game is end
    int32_t option;   //get player's choice(1 is open,2 is flag)
    int32_t x, y;     //chosen square
    while (game)
    {
        drawGrid(&num[0][0], w, h, &open[0][0]);
        getChoice(&option, &x, &y, w, h, &open[0][0]);
        //printf("y = %d,x = %d\n", y, x);
        modifySquare(&game, &num[0][0], &open[0][0], x, y, w, h, option);
        //printf("unopen %d\n", getunOpenSquare(&open[0][0], w, h));
        if (!(getunOpenSquare(&open[0][0], w, h) - mineCount))
            break;
    }
    if (game == 0)
    {
        printf("\033[1;31mYou hit a mine,You lose.\n");
        return;
    }
    else
    {
        printf("\033[1;31mYou win!\n");
        return;
    }
}
int32_t allInput(int32_t *width, int32_t *height, int32_t *mine)
{
    printf("Please enter the width  (10-16): ");
    if (input(width, 10, 16))
        return 1;
    printf("Please enter the height (10-16): ");
    if (input(height, 10, 16))
        return 1;
    printf("Please enter the mine number (30-90): ");
    if (input(mine, 30, 90))
        return 1;
}
int32_t input(int32_t *a, int32_t range0, int32_t range1)
{
    if (scanf("%d", a) != 1 || (*a < range0 || *a > range1))
    {
        printf("ERROR\n");
        return 1;
    }
    return 0;
}
int32_t getChoice(int32_t *o, int32_t *x, int32_t *y, int32_t width, int32_t height, int32_t *open)
{

    while (1)
    {
        printf("Your Option (1:Open, 2: Flag): ");
        if (!input(o, 1, 2))
            break;
    }
    while (1)
    {
        printf("Position (row,column): ");
        if (!input(y, 0, width - 1) && !input(x, 0, height - 1))
        {
            int32_t *openloc = ((open + *y * height) + *x);
            if (*o == 1 && *openloc == 1)
            {
                printf("Square is already opened.\n");
                y = NULL;
                x = NULL;
            }
            else if (*o == 1 && *openloc == 2)
            {
                printf("Square is flagged.\n");
                y = NULL;
                x = NULL;
            }

            else
            {
                break;
            }
        }
    }
    return 1;
}
void drawGrid(int32_t *num, int32_t w, int32_t h, int32_t *open)
{
    printf("\n");
    { //index print
        printf("    ");
        for (int32_t i = 0; i < w; i++)
        {
            printf("%3d", i);
        }
        printf("\n");
        for (int32_t i = 0; i < w * 3 + 5; i++)
        {
            printf("-");
        }
        printf("\n");
    }
    int32_t color[8] = {34, 32, 31, 35, 36, 33, 43, 41};
    for (int32_t i = 0; i < h; i++)
    {
        printf("\033[0;39m");
        printf("%3d|", i);
        for (int32_t j = 0; j < w; j++)
        {
            printf("\033[0;39m");
            //printf("%d %d\n", *num, *open);
            if (*open == 2)
            {
                printf("  \033[1;47m\033[1;31mF");
                *open++;
                *num++;
                continue;
            }
            if (*open == 1)
            {
                if (*num == -1)
                {
                    printf("  M");
                    *open++;
                    *num++;
                    continue;
                }
                if (*num != 0)
                {

                    printf("\033[0;%dm%3d", color[*num - 1], *num);
                    *open++;
                    *num++;
                    continue;
                }
                if (*num == 0)
                {
                    printf("   ");
                    *open++;
                    *num++;
                    continue;
                }
            }
            else if (*open == 0)
            {
                printf("  *");
                *open++;
                *num++;
                continue;
            }
        }
        printf("\033[0;39m\n");
    }
}
void modifySquare(int32_t *game, int32_t *mine, int32_t *open, int32_t x, int32_t y, int32_t w, int32_t h, int32_t option)
{
    int32_t *openloc = ((open + y * w) + x);
    int32_t *mineloc = ((mine + y * w) + x);
    //printf("%d %d\n", *open, *mine);
    //printf("openloc = %d,mineloc = %d\n", *openloc, *mineloc);
    if (option == 1)
    {
        if (*mineloc == -1)
        {
            *game = 0;
            return;
        }
        if (*mineloc != 0)
        {
            *openloc = 1;
            return;
        }
        if (*mineloc == 0)
        {
            *openloc = 1;
            for (int32_t i = -1; i < 2; i++)
            {
                for (int32_t j = -1; j < 2; j++)
                {

                    if (y + i >= h || y + i < 0 || x + j < 0 || x + j >= w)
                        continue;

                    if ((*(open + (y + i) * h + x + j)) == 1)
                        continue;
                    if ((*(open + (y + i) * h + x + j)) == 2)
                        continue;
                    if ((*(mine + (y + i) * h + x + j)) == -1)
                        continue;
                    if ((*(mine + (y + i) * h + x + j)) != 0)
                    {
                        *(open + (y + i) * h + x + j) = 1;
                        continue;
                    }
                    //printf("y+i = %d,x+j = %d\n", y + i, x + j);
                    if ((*(mine + (y + i) * h + x + j)) == 0)
                        modifySquare(game, mine, open, x + j, y + i, w, h, 1);
                }
            }
            return;
        }
    }

    else if (option == 2)
    {
        if (*openloc == 1)
        {
            printf("Square is already opened.\n");
            return;
        }
        if (*openloc == 2)
            *openloc = 0;
        else
            *openloc = 2;
        return;
    }
}
int32_t getunOpenSquare(int32_t *open, int32_t w, int32_t h)
{
    int32_t returnValue = 0;
    for (int32_t i = 0; i < h; i++)
    {
        for (int32_t j = 0; j < w; j++)
        {
            if (*open == 0)
                returnValue++;
            *open++;
        }
    }
    return returnValue;
}
