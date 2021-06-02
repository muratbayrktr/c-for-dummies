#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max_card_in_suit 13
#define deck_len (max_card_in_suit*4)


int rand_range(int min_n, int max_n)
{
    return rand() % (max_n - min_n + 1) + min_n;
}


struct deck
{
    char suit[10];
    char color;
    int rank;
};

void draw(struct deck *deck)
{
    char colors[2][6] = {"black", "red"}; 
    int index = ((*deck).color == 'B') ? 0 : 1;
    printf("A card pulled from the deck!\n");
    printf("The pulled card is %s %s %d\n",colors[index], (*deck).suit, (*deck).rank);
}

int main(void)
{
    int i, j, k;
    struct deck *deck_p;
    char suits[][10] = {"diamonds", "hearts", "spades", "clubs"};
    char colors[2] = {'R','B'};
    deck_p = (struct deck *) malloc(sizeof(struct deck)*deck_len);

    /* creating the deck */
    for(i = 0; i < deck_len; i++)
    {
        int s_index = (int) (i % deck_len)/max_card_in_suit;
        int c_index = (int) (i % deck_len)/(max_card_in_suit*2);
        strcpy(deck_p[i].suit, suits[s_index]);
        deck_p[i].color = colors[c_index];
        deck_p[i].rank = i+1;
    }

    printf("-----Pulling 5 random cards from the deck!-----\n\n");
    for (j = 0; j < 5; j++)
    {
        int random = rand_range(0,51);
        draw(deck_p + random);
        printf("\n");
    }
    
    
    return 0;
}