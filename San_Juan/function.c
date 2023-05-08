#include "function.h"
void printRules()
{
    printf("\n");
    printf("\033[31m輸入8可以返回首頁\033[0m\n");
    printf("\n");
    printf("\033[36m1.遊戲準備\033[0m\n");
    printf("(1)將5張行動卡正面朝上散置於桌面中央，5張商品價目表集中，正面朝下\n");
    printf("洗勻後，堆成一疊置於商人行動卡的旁邊。任選一玩家擔任起始玩家，並\n");
    printf("將總督卡正面朝上置於該起始玩家面前桌上\n");
    printf("\n");
    printf("\n");
    printf("(2)每位玩家各分發1張染料厰卡，玩家們分別將其置於自家面前桌上。將\n");
    printf("其餘的所有建築卡集中，正面朝下洗勻後，每位玩家各分發4張成為起始\n");
    printf("手牌。將剩下的卡牌形成牌堆，正面朝下置於桌面中央備用\n");
    printf("\n");
    printf("\n");
    printf("\033[33m2.遊戲進行\033[0m\n");
    printf("(1)遊戲將進行若干回合，從第二回合起之各回合首先由持有總督卡的玩家\n");
    printf("提醒桌面上已打出禮拜堂的玩家可挑選其中1張手牌正面朝下置於該張卡\n");
    printf("牌底下。接著，各玩家計算自家的手牌張數，若超出7張上限須將超出的\n");
    printf("手牌正面朝下丟置桌面旁邊的棄牌區，擁有塔樓的玩家可將手牌上限增加\n");
    printf("至12張(起始回合可略過)\n");
    printf("\n");
    printf("\n");
    printf("(2)由持有總督卡的玩家開始，從桌面上的5張行動卡中，挑選1張置於自家\n");
    printf("面前，並根據所選擇的行動卡的職業類型，從該玩家開始，依順時針方\n");
    printf("向，所有玩家們輪流依序執行對應行動。之後，由持有總督卡玩家的左手\n");
    printf("邊玩家，挑選另1張行動卡置於自家面前，並根據所選擇的行動卡的職業\n");
    printf("類型，從該玩家開始，依順時針方向，所有玩家們輪流依序執行對應行\n");
    printf("動，依此類推\n");
    printf("\n");
    printf("\n");
    printf("(3)當所有玩家皆已選擇行動卡並完成對應行動後，所有玩家將自家面前的\n");
    printf("行動卡放回置於桌面中央。原持有總督卡的玩家將總督卡傳遞給其左手邊\n");
    printf("玩家，本回合即告結束，進入次一回合\n");
    printf("\n");
    printf("\n");
    printf("(4)2位玩家進行時，由持有總督卡的玩家開始，雙方輪流從桌面上的5張行\n");
    printf("動卡中，挑選1張置於自家面前並執行對應行動。當持有總督卡的玩家挑\n");
    printf("選2次行動卡(即總共完成3種職業行動)後，本回合即告結束，進入次一\n");
    printf("回合。另外，各回合已打出圖書館卡牌的玩家僅能執行其特殊效能一次\n");
    printf("\n");
    printf("\n");
    printf("\033[34m3.行動卡介紹：\033[0m\n");
    printf("共5種職業，每一角色皆各包含「特權行動」及「一般行\n");
    printf("動」。特權行動只有挑選該張行動卡的玩家才可執行，一般行\n");
    printf("動為其他所有玩家皆可執行。在執行各種職業行動卡的特權行\n");
    printf("動或一般行動時，玩家可選擇放棄行使\n");
    printf("\n");
    printf("(1)建築師(Builder)\n");
    printf("玩家在建造建築物(即打出手牌正面朝上置於桌上)時，生產建築物無數量\n");
    printf("限制，但特殊建築物每種只能建造1棟\n");
    printf("\n");
    printf("A.特權行動\n");
    printf("持總督卡的玩家從手牌中打出1張欲建造的建築卡，置於自家面前，根\n");
    printf("據建築卡上的所示費用，支付對應手牌張數時，可減少支付1張手牌，\n");
    printf("但建築最後支付的費用不能少於0\n");
    printf("\n");
    printf("B.一般行動\n");
    printf("從持總督卡玩家的左手邊玩家開始，依順時針方向，各玩家輪流從手牌\n");
    printf("中打出1張欲建造的建築卡，置於自家面前，根據建築卡上的所示費\n");
    printf("用，支付對應手牌張數\n");
    printf("\n");
    printf("(2)生產者(Producer)\n");
    printf("每種生產建築物只能生產1個貨品(即從卡牌堆上方抽取的卡牌)，若玩家\n");
    printf("無足夠空間置放，將無法從卡牌堆上方抽取卡牌。若卡牌堆已抽盡，則將\n");
    printf("棄牌區的卡牌正面朝下集中洗勻，形成新的卡牌堆\n");
    printf("\n");
    printf("A.特權行動\n");
    printf("可生產2個貨品(即從卡牌堆上方抽取2張卡牌，正面朝下直接置於自家\n");
    printf("生產建築物下方，玩家不能偷看內容)\n");
    printf("\n");
    printf("B.一般行動\n");
    printf("從持總督卡玩家的左手邊玩家開始，依順時針方向，各玩家輪流生產1\n");
    printf("個貨品(即從卡牌堆上方抽取1張卡牌，正面朝下直接置於自家生產建\n");
    printf("築物下方，玩家不能偷看內容)\n");
    printf("\n");
    printf("(3)商人(Trader)\n");
    printf("翻開最上方的商品價目表，表上各商品的數字即為其銷售價格。所有玩家\n");
    printf("行動完成後，將商品價目表正面朝下置於商品價目表堆的最下方\n");
    printf("\n");
    printf("A.特權行動\n");
    printf("可賣出2個貨品(即丟棄2張置於自家生產建築下方的卡牌，並從卡牌堆\n");
    printf("上方抽取對應貨品價格數量張數的卡牌加入手牌)\n");
    printf("\n");
    printf("B.一般行動\n");
    printf("從持總督卡玩家的左手邊玩家開始，依順時針方向，各玩家輪流賣出1\n");
    printf("個貨品(即丟棄1張置於自家生產建築下方的卡牌，並從卡牌堆上方抽\n");
    printf("取對應貨品價格數量張數的卡牌加入手牌)\n");
    printf("\n");
    printf("(4)市長(Councilor)\n");
    printf("A.特權行動\n");
    printf("持總督卡的玩家可從卡牌堆上方抽取5張卡牌，挑選其中1張加入手\n");
    printf("牌，其餘的卡牌則正面朝下丟置棄牌區\n");
    printf("\n");
    printf("B.一般行動\n");
    printf("從持總督卡玩家的左手邊玩家開始，依順時針方向，各玩家輪流從卡牌\n");
    printf("堆上方抽取2張卡牌，挑選其中1張加入手牌，其餘的卡牌則正面朝下\n");
    printf("丟置棄牌區\n");
    printf("\n");
    printf("(5)淘金者(Prospector)\n");
    printf("A.特權行動\n");
    printf("持總督卡的玩家可從卡牌堆上方抽取1張卡牌加入手牌\n");
    printf("\n");
    printf("B.一般行動：無\n");
    printf("\n");
    printf("\n");
    printf("\033[42m４.遊戲結束\033[0m\n");
    printf("遊戲在有玩家建造12棟建築物時立即結束，玩家們分別將所獲得的分數加\n");
    printf("總計算，由最後加總分數最高者成為遊戲贏家。有關玩家分數的計算方式如\n");
    printf("下所示：\n");
    printf("玩家分數=建築物的分數總和+禮拜堂下方的卡牌張數總和(每張1分)+特殊\n");
    printf("建築的額外分數\n");
    printf("若出現平手局面，則以玩家手牌張數加上貨品張數後的累績張數進行勝負判\n");
    printf("斷，由最多張數的玩家贏得勝利\n");
    printf("\n");
    printf("\033[31m輸入8可以返回首頁\033[0m\n");
}

