#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#define PrintLine  printf("-----這是分隔線~這是分隔線~-----\n")
#define PrintC printf("-->")
#define Error_num printf("\033[31m這不是對的數字喔~~\033[0m\n\n")
#define WAIT usleep(0)

extern int player_num;
extern int Level;
extern int Gov;
extern int8_t goods_price[6][5];
extern char role[5][16];

typedef struct _Pool{
    int32_t size;
    struct _Card *P_head;
    struct _Card *P_tail;
} Pool;
typedef struct _Card{
    char name[32];
    int cost;
    int point;
    int num;
    int type;   // 1~5:normal , 0:purple
    struct _Card *Last_card;
    struct _Card *Next_card;
    struct _Pool *goods;
} Card;
typedef struct _Player{
    char name[32];
    int role;
    int point;
    Pool *hand;
    Pool *table;
} Player;
void printRules();
void printInfo();
int Builder(Pool *pool, Player *player[4], Pool *discard, int acter);
void Producer(Pool *pool, Player *player[4], Pool *discard, int acter);
void Trader(Pool *pool, Player *player[4], Pool *discard, int acter);
void Councilor(Pool *pool, Player *player[4], Pool *discard, int acter);
void Prospecter(Pool *pool, Player *player[4], Pool *discard, int acter);
void init_Player(Player *player, char *str);
int set_game(Player *player[4]);
void set_table(Pool *pool, Player *player[4] , Pool *discard);
int Menu();
int get_com(int up, int low, int *target, Player *player[4]);
void print_board(Player *player[4]);
int game_turn(Pool *pool, Player *player[4], Pool *discard);
void before_turn(Pool *pool, Player *player[4], Pool *discard);
void end_game(Player *player[4]);
int32_t init_Pool( Pool *pool );
Card* add_card(Pool *pool, char *name, int cost, int point, int num, int type );
void set_pool(Pool *pool);
void shuffle( Pool *pool );
int draw( Pool *hand, Pool *pool,Pool *discard, int num);
void print_card( Pool *pool );
void free_all(Pool *pool, Player *player[4], Pool *discard);
int build_check(char *build, Pool *table);
void Chapel(Player *player[4], int acter);
int Smithy(int cost, Pool *table);
void Poor_house(Pool *pool, Player *player, Pool *discard);
void Black_market(Player *player[4], int acter, Pool *discard, int cost);
void Crane(Player *player, Pool *discard, int com, int position);
int Carpenter(Pool *pool, Player *player, Pool *discard, Card *card);
int Quarry(int cost, Pool *table, Card *card);
void Well(Pool *pool, Player *player, Pool *discard, int goods_num);
int Aqueduct(Player *player, int goods_num);
void Market_stand(Pool *pool, Player *player, Pool *discard, int sells_num);
void Market_hall(Pool *pool, Player *player, Pool *discard);
int Trading_post(Player *player, int sells_num);
void Archive(Player *player, Pool *buffer);
int Prefecture(Player *player, int dis_num);
void Gold_mine(Pool *pool, Player *player[4], int acter, Pool *discard);
int Library(Pool *table, int num, int role);
void Guild_hall(Player *player);
void City_hall(Player *player);
void Triumphal_arch(Player *player);
void Palace(Player *player);

























