#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int x = 1;
    int userNum;
    int guess;
    int userMax = 10;
    int hardMax = 100;

    while (x == 1){

        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        scanf("%d", &userNum);

        if (userNum == 1){
            int winCon = 1;

            srand(time(0));
            int correctNumber = rand() % (userMax + 1);

            while (winCon == 1){
                printf("Enter a number to guess:\n");
                scanf("%d", &guess);

                if (guess == correctNumber){
                    printf("Correct! You Win!\n\n");
                    winCon = 0;
                }
                else{
                    printf("Wrong.\n");

                    if (guess > correctNumber){
                        printf("Your guess was too high\n\n");
                    }
                    else if (guess < correctNumber){
                        printf("Your guess was too low\n\n");
                    }
                }
            }
        }
        else if (userNum == 2){
            int y = 1;
            while (y == 1){
                printf("The biggest value that can be set is 100.\n");
                printf("Enter max number:\n");
                scanf("%d", &userMax);
                
                if (userMax > 100){
                    printf("Please enter a number less than or equal to 100.\n");
                }
                else if (userMax < 0){
                    printf("Please enter a positve number.\n");
                }
                else {
                    printf("The max value has been set to %d\n\n", userMax);
                    y = 0;
                }
            }
        }

        else if (userNum == 3){
            x = 0;
        }
        
        else {
            printf("Please enter a valid number.\n");
        }
    }
    printf("Thank you for playing!\n");
    return 0;
}