void printInfo()
{
    printf("\n");
    printf("\033[31m輸入8可以返回首頁\033[0m\n");
    printf("遊戲名稱:聖胡安\n");
    printf("來源(國家):波多黎各\n");
    printf("作者:Andreas Seyfarth\n");
    printf("獲獎:\n");
    printf("2004年德國年度遊戲獎項推薦\n");
    printf("2004年國際玩家大獎最佳多人策略遊戲獎項推薦\n");
    printf("\n");
    printf("\033[31m遊戲內容物:\033[0m\n");
    printf("總督卡(1張)\n");
    printf("行動卡(5張，包括建築師、生產者、商人、市長、淘金者各1張)\n");
    printf("生產建築卡(42張)\n");
    printf("特殊建築卡(68張，紫色)\n");
    printf("遊戲人數(2~4)，3人最理想\n");
    printf("\033[31m輸入8可以返回首頁\033[0m\n");

}




int Builder(Pool *pool, Player *player[4], Pool *discard, int acter){
    for(int i=0; i<player_num; i++){
    //player
        if(acter == 0){
            PrintLine;
            printf("\n");
            print_card(player[acter]->hand);
            printf("請選擇一張牌來建造吧:\n");
            printf(" 8)  查看場上\n");
            printf(" 9)  退出\n"); 
            printf(" 0)  跳過這次行動\n");
            printf("\n");
            PrintLine;

        //get com
            int com;
            get_com(0, player[acter]->hand->size, &com, player);

            if(com == 0){
                acter = (acter+1)%player_num;
                continue;
            }
            else{
            //get card
                Card *card = player[acter]->hand->P_head;
                for(int j = 1; j<com; j++)  card = card->Next_card;

            //build check
                if(card->type==0 && build_check(card->name, player[acter]->table)){
                    printf("你不能重複建造同一個特殊建築物啦!!\n");
                    i--;
                    continue;
                }

            //get cost
                int cost = card->cost;
                int crane_check = 0;

                if( build_check("起重機", player[acter]->table) ){
                    printf("\n");
                    print_card(player[acter]->table);
                    printf("請問你想使用(起重機)的功能嗎?\n");
                    printf(" 8)  查看場上\n");
                    printf(" 9)  退出\n");
                    printf(" 0)  我才不要用勒!\n");
                    printf("\n");
                    PrintLine;

                    get_com(0, player[acter]->table->size, &crane_check, player);

                    if( !crane_check ){
                    //get cost
                        Card *ca = player[acter]->table->P_head;
                        for(int j = 1; i<crane_check; j++)  ca = ca->Next_card;
                        cost = cost - ca->cost;
                    }
                }


                cost = (i==0 ? cost-1:cost);
                cost = Smithy(cost, player[acter]->table);
                cost = Quarry(cost, player[acter]->table, card);
                if(i == 0)
                    cost = Library(player[acter]->table, cost, 1);

                cost = (cost<0 ? 0:cost);

                if(player[acter]->hand->size > cost){
                //build
                    if( Carpenter(pool, player[acter], discard, card) )
                        printf("%s 抽一張牌 (木工場的效果)\n", player[acter]->name);


                    if(crane_check)
                        Crane(player[acter], discard, com, crane_check);
                    else{
                        player[acter]->point += card->point;
                        draw(player[acter]->table, player[acter]->hand, NULL, com);
                    }

                //pay
                    if( build_check("黑市", player[acter]->table) ){
                        Black_market(player, acter, discard, cost);
                    }
                    else{
                        for(int j=0; j<cost; j++){
                            int com2;
                            printf("\n");
                            print_card(player[acter]->hand);
                            printf("\n選一張牌來付吧~ (%d/%d)(已付/未付):\n", j, cost);
                            printf(" 8)  查看場上\n");
                            printf(" 9)  退出\n");
                            printf("\n");
                            PrintLine;

                            get_com(0, player[acter]->hand->size, &com2, player);
                            draw(discard, player[acter]->hand, NULL, com2);
                        }
                    }

                }
                else{
                    printf("喔喔，你沒有足夠的手牌來付喔(不能賒帳)\n\n");
                    i--;
                    continue;
                }
            }
        }

    //bot
        else{
        //get com
            int com;
            switch(Level){
            case 1:
                com = rand() % (player[acter]->hand->size+1);
                break;
            case 2:break;
            case 3:break;
            }

            if(com == 0)
                printf("%s 選擇跳過\n", player[acter]->name);
            else{
            //get card
                Card *card = player[acter]->hand->P_head;
                for(int j=1; j<com; j++)
                    card = card->Next_card;

            //build check
                if(card->type==0 && build_check(card->name, player[acter]->table)){
                    i--;
                    continue;
                }

            //get cost
                int cost = (i==0 ? card->cost-1:card->cost);
                cost = Smithy(cost, player[acter]->table);
                cost = Quarry(cost, player[acter]->table, card);
                if(i == 0)
                    cost = Library(player[acter]->table, cost, 1);

                cost = (cost<0 ? 0:cost);

                if(player[acter]->hand->size > cost){
                //build
                    printf("%s 建造了 %s\n", player[acter]->name, card->name);
                    if( Carpenter(pool, player[acter], discard, card) )
                        printf("%s 抽一張牌 (木工場的效果)\n", player[acter]->name);

                    player[acter]->point += card->point;
                    draw(player[acter]->table, player[acter]->hand, NULL, com);

                //pay
                    for(int j=0; j<cost; j++){
                        int com2 = rand()%player[acter]->hand->size + 1;
                        draw(discard, player[acter]->hand, NULL, com2);
                    }
                }
                else{
                    i--;
                    continue;
                }
            }
        }

        WAIT;

        if(player[acter]->table->size >= 12)
            return 0;

        Poor_house(pool, player[acter], discard);


        acter = (acter+1)%player_num;
    }
    return 1;
}

