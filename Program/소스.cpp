#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, lives = 5;
    srand(time(NULL)); // 랜덤 시드 초기화
    target = rand() % 50 + 1; // 1~50 사이의 랜덤 숫자 생성

    printf("Welcome to UP-DOWN Game!\n");
    printf("You have %d lives. Try to guess the number between 1 and 50.\n", lives);

    while (lives > 0) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 50) {
            printf("Invalid guess. Please enter a number between 1 and 50.\n");
            continue;
        }

        if (guess < target) {
            printf("Too low! Try again.\n");
        }
        else if (guess > target) {
            printf("Too high! Try again.\n");
        }
        else {
            printf("Victory! You've guessed the number.\n");
            return 0; // 게임 종료
        }

        lives--;
        if (lives > 0) {
            printf("You have %d lives remaining.\n", lives);
        }
        else {
            printf("GameOver! The correct number was %d.\n", target);
        }
    }

    return 0;
}
