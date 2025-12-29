// ARYAN MISHRA 
// ERP - 10293

// PROJECT TITLE - Number Guessing Game

// TOPIC NAME - Guess with hints

// EXPECTED OUTCOME - Win/Lose

// DETAILED WALKTHROUGH (HOW TO APPROACH THE PROBLEM) - Store a fixed secret number. Use loop for limited attempts.
// Compare user input and give hints using if-else until correct or attempts end.

#include <stdio.h>
int main() {
    int secret_number = 42; 
    int max_attempts = 5;    
    int guess;
    int outcome = 0;          
    printf(" Number Guessing Game \n");
    printf("Guess the number between 1 and 100.\n");
    printf("You have %d attempts.\n\n", max_attempts);
    for (int attempt = 1; attempt <= max_attempts; attempt++) {
        printf("Attempt %d: Enter your guess: ", attempt);
        scanf("%d", &guess);
        if (guess == secret_number) {
            printf("Correct! You've guessed the number.\n");
            outcome = 1;
            break;
        } else if (guess < secret_number) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }
    if (outcome == 0) {
        printf("Sorry, you've used all %d attempts. The number was %d.\n", max_attempts, secret_number);
        printf("Game Over: Lose\n");
    } else {
        printf("Game Over: Win\n");
    }
    return 0;
}

// EXPECTED OUTPUT
// Number Guessing Game 
// Guess the number between 1 and 100.
// You have 5 attempts.

// Attempt 1: Enter your guess: 70
// Too high! Try a lower number.

// Attempt 2: Enter your guess: 50
// Too high! Try a lower number.

// Attempt 3: Enter your guess: 30
// Too low! Try a higher number.

// Attempt 4: Enter your guess: 40
// Too low! Try a higher number.

// Attempt 5: Enter your guess: 42
// Correct! You've guessed the number.
// Game Over: Win