void Producer(Pool *pool, Player *player[4], Pool *discard, int acter){
    for(int i=0; i<player_num; i++){
    //check goods space
        int goods_num = (i==0 ? 2:1), space = 0;

        if(i == 0)
            goods_num = Library(player[acter]->table, goods_num, 2);
        goods_num = Aqueduct(player[acter], goods_num);

        for(Card *j = player[acter]->table->P_head; j!=NULL && space!=2; j = j->Next_card){
            if(j->type!=0 && j->goods->size==0) space++;
        }

        if(space == 0){
            printf("%s 沒有空間生產貨物啦!!\n", player[acter]->name);
            acter = (acter+1) % player_num;
            continue;
        }
        else    goods_num = (space>=goods_num? goods_num:space);


        Well(pool, player[acter], discard, goods_num);

    //produce
        for(int j=0; j<goods_num; j++){
        //player
            if(acter == 0){
                PrintLine;
                printf("\n");
                print_card(player[acter]->table);
                printf("選擇一個建築生產貨物吧?(%d/%d)(已選/需選):\n", j, goods_num);
                printf(" 8)  查看場上\n");
                printf(" 9)  退出\n");
                printf("\n");
                PrintLine;

            //get com
                int com;
                get_com(1, player[acter]->table->size, &com, player);

            //get card
                Card *card = player[acter]->table->P_head;
                for(int k = 1; k<com; k++)  card = card->Next_card;

                if(card->type == 0){
                    printf("這不是一張生產建築卡喔!\n\n");
                    j--;
                    continue;
                }
                else if(card->goods->size != 0){
                    printf("已經有貨物啦(不能再生產了)\n\n");
                    j--;
                    continue;
                }
                else{
                    draw(card->goods, pool, discard, 1);
                }
            }

        //bot
            else{
            //get com
                int com;

                switch(Level){
                case 1:
                    com = rand()%player[acter]->table->size +1;
                    break;
                case 2: break;
                case 3: break;
                }

            //get card
                Card *card = player[acter]->table->P_head;
                for(int k = 1; k<com; k++)  card = card->Next_card;

                if(card->type == 0){
                    j--;
                    continue;
                }
                else if(card->goods->size != 0){
                    j--;
                    continue;
                }
                else{
                    draw(card->goods, pool, discard, 1);
                    printf("%s 在 %s 生產了貨物\n", player[acter]->name, card->name);
                }

                WAIT;
            }
        }//produce end

        acter = (acter+1) % player_num;
    }

    return;
}

void Trader(Pool *pool, Player *player[4], Pool *discard, int acter){
//get price
    int price = goods_price[0][0];
    for(int i=0; i<4; i++)
        goods_price[0][i] = goods_price[0][i+1];
    goods_price[0][4] = price;

//Trader
    for(int i=0; i<player_num; i++){
    //check sells num
        int sells_num = (i==0 ? 2:1), goods_num = 0;

        if(i == 0)
            sells_num = Library(player[acter]->table, sells_num, 3);
        sells_num = Trading_post(player[acter], sells_num);

        for(Card *j = player[acter]->table->P_head; j!=NULL; j = j->Next_card){
            if(j->type!=0 && j->goods->size!=0) goods_num++;
        }

        if(goods_num == 0){
            printf("%s 沒有貨物可以賣了\n", player[acter]->name);
            acter = (acter+1) % player_num;
            WAIT;
            continue;
        }
        else    sells_num = (goods_num>=sells_num? sells_num:goods_num);

        Market_stand(pool, player[acter], discard, sells_num);

    //trade
        for(int j=0; j<sells_num; j++){
        //player
            if(acter == 0){
                PrintLine;
                printf("\n");
                printf("請選貨物來賣吧 (%d/%d)(已賣/需賣):\n", j, sells_num);
                printf("商品價目表: [%d, %d. %d, %d, %d]\n",
                       goods_price[price][0],goods_price[price][1],goods_price[price][2],goods_price[price][3],goods_price[price][4]);
                print_card(player[acter]->table);
                printf(" 8)  查看場上\n");
                printf(" 9)  退出\n");
                printf("\n");
                PrintLine;

            //get com
                int com;
                get_com(1, player[acter]->table->size, &com, player);

            //get card
                Card *card = player[acter]->table->P_head;
                for(int k = 1; k<com; k++)  card = card->Next_card;

                if(card->goods->size == 0){
                    printf("沒有貨物可以賣了!!\n\n");
                    j--;
                    continue;
                }
                else{
                    int type = card->type;
                    if(card->goods->P_head->Next_card == NULL)     //check Crane
                        draw(discard, card->goods, NULL, 1);
                    else
                        draw(discard, card->goods, NULL, 2);

                    for(int k=0; k<goods_price[price][type-1]; k++)
                        draw(player[acter]->hand, pool, discard, 1);
                }
            }
        //bot
            else{
                Card *card = player[acter]->table->P_head;

            //get card
                switch(Level){
                case 1:
                    for(; card->goods->size==0; card = card->Next_card);
                case 2:break;
                case 3:break;
                }

            //trade
                int type = card->type;
                draw(discard, card->goods, NULL, 1);
                printf("%s 賣了 %s 的貨物\n", player[acter]->name, card->name);

                for(int k=0; k<goods_price[price][type-1]; k++)
                    draw(player[acter]->hand, pool, discard, 1);
                printf("%s 抽了 %d 張牌\n", player[acter]->name, goods_price[price][type-1]);

                WAIT;
            }
        }

        Market_hall(pool, player[acter], discard);

        acter = (acter+1) % player_num;
    }

    return;
}

