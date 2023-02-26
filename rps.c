#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    int score_player = 0, score_computer = 0;
    srand(time(NULL)); // initialize random seed
    
    printf("Let's play Rock Paper Scissors!\n");
    printf("Enter 1 for Rock, 2 for Paper, or 3 for Scissors.\n");
    
    while (score_player < 3 && score_computer < 3) { // play until someone reaches 3 points
        printf("Player: ");
        scanf("%d", &player);
        computer = rand() % 3 + 1; // generate random number between 1 and 3
        
        switch (player) {
            case 1: // player selects rock
                if (computer == 1) {
                    printf("Computer: Rock. It's a tie!\n");
                } else if (computer == 2) {
                    printf("Computer: Paper. You lose!\n");
                    score_computer++;
                } else {
                    printf("Computer: Scissors. You win!\n");
                    score_player++;
                }
                break;
            case 2: // player selects paper
                if (computer == 1) {
                    printf("Computer: Rock. You win!\n");
                    score_player++;
                } else if (computer == 2) {
                    printf("Computer: Paper. It's a tie!\n");
                } else {
                    printf("Computer: Scissors. You lose!\n");
                    score_computer++;
                }
                break;
            case 3: // player selects scissors
                if (computer == 1) {
                    printf("Computer: Rock. You lose!\n");
                    score_computer++;
                } else if (computer == 2) {
                    printf("Computer: Paper. You win!\n");
                    score_player++;
                } else {
                    printf("Computer: Scissors. It's a tie!\n");
                }
                break;
            default: // invalid input
                printf("Invalid input. Please enter 1, 2, or 3.\n");
        }
    }
    
    if (score_player > score_computer) {
        printf("Congratulations! You win!\n");
    } else {
        printf("Sorry, you lose. Better luck next time!\n");
    }
    
    return 0;
}

