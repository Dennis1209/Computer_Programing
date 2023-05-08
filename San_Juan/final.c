#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include "function.h"

int player_num = 4;
int Level = 1;
int Gov;

int8_t goods_price[6][5] = {
     {1, 2, 3, 4, 5},   //index
     {1, 1, 2, 2, 2},
     {1, 1, 1, 2, 2},
     {1, 2, 2, 2, 3},
     {1, 1, 2, 2, 3},
     {1, 2, 2, 3, 3}
};
char role[5][16] ={
    "建築師",
    "生產者",
    "商人",
    "市長",
    "掏金者"
};
int main()
{
        srand(time(0));
        Player *player[4];
        int32_t choice = 0;
        int32_t flag = 0;
        int32_t people = 0;
        while(1)
        {
            printf("\n");
            PrintLine;
            printf("\n");
            printf("歡迎遊玩聖胡安，請選擇以下功能!\n");
            printf("1)\033[34m開始遊戲\033[0m\n");
            printf("2)查看此遊戲的各種規則與牌種\n");
            printf("3)有關遊戲的資訊\n");
            printf("4)\033[31m退出遊戲!!\033[0m\n");
            printf("請輸入(號碼):");
            if( scanf("%d",&choice)!=1 || choice >4 || choice <1)
            {
                printf("請不要輸入錯誤的數字阿!\n");
                continue;
            }
            if(choice == 1)
            {
                flag = 1;
                break;
            }
            if(choice == 2)
            {
                int32_t x = 0;
                printRules();
                
                while(1)
                {
                    scanf("%d",&x);
                    if(x!=8)
                    {
                        printf("沒用的指令，，請再輸入一次\n");
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                continue;
            }
            if(choice == 3)
            {
                int32_t y = 0;
                printInfo();
                while(1)
                {
                    scanf("%d",&y);
                    if(y!=8)
                    {
                        printf("沒用的指令，請再輸入一次\n");
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                continue;
            }
            if(choice == 4)
            {
                int32_t quit = 0;
                printf("\033[31m真的要退出了嗎?\033[0m\n");
                printf("按下4-->\033[31m是\033[0m，按下其他數字-->\033[34m否\033[0m\n");
                scanf("%d",&quit);
                if(quit == 4)
                {
                    printf("祝福助教和老師有愉快的暑假!!\n");
                    exit(0);
                }
                else
                {
                    continue;
                }
            }
        }
        if(flag == 1)
        {
            printf("\n");
            for(int i=0; i<4; i++)
            player[i] = calloc(1, sizeof(Player) * 4);
            if(set_game(player))
            {
                printf("Wrong INPut!\n");
            }
            printf("\n");
            PrintLine;
            Pool pool, discard;
            set_table(&pool, player, &discard);
//game start
            PrintLine;
            printf("        \n\033[31m遊戲開始!\033[0m\n");
            print_board(player);
//game loop
            while( game_turn(&pool, player, &discard) )
            {
                before_turn(&pool, player, &discard);
                print_board(player);
             }
            PrintLine;
            end_game(player);
            free_all(&pool, player, &discard);
            printf("遊戲終於結束了....\n\n\n\n");
            printf("老師應該玩不到這裡吧XD!\n\n");

            return 0;
        }
}
        