void Councilor(Pool *pool, Player *player[4], Pool *discard, int acter){
    for(int i=0; i<player_num; i++){
        int draw_num = (i==0 ? 5:2);
        int dis_num = draw_num-1;

        if(i == 0)
            draw_num = Library(player[acter]->table, draw_num, 4);
        dis_num = Prefecture(player[acter], dis_num);

        Pool *buffer = calloc(1, sizeof(Pool));
        init_Pool(buffer);

        Archive(player[acter], buffer);

    //player
        if(acter == 0){
            for(int j=0; j<draw_num; j++)
                draw(buffer, pool, discard, 1);

            for(int j=0; j<dis_num; j++){
                PrintLine;
                printf("\n");
                printf("請選擇一張牌棄掉(%d/%d)(已棄/需棄)\n", j, dis_num);
                print_card(buffer);
                printf(" 8)  查看場上\n");
                printf(" 9)  退出\n");
                printf("\n");
                PrintLine;

            //get com
                int com;
                get_com(1, buffer->size, &com, player);

            //discard
                draw(discard, buffer, NULL, com);
            }

        //keep
            while(buffer->size != 0)
                draw(player[acter]->hand, buffer, NULL, 1);
        }

    //bot
        else{
            for(int j=0; j<draw_num; j++)
                draw(buffer, pool, discard, 1);

            printf("%s 抽了 %d 張牌\n", player[acter]->name, draw_num);

            for(int j=0; j<dis_num; j++){
            //get com
                int com;
                switch(Level){
                case 1:
                    com = rand()%buffer->size + 1;
                case 2: break;
                case 3: break;
                }

            //discard
                draw(discard, buffer, NULL, com);
            }
            printf("%s 捨棄了 %d 張牌\n", player[acter]->name, dis_num);

        //keep
            while(buffer->size!=0)
                draw(player[acter]->hand, buffer, NULL, 1);
        }

        free(buffer);

        WAIT;
        acter = (acter+1) % player_num;
    }

    return;
}

void Prospecter(Pool *pool, Player *player[4], Pool *discard, int acter){
//privilege
    int draw_num = 1;

    draw_num = Library(player[acter]->table, draw_num, 5);

    for(int i=0; i<draw_num; i++)
        draw(player[acter]->hand, pool, discard, 1);

    if(acter != 0)
        printf("%s 抽了 %d 張牌\n",player[acter]->name, draw_num);

    WAIT;

    Gold_mine(pool, player, acter, discard);

    return;
}
void init_Player(Player *player, char *str){
    strncpy(player->name, str, 32);
    player->role = 0;
    player->point = 1;
    player->hand = calloc(1, sizeof(Pool));
    player->table = calloc(1, sizeof(Pool));
    init_Pool(player->hand);
    init_Pool(player->table);
    return;
}

int set_game(Player *player[4]){
    int set_check = 1;
    int com_check = 1;
    char com[17] = {0};
    init_Player(player[0], "紀博文教授(1)");
    init_Player(player[1], "阿爾法狗(2)");
    init_Player(player[2], "Siri(3)");
    init_Player(player[3], "索菲亞(4)");
    PrintLine;
    printf("\n");
    printf("你想要多少人一起玩(2~4): ");
    while(com_check)
    {
        com_check = !get_com(2, 4, &player_num, player);
    }

    /*while( set_check ){
        PrintLine;
        printf("你想要多少人跟你一起玩(1~3): %d\n", player_num);
        for(int i=0; i<player_num; i++){
            if(i == 0)
                printf("\nPlayer %d name : %s\n", i+1, player[i]->name);
            else
                printf("\nPlayer %d name (Bot) : %s\n", i+1, player[i]->name);
        }*/

        // get command
        

        /*printf("Please input your command:\n");
        while(com_check){
            PrintC;
            fgets(com, 16, stdin);
            if( !strcmp(com, "player_num\n") ){
                printf("\nEnter a number (2~4): \n\n");
                com_check = !get_com(2, 4, &player_num, player);
            }
            else if( !strcmp(com, "player_name\n") ){
                int num = 0;
                printf("\nEnter the player num (1~4): \n\n");
                com_check = !get_com(1, 4, &num, player);

                printf("\nEnter player name (less then 16 characters):\n\n");
                PrintC;
                fgets(player[num-1]->name, 16, stdin);
                if(player[num-1]->name[strlen(player[num-1]->name)-1] == '\n')
                    player[num-1]->name[strlen(player[num-1]->name)-1] = 0;
            }
            else if( !strcmp(com, "level\n") ){
                int num;
                printf("\nEnter a number (1~3): \n\n");
                com_check = !get_com(1, 3, &Level, player);
            }
            else if( !strcmp(com, "start\n") ){
                return 1;
            }
            else if( !strcmp(com, "end\n") ){
                printf("\nBye !\n");
                return 0;
            }
            else if( com[0] == '\n'){
                continue;
            }
            else{
                printf("\nInvalid command !\n\n");
                continue;
            }
        } //com end
    } //set end*/
    return 0;
}

