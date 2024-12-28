// Name:     ch8-8.c
// Purpose:  Deal a random hand of cards from a single deck
// Author:   A Orton

// NOTES

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
  long lon1;
  int num_cards, suit_pick, rank_pick;

  const char suits[NUM_SUITS] = {'h', 'd', 'c', 's'};
  const char ranks[NUM_RANKS] = {'a', '2', '3', '4', '5', '6', '7',
                                 '8', '9', 't', 'j', 'q', 'k'};
  bool selected[NUM_SUITS][NUM_RANKS] = {false};

  // Prepare the random number generator
  srand((unsigned)time(NULL));  // seed the random number generator
  lon1 = rand();  // run once since first value of rand() doesn't seem random

  printf("Enter number of cards to select: ");
  scanf("%d", &num_cards);

  // randomly select the cards
  for (int i = 0; i < num_cards; i++) {
    suit_pick = rand() % 4;
    rank_pick = rand() % 13;
    if (!selected[suit_pick][rank_pick]) {
      selected[suit_pick][rank_pick] = true;  // ok, card selected
    } else {
      printf("%c%c already selected\n", suits[suit_pick], ranks[rank_pick]);
      i--;  // card already taken, try again
    }
  }

  // print the slected cards
  printf("Your %d cards are: ", num_cards);
  for (int suit = 0; suit < NUM_SUITS; suit++) {
    for (int rank = 0; rank < NUM_RANKS; rank++) {
      if (selected[suit][rank]) {
        printf("%c%c  ", ranks[rank], suits[suit]);
      }
    }
  }

  return 0;
}