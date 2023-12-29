#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define WIDTH 40
#define HEIGHT 20

#define TRUE 1
#define FALSE 0

int score;
int snake_length;
int fruit_x;
int fruit_y;
int head_x;
int head_y;
int tail_x[100];
int tail_y[100];
int direction;

void setup() {
  score = 0 ;
  snake_length = 1 ;
  head_x = WIDTH / 2 ;
  head_y = HEIGHT / 2 ;
  fruit_x = rand() % WIDTH ;
  fruit_y = rand() % HEIGHT ;
}

void draw_border() {
  int i;

  system("cls");

  for (i = 0; i < WIDTH + 2; i++) {
    printf("#");
  }

  printf("\n");

  for (i = 0; i < HEIGHT; i++) {
    printf("#");
    for (int j = 0; j < WIDTH; j++) {
      printf(" ");
    }
    printf("#\n");
  }

  for (i = 0; i < WIDTH + 2; i++) {
    printf("#");
  }

  printf("\n");
}

void draw_snake() {
  int i;
  tail_x[0] = head_x;
  tail_y[0] = head_y;

  for (i = 1; i < snake_length; i++) {
    tail_x[i] = tail_x[i - 1];
    tail_y[i] = tail_y[i - 1];
  }

  for (i = 0; i < snake_length; i++) {
    if (i == 0) {
      printf("O");
    } else {
      printf("o");
    }
  }
}

void move_snake() {
  int prev_x = tail_x[0];
  int prev_y = tail_y[0];
  int prev_2x;
  int prev_2y;
  tail_x[0] = head_x;
  tail_y[0] = head_y;

  for (int i = 1; i < snake_length; i++) {
    prev_2x = tail_x[i];
    prev_2y = tail_y[i];
    tail_x[i] = prev_x;
    tail_y[i] = prev_y;
    prev_x = prev_2x;
    prev_y = prev_2y;
  }

  if (head_x == 0 || head_x == WIDTH || head_y == 0 || head_y == HEIGHT) {
    printf("\nGame Over!\n");
    exit(0);
  }
}