void set_table(Pool *pool, Player *player[4] , Pool *discard){
// init
    init_Pool(pool);
    init_Pool(discard);
    for(int i=0; i<player_num; i++){
        init_Pool(player[i]->hand);
        init_Pool(player[i]->table);
    }

// set pool
    set_pool(pool);
    shuffle(pool);

//draw
    Gov = rand() % player_num;
    //Gov = 0;


    printf("\n由\033[31m %s\033[0m 先開始\n", player[Gov]->name);
    printf("\n");

    //hand
    switch(player_num){
        case 4:
            for(int i=0; i<8; i++)
                draw(player[(Gov+3)%player_num]->hand, pool, discard, 1);
        case 3:
            for(int i=0; i<7; i++)
                draw(player[(Gov+2)%player_num]->hand, pool, discard, 1);
        case 2:
            for(int i=0; i<6; i++)
                draw(player[(Gov+1)%player_num]->hand, pool, discard, 1);
        case 1:
            for(int i=0; i<5; i++)
                draw(player[Gov]->hand, pool, discard, 1);
    }

    //table
    for(int i=0; i<player_num; i++){
        add_card(player[i]->table, "染料廠", 1, 1, 4, 1);
    }

    //shuffle goods_price
    for(int i=0; i<5; i++){
        int S = rand() % 5, temp;
        temp = goods_price[0][i];
        goods_price[0][i] = goods_price[0][S];
        goods_price[0][S] = temp;
    }

// discard
    for(int i=0; i<player_num; i++){
        int num =  (Gov+i)%player_num;

        // player
        if(num == 0){
            while(player[num]->hand->size > 4){
                int dis = 0;
                PrintLine;
                printf("\n");
                printf("你的手牌: \n");
                print_card(player[num]->hand);
                PrintLine;

                while(1){
                    printf("選一張牌棄掉: \n");
                    if( get_com(1, player[num]->hand->size, &dis, player) ) break;
                }

                draw(discard, player[num]->hand, NULL, dis);
            }
        }

        // bot
        else{
            while(player[num]->hand->size > 4){
                switch(Level){
                case 1:
                {
                    int x= rand()%(player[num]->hand->size)+1;
                    draw(discard, player[num]->hand, NULL, x);
                    break;
                }
                case 2:
                    break;
                case 3:
                    break;
                }
            }
        }
    }

    return ;
}
int Menu(){
    PrintLine;
    printf("\n");
    printf("\033[31m真的要退出了嗎?\033[0m\n");
    printf("按下4-->\033[31m是\033[0m，按下其他數字-->\033[34m否\033[0m\n");
    int32_t correct = 0;
    if(scanf("%d",&correct)!=1)
    {
        printf("這是不對的輸入啊!!!");
    }
    if(correct == 4)
    {
        printf("祝福助教和老師有愉快的暑假!!\n");
        exit(0);
    }
    else
    {
        return 1;
    }
    /*while(1){
        char com[16] = {0};

        PrintC;
        fgets(com, 16, stdin);
        if( !strcmp(com, "continue\n") ){
            PrintLine;
            return 1;
        }
        else if( !strcmp(com, "end_game\n") ){
            printf("\nBye !\n");
            exit(0);
        }
        else if( com[0] == '\n')    continue;
        else    printf("Invalid command!\n");
    }*/

    return 1;
}

int get_com(int low, int up, int *target, Player *player[4]){

    while(1){
        int com = 0;
        scanf("%d",&com);
        getchar();
        if(com == 9){
            Menu();
            continue;
        }
        else if(com == 8){
            print_board(player);
            continue;
        }
        else if(com<low || com>up){
            Error_num;
            continue;
        }
        else{
            *target = com;
            return 1;
        }
    }

    return 1;
}

void print_board(Player *player[4]){
    PrintLine;
    printf("桌面:\n\n");
    for(int i=0; i<player_num; i++){
        if(i == Gov)
            printf("%s (總督)\n", player[i]->name);
        else
            printf("%s\n", player[i]->name);

        printf("角色: ");
        switch(player[i]->role){
            case 1: printf("建築師\t"); break;
            case 2: printf("生產者\t"); break;
            case 3: printf("商人\t"); break;
            case 4: printf("市長\t"); break;
            case 5: printf("掏金者\t"); break;
            default: printf("\t\t");break;
        }

        printf("手牌: %d\t得分: %d\n", player[i]->hand->size, player[i]->point);

        if(i == 0){
            printf("你的手牌:\n");
            print_card(player[i]->hand);
            printf("場上:\n");
        }

        print_card(player[i]->table);
        printf("-------------------------\n");
    }

    PrintLine;
    return;
}

int game_turn(Pool *pool, Player *player[4], Pool *discard){

    for(int i=0; i<player_num; i++){
        int acter = (Gov+i)%player_num;
    // get role
        if(acter == 0){     //player
            int com;
            
            PrintLine;
            putchar('\n');
            printf("選個角色來扮演吧:\n");
            printf("\n");
            for(int j=1; j<=5; j++){
                int check = 0;
                for(int k=0; k<player_num; k++){
                    if(player[k]->role == j){
                        check = 1;
                        break;
                    }
                }

                if( !check )
                    printf("%d) %s\n", j, role[j-1]);
            }
            printf("8) 查看場上\n");
            printf("9) 退出\n");
            printf("\n");
            PrintLine;

            while(1){
                int check = 0;

                if( !get_com(1, 5, &com, player) ) return 0;
                else{
                    for(int j=1; j<player_num; j++){
                        if(player[j]->role == com){
                            check = 1;
                            break;
                        }
                    }

                    if(check){
                        printf("\n每個角色只能選一遍\n\n");
                        continue;
                    }
                    else{
                        player[0]->role = com;
                        putchar('\n');
                        break;
                    }
                }
            }
        }
        else{               //bot
            int com;
            while(1){
                switch(Level){
                    case 1:
                    {
                        com = rand()%5 + 1;
                        break;
                    }
                    case 2:break;
                    case 3:break;
                }

                int check = 0;
                for(int i=0; i<player_num; i++){
                    if(player[i]->role == com){
                        check = 1;
                        break;
                    }
                }
                if(check){
                    continue;
                }
                else{
                    player[acter]->role = com;
                    WAIT;
                    printf("%s 選擇當 %s\n", player[acter]->name, role[com-1]);
                    break;
                }
            }
        }

    //role func
        int end_check = 1;

        switch(player[acter]->role){
            case 1:
                end_check = Builder(pool, player, discard, acter);
                break;
            case 2:
                Producer(pool, player, discard, acter);
                break;
            case 3:
                Trader(pool, player, discard, acter);
                break;
            case 4:
                Councilor(pool, player, discard, acter);
                break;
            case 5:
                Prospecter(pool, player, discard, acter);
                break;
        }

        if( !end_check )
            return 0;

        putchar('\n');

    } //turn end

// reset role
    for(int i=0; i<player_num; i++)
        player[i]->role = 0;

    Gov = (Gov+1) % player_num;
    return 1;
}

