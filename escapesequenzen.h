//
//  escapesequenzen.h
//  Üb4
//
//  Created by Andry Valderrama on 12.12.16.
//  Copyright © 2016 Andry Valderrama. All rights reserved.
//

#ifndef escapesequenzen_h
#define escapesequenzen_h

#define POSITION(Ze, Sp)     printf("\033[%d;%dH",Ze,Sp)
#define HOME                 printf("\033[H")
#define UP(Anz)              printf("\033[%dA",Anz)
#define UP_LINE              printf("\033[A")
#define DOWN(Anz)            printf("\033[%dB",Anz)
#define DOWN_LINE            printf("\033[B")
#define RIGHT(Anz)           printf("\033[%dC",Anz)
#define ONE_POS_RIGHT        printf("\033[C")
#define LEFT(Anz)            printf("\033[%dD",Anz)
#define ONE_POS_LEFT         printf("\033[D")

#define STORE_POS            printf("\033[s")
#define RESTORE_POS          printf("\033[u")
#define ACT_POS              printf("\033[6n")

#define CLEAR                printf("\033[2J")
#define CLEAR_LINE           printf("\033[K")

#define ATTRIBUTE_OFF        printf("\033[0m")
#define BOLD                 printf("\033[1m")
#define UNDERSCORE           printf("\033[4m")
#define BLINK                printf("\033[5m")
#define INVERSE              printf("\033[7m")
#define INVISIBLE            printf("\033[8m")

#define FORECOLOR_BLACK      printf("\033[30m")
#define FORECOLOR_RED        printf("\033[31m")
#define FORECOLOR_GREEN      printf("\033[32m")
#define FORECOLOR_YELLOW     printf("\033[33m")
#define FORECOLOR_BLUE       printf("\033[34m")
#define FORECOLOR_VIOLETT    printf("\033[35m")
#define FORECOLOR_KOBALT     printf("\033[36m")
#define FORECOLOR_WHITE      printf("\033[37m")
#define BACKCOLOR_BLACK      printf("\033[40m")
#define BACKCOLOR_RED        printf("\033[41m")
#define BACKCOLOR_GREEN      printf("\033[42m")
#define BACKCOLOR_YELLOW     printf("\033[43m")
#define BACKCOLOR_BLUE       printf("\033[44m")
#define BACKCOLOR_VIOLETT    printf("\033[45m")
#define BACKCOLOR_KOBALT     printf("\033[46m")
#define BACKCOLOR_WHITE      printf("\033[47m")

#define TEXT_BW_25_40        printf("\033[=0h")
#define TEXT_COLOR_25_40     printf("\033[=1h")
#define TEXT_BW_25_80        printf("\033[=2h")
#define TEXT_COLOR_25_80     printf("\033[=3h")
#define GRAFIC_COLOR_320_200 printf("\033[=4h")
#define GRAFIC_BW_320_200    printf("\033[=5h")
#define GRAFIC_BW_640_200    printf("\033[=6h")
#define WRAP_MODE_ON         printf("\033[=7h")
#define WRAP_MODE_OFF        printf("\033[=7l")
#endif /* escapesequenzen_h */