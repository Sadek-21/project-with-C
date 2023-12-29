#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define WIDTH 30
#define HEIGHT 20

int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
bool gameOver ;

void setup()
{
    gameOver = false ;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
}

void draw()
{
    system("cls"); // clear the console

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O");
            else if (i == fruitY && j == fruitX)
                printf("F");
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        printf("o");
                        print = true;
                    }
                }
                if (!print)
                    printf(" ");
            }

            if (j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    printf("Score: %d\n", score);
}

void input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        }
    }
}

void logic()
{
    // snake hits the wall
    if (x >= WIDTH || x < 0 || y >= HEIGHT || y < 0)
        gameOver = true;

    // snake eats the fruit
    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }

    // snake hits its tail
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;

    // update tail positions
    int prevX = tailX[0];
    int prevY = tailY[0];