void before_turn(Pool *pool, Player *player[4], Pool *discard){
    for(int i=0; i<player_num; i++){
    //check "Chapel"
        Chapel(player, i);

    //check "Tower"
        int hands;

        if(build_check("塔樓", player[i]->table))
            hands = 12;
        else
            hands = 7;

    //check hand card
        if(player[i]->hand->size > hands){
            int dis_num = player[i]->hand->size - hands;

            if(i != 0)
                printf("%s 棄了 %d 張牌\n", player[i]->name, dis_num);


            for(int j=0; j < dis_num; j++){
            //player
                if(i == 0){
                    PrintLine;
                    printf("\n");
                    printf("選擇一些牌丟棄吧 (%d/%d)(已丟/需丟):\n", j, dis_num);
                    print_card(player[i]->hand);
                    printf(" 8) 查看場上\n");
                    printf(" 9) 退出\n");
                    printf("\n");
                    PrintLine;

                //get com
                    int com;
                    get_com(1, player[i]->hand->size, &com, player);

                //discard
                    draw(discard, player[i]->hand, NULL, com);
                }

            //bot
                else{
                //get com
                    int com;
                    switch(Level){
                    case 1:
                        com = rand()%player[i]->hand->size + 1;
                        break;
                    case 2: break;
                    case 3: break;
                    }

                //discard
                    draw(discard, player[i]->hand, NULL, com);
                }
            }

            WAIT;

        }else;
    }

    return;
}

void end_game(Player *player[4]){
// extra point
    for(int i=0; i<player_num; i++){
        Guild_hall(player[i]);
        City_hall(player[i]);
        Triumphal_arch(player[i]);
        Palace(player[i]);
    }

//deuce check
    int p[player_num];

    for(int i=0; i<player_num; i++){
        p[i] = 0;

        p[i] += player[i]->hand->size;
        for(Card *j = player[i]->table->P_head; j != NULL; j = j->Next_card)
            p[i] += j->goods->size;
    }

//rank sort
    for(int i=0; i<player_num-1; i++){
        for(int j=0; j<player_num-i-1; j++){
            if(player[j]->point < player[j+1]->point){
                Player *temp = player[j];
                player[j] = player[j+1];
                player[j+1] = temp;

                int temp2 = p[j];
                p[j] = p[j+1];
                p[j+1] = temp2;
            }
            else if(player[j]->point == player[j+1]->point){
                if(p[j] < p[j+1]){
                    Player *temp = player[j];
                    player[j] = player[j+1];
                    player[j+1] = temp;

                    int temp2 = p[j];
                    p[j] = p[j+1];
                    p[j+1] = temp2;
                }else;
            }
            else;
        }
    }

//deuce check
    printf("\n\n贏家: ");

    if(player[0]->point==player[1]->point && p[0]==p[1])
        printf("%s & %s\n", player[0]->name, player[1]->name);
    else
        printf("%s\n", player[0]->name);

//print rank
    printf("\n排名:\n");
    for(int i=0; i<player_num; i++){
        printf("%s\t得分:%d\t手牌:%d\t貨物:%d\n",
               player[i]->name, player[i]->point, player[i]->hand->size, p[i]-player[i]->hand->size);
    }

    return;
}
int32_t init_Pool( Pool *pool ){
    pool -> size = 0;
    pool -> P_head = NULL;
    pool -> P_tail = NULL;
    return 0;
}

Card* add_card(Pool *pool, char *name, int cost, int point, int num, int type ){   //return new card's pointer

    if(pool == NULL){
        printf("%s(%d) %s: NULL pointer!\n", __FILE__, __LINE__, __FUNCTION__ );
        return NULL;
    }

    Card *Ncard = calloc(1, sizeof(Card));

    strncpy(Ncard->name, name, strlen(name));
    Ncard->cost = cost;
    Ncard->point = point;
    Ncard->num = num;
    Ncard->type = type;

    Ncard->Last_card = NULL;
    Ncard->Next_card = NULL;

    Ncard->goods = calloc(1, sizeof(Player));
    init_Pool(Ncard->goods);

    if(pool->size == 0){
        pool -> P_head = Ncard;
        pool -> P_tail = Ncard;
    }
    else{
        Ncard -> Last_card = pool -> P_tail;
        pool -> P_tail -> Next_card = Ncard;
        pool -> P_tail = Ncard;
    }

    pool -> size += 1;
    return Ncard;
}

void set_pool(Pool *pool){
//open file
    FILE *data = NULL;
    if((data = fopen("card.txt", "r")) == NULL){
        printf("card.txt connot be open!\n");
        return;
    }

//read data
    while( !feof(data) ){
        char buf[32] = {0};
        Card *Ncard;
        char name[16] = {0};
        int cost, point, num, type;

        fgets(buf, 32, data);
        sscanf(buf, "%s %d %d %d %d", name, &cost, &point, &num, &type);
        Ncard = add_card(pool, name, cost, point, num, type);

        for(int i=0; i < (Ncard->num -1); i++){     //copy num card
            add_card(pool, name, cost, point, num, type);
        }
    }

    fclose(data);
    return;
}

void shuffle( Pool *pool ){

    int n = pool -> size;
    if(n <= 1)  return;

    for(int i=0; i < n; i++){
    //get start point
        Card *N_card = pool -> P_head;
        for(int j=0; j <= i - 1; j++){
            N_card = N_card -> Next_card;
        }
    //get switch card
        Card *S_card = pool -> P_head;
        int change = rand() % n;
        if(i == change) continue;

        for(int j=0; j <= change - 1; j++){
            S_card = S_card -> Next_card;
        }

    //switch
        Card *temp_NL = N_card->Last_card, *temp_NN = N_card->Next_card;
        Card *temp_SL = S_card->Last_card, *temp_SN = S_card->Next_card;

        // if they near
        if(temp_NL == S_card){
            temp_SN = S_card;
            temp_NL = N_card;
        }
        else if(temp_NN == S_card){
            temp_SL = S_card;
            temp_NN = N_card;
        }

        N_card -> Last_card = temp_SL;
        N_card -> Next_card = temp_SN;
        S_card -> Last_card = temp_NL;
        S_card -> Next_card = temp_NN;

        // if someone is head or end
        if(!i)
            pool -> P_head = S_card;
        else
            temp_NL -> Next_card = S_card;

        if(!change)
            pool -> P_head = N_card;
        else
            temp_SL -> Next_card = N_card;

        if(i == n-1)
            pool -> P_tail = S_card;
        else
            temp_NN -> Last_card = S_card;

        if(change == n-1)
            pool -> P_tail = N_card;
        else
            temp_SN -> Last_card = N_card;
    }
    return;
}

