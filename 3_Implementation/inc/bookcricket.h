#ifdef __BOOKCRICKET_H__
#define __BOOKCRICKET_H__

typedef enum error_t {
    SUCCESS = 1,
    ERROR =0,
    ERROR_DIV_0 = -1
   }error_t;

int GetPlayerToss(char player_1[],char player_2[],int oversToplay);

int batting(char battingplayer[],char bowlingplayer[],int oversToplay);

#endif
