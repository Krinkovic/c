// Simulating the game of rock, paper, scissors

#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include <time.h>

enum GameStatus {CONTINUE, GAME_WON, GAME_LOST};
enum RoundStatus {DRAW, WON, LOST};
enum Shape {ROCK, PAPER, SCISSORS};

enum Shape computerPlayRandomShape(void);
enum RoundStatus getRoundStatus(enum Shape, enum Shape);
enum Shape convertIntToShape(int);
char* getStringFromShape(enum Shape);

int main(void) {
  srand(time(NULL));
  enum GameStatus gameStatus = CONTINUE;
  int bestOfN = 3;
  int winThreshold = (bestOfN / 2) + 1;

  int playerWinCount = 0;
  int computerWinCount = 0;

  int roundNum = 0;

  while (CONTINUE == gameStatus) {
    printf("==================\nRound %d\n==================\n", roundNum++);
    printf("Enter 0 (ROCK), or 1 (PAPER), or 2 (SCISSORS): ");

    int playerShapeInt = -1;
    scanf(" %d", &playerShapeInt);

    enum Shape playerShape = convertIntToShape(playerShapeInt);
    enum Shape computerShape = computerPlayRandomShape();
    enum RoundStatus roundStatus = getRoundStatus(playerShape, computerShape);
    switch (roundStatus) {
      case DRAW:
        printf("It's a DRAW!\n");
        break;
      case WON:
        printf("Player WON!\n");
        if (++playerWinCount == winThreshold) {
          gameStatus = GAME_WON;
        }
        break;
      case LOST:
        printf("Player LOST\n");
        if (++computerWinCount == winThreshold) {
          gameStatus = GAME_LOST;
        }
        break;
    }
  }

  switch (gameStatus) {
    case GAME_WON:
      printf("**Best of %d game is WON by player!**", bestOfN);
      break;
    case GAME_LOST:
      printf("**Best of %d game is WON by computer!**", bestOfN);
      break;
    case CONTINUE:
    default:
      printf("**Error! Should not reach here**");
  }
  return 0;
}

enum Shape computerPlayRandomShape(void) {
  enum Shape randomShape = convertIntToShape(rand() % 3);
  printf("Computer played %s\n", getStringFromShape(randomShape));
  return randomShape;
}

enum RoundStatus getRoundStatus(enum Shape playerShape, enum Shape computerShape) {
  if (playerShape == computerShape) {
    return DRAW;
  } else if ((playerShape == ROCK && computerShape == SCISSORS) || (playerShape == SCISSORS && computerShape == PAPER) || (playerShape == PAPER && computerShape == ROCK)) {
    return WON;
  } else {
    return LOST;
  }
}

enum Shape convertIntToShape(int shapeValue) {
  return (enum Shape) shapeValue;
}
char* getStringFromShape(enum Shape shape) {
  switch (shape) {
    case ROCK:
    return "ROCK";
    case PAPER:
    return "PAPER";
    case SCISSORS:
    return "SCISSORS";
  }
  return "";
}