int draw( Pool *hand, Pool *pool, Pool *discard, int num){
// check pool
    if(pool->size == 0){
        if(discard==NULL || discard->P_head==NULL){
            printf("喔喔，沒有牌可以抽了\n\n");
            return 0;
        }
        else{
            shuffle(discard);
            while(discard->P_head != NULL)
                draw(pool, discard, NULL, 1);
        }
    }else;

// get card
    Card *Ncard = pool -> P_head;

    for(int i=0; i<num-1; i++)
        Ncard = Ncard -> Next_card;
// out
    if(Ncard->Last_card)
        Ncard->Last_card->Next_card = Ncard->Next_card;
    else
        pool->P_head = Ncard->Next_card;

    if(Ncard->Next_card)
        Ncard->Next_card->Last_card = Ncard->Last_card;
    else
        pool->P_tail = Ncard->Last_card;

    add_card(hand, Ncard->name, Ncard->cost, Ncard->point, Ncard->num, Ncard->type);

    pool -> size -= 1;
    free(Ncard);
    return 1;
}

void print_card( Pool *pool ){
    int32_t counter = 1;
    Card *card = pool -> P_head;

    while( card ){
        printf( "%2d)  %s %d費/%d分", counter, card->name, card->cost, card->point);
        if(card->type!=0 && card->goods->size!=0)
            printf("\t貨物*1\n");
        else
            putchar('\n');
        counter++;
        card = card -> Next_card;
    }

    return;
}

void free_all(Pool *pool, Player *player[4], Pool *discard){
    //collect all cards into pool

        for(int i=0; i<player_num; i++){
        //free goods
            for(Card *j=player[i]->hand->P_head; j!= NULL; j = j->Next_card){
                while(j->goods->P_head != NULL)
                    draw(pool, j->goods, NULL, 1);

                free(j->goods);
            }

        //free table
            while(player[i]->table->P_head != NULL)
                draw(pool, player[i]->table, NULL, 1);

            free(player[i]->table);

        //free hand
            while(player[i]->hand->P_head != NULL)
                draw(pool, player[i]->hand, NULL, 1);

            free(player[i]->hand);
        }


        //clean discard
        while(discard->P_head != NULL)
            draw(pool, discard, NULL, 1);

    //free cards
        Card *f = pool->P_head;
        while(f != NULL){
            Card *f2 = f->Next_card;
            free(f);
            f = f2;
    }

    //free players
        for(int i=0; i<4; i++)
            free(player[i]);

        //printf("\nCLEAN!!\n\n");

    return;
}
int build_check(char *build, Pool *table){
    int count = 1;
    Card *card = table->P_head;

    while(card != NULL){
        if( !strncmp(build, card->name, strlen(build)) )
            break;
        else
            count++;

        card = card->Next_card;
    }

    if(card)
        return count;
    else
        return 0;
}   //return card position

void Chapel(Player *player[4], int acter){
    if( build_check("禮拜堂", player[acter]->table) ){
    //get card
        Card *card = player[acter]->table->P_head;
        while( strncmp("禮拜堂", card->name, strlen("禮拜堂")) )
            card = card->Next_card;

    //player
        if(acter == 0){
            PrintLine;
            printf("\n");
            print_card(player[acter]->hand);
            printf("請選擇一張牌放在禮拜堂下面:\n");
            printf(" 8) 查看場上\n");
            printf(" 9) 退出\n");
            printf(" 0) 跳過這次行動\n");
            printf("\n");
            PrintLine;

        //get com
            int com;
            get_com(0, player[acter]->hand->size, &com, player);

        //chapel
            if(com){
                draw(card->goods, player[acter]->hand, NULL, com);
                card->goods->size = 0;
                card->point ++;
                player[acter]->point++;
            }
            else;
        }

    //bot
        else{
        //get com
            int com;
            switch(Level){
            case 1:
                com = rand() % (player[acter]->hand->size+1);
            case 2: break;
            case 3: break;
            }

        //chapel
            if(com){
                draw(card->goods, player[acter]->hand, NULL, com);
                card->goods->size = 0;
                card->point++;
                player[acter]->point++;
                printf("%s 在禮拜堂生產了貨物\n", player[acter]->name);
            }
            else{
                printf("%s 不在禮拜堂生產貨物\n", player[acter]->name);
            }
        }

        WAIT;
    }

    return;
 }

int Smithy(int cost, Pool *table){
    if(cost == 0)
        return 0;
    else if( build_check("鐵匠鋪", table) )
        return cost-1;
    else
        return cost;
}

void Poor_house(Pool *pool, Player *player, Pool *discard){
    if( build_check("救濟院", player->table) ){
       if(player->hand->size <= 1){
            draw(player->hand, pool, discard, 1);
            printf("%s 抽了1張牌 (救濟院的效果)\n", player->name);
       }
    }

    return;
}

void Black_market(Player *player[4], int acter, Pool *discard, int cost){
    int goods_count = 0;

//player
    if(acter == 0){
        for(int i=0; i<cost; i++){
            printf("\n請選擇一張牌來支付(%d/%d)(已付/需付):\n", i, cost);
            print_card(player[acter]->hand);
            printf(" 8)  查看場上\n");
            printf(" 9)  退出\n");
            printf(" 0)  用貨物付\n");
            printf("\n");
            PrintLine;

        //get com
            int com;
            get_com(0, player[acter]->hand->size, &com, player);

            if(com==0 && goods_count==2){
                printf("你不能使用超過兩種貨物來付啦!\n");
                i--;
                continue;
            }
            else if(com == 0){
                printf("\n");
                printf("\n請選擇一個貨物來付(%d/%d)(已經付/需付):\n", i, cost);
                print_card(player[acter]->table);
                printf(" 8)  查看場上\n");
                printf(" 9)  跳過\n");
                printf(" 0)  用手牌來付\n");
                printf("\n");
                PrintLine;

            //get com2
                int com2;
                get_com(0, player[acter]->table->size, &com2, player);

                if(com2 == 0){
                    i--;
                    continue;
                }
                else{
                //get card
                    Card *card = player[acter]->table->P_head;
                    for(int j=1; j<com2; j++)   card = card->Next_card;

                    if(card->goods->size == 0){
                        printf("那邊沒有貨物了!\n");
                        i--;
                        continue;
                    }
                    else{
                    //pay
                        draw(discard, card->goods, NULL, 1);
                        goods_count++;
                    }
                }
            }
            else{
                draw(discard, player[acter]->hand, NULL, com);
            }
        }
    }

//bot


    return;
}

void Crane(Player *player, Pool *discard, int com, int position){
//get card & position
    Card *card = player->hand->P_head, *pos = player->table->P_head;
    for(int i=1; i<com; i++) card = card->Next_card;
    for(int i=0; i<position; i++) pos = pos->Next_card;

//clean pos goods and point
    if(pos->goods->size != 0)
        draw(discard, pos->goods, NULL, 1);

    if( !strncmp("禮拜堂", pos->name, strlen("禮拜堂")) );
    else
        player->point -= pos->point;

//remove pos
    draw(card->goods, player->table, NULL, position);
    card->goods->size = 0;

//build
    player->point += card->point;
    draw(player->table, player->hand, NULL, com);

    return;
}

int Carpenter(Pool *pool, Player *player, Pool *discard, Card *card){
    if( build_check("木工廠", player->table) && card->type==0){
        draw(player->hand, pool, discard, 1);
        return 1;
    }
    else
        return 0;
}

int Quarry(int cost, Pool *table, Card *card){
    if( build_check("採石場", table) && card->type==0)
        return cost-1;
    else
        return cost;
}

void Well(Pool *pool, Player *player, Pool *discard, int goods_num){
    if( build_check("水井", player->table) && goods_num>2){
        printf("%s 抽一張牌(水井的效果)\n", player->name);
        draw(player->hand, pool, discard, 1);
    }
    return;
}

int Aqueduct(Player *player, int goods_num){
    if( build_check("溝渠", player->table) )
        return goods_num+1;
    else
        return goods_num;
}

void Market_stand(Pool *pool, Player *player, Pool *discard, int sells_num){
    if( build_check("攤販", player->table) && sells_num>2){
        printf("%s 抽一張牌(攤販的效果)\n", player->name);
        draw(player->hand, pool, discard, 1);
    }
    return;
}

void Market_hall(Pool *pool, Player *player, Pool *discard){
    if( build_check("市場", player->table) ){
        printf("%s 抽一張牌(市場的效果)\n", player->name);
        draw(player->hand, pool, discard, 1);
    }

    return;
}

int Trading_post(Player *player, int sells_num){
    if( build_check("交易所", player->table) )
        return sells_num+1;
    else
        return sells_num;
}

void Archive(Player *player, Pool *buffer){
    if( build_check("檔案館", player->table) ){
        while(player->hand->size != 0)
            draw(buffer, player->hand, NULL, 1);
    }

    return;
}

int Prefecture(Player *player, int dis_num){
    if( build_check("辦公處", player->table) )
        return dis_num-1;
    else
        return dis_num;
}

void Gold_mine(Pool *pool, Player *player[4], int acter, Pool *discard){
    if( !build_check("金礦坑", player[acter]->table) )
        return;

    Pool *buffer = calloc(1, sizeof(Pool));
    init_Pool(buffer);

    for(int i=0; i<4; i++)
        draw(buffer, pool, discard, 1);
    printf("%s 抽4張牌(金礦坑的效果)\n", player[acter]->name);

    Card *card = buffer->P_head;
    int cost[4];

    //get cost
    for(int i=0; i<4; i++){
        cost[i] = card->cost;
        card = card->Next_card;
    }

    //check cost
    int check = 0;

    for(int i=0; i<4-1 && !check; i++){
        for(int j=i+1; j<4; j++){
            if(cost[i] == cost[j]){
                printf("OH NO! 有兩張(以上)出現一樣的費用喔!!\n");
                check = 1;
                break;
            }
        }
    }

    if(check){
        for(int i=0; i<4; i++)
            draw(discard, buffer, NULL, 1);
        printf("%s 丟棄4張牌(金礦的效果)\n", player[acter]->name);
    }
    else{
    //player
        if(acter == 0){
            PrintLine;
            printf("\n");
            print_card(buffer);
            printf("請選擇一張牌保留\n");
            printf(" 8)  查看場上\n");
            printf(" 9)  退出\n");
            printf("\n");
            PrintLine;

        //get com
            int com;
            get_com(1, buffer->size, &com, player);

        //keep
            draw(player[acter]->hand, buffer, NULL, com);

        }

    //bot
        else{
        //get com
            int com;
            switch(Level){
            case 1:
                com = rand()%buffer->size + 1;
                break;
            case 2: break;
            case 3: break;
            }

        //keep
            draw(player[acter]->hand, buffer, NULL, com);
            printf("%s 保留了1張牌 (金礦坑的效果)\n", player[acter]->name);
        }

    //clean buffer
        while( buffer->size != 0)
            draw(discard, buffer, NULL, 1);
    }

    WAIT;

    free(buffer);
    return;
}

int Library(Pool *table, int num, int role){
    if( !build_check("圖書館", table) )
        return num;

    switch(role){
        case 1: return num-2; break;
        case 2: return 3; break;
        case 3: return 3; break;
        case 4: return 8; break;
        case 5: return 2; break;
    }
}

void Guild_hall(Player *player){
    if( !build_check("同業會館", player->table) )
        return;

    Card *card = player->table->P_head;
    int o_point = player->point;


    while(card != NULL){
        if( card->type )
            player->point += 2;
        card = card->Next_card;
    }

    printf("%s 從同業會館獲得了 %d 分 \n", player->name, player->point-o_point);

    WAIT;
    return;
}

void City_hall(Player *player){
    if( !build_check("市政廳", player->table) )
        return;

    Card *card = player->table->P_head;
    int o_point = player->point;

    while(card != NULL){
        if( !card->type )
            player->point += 1;
        card = card->Next_card;
    }

    printf("%s 從市政廳獲得了 %d 分\n", player->name, player->point-o_point);
    WAIT;

    return;
}

void Triumphal_arch(Player *player){
    if( !build_check("凱旋門", player->table) )
        return;

    int count = 0;
    if( build_check("雕鑄像紀念碑", player->table) )  count++;
    if( build_check("勝利柱紀念碑", player->table) )  count++;
    if( build_check("英雄像紀念碑", player->table) )  count++;

    switch(count){
    case 0: count = 0; break;
    case 1: count = 4; break;
    case 2: count = 6; break;
    case 3: count = 8; break;
    }

    player->point += count;

    printf("%s 從凱旋門獲得了 %d 分\n", player->name, count);
    WAIT;

    return;
}

void Palace(Player *player){
    if( !build_check("宮殿", player->table) )
        return;

    printf("%s 從宮殿獲得 %d 分 \n", player->name, player->point / 4);
    player->point += player->point / 4;

    WAIT;

    return;

}