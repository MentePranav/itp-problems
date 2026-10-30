#include <stdio.h>

int main(void)
{
    int choice;
    int score = 0;

    printf("Question 1: What is the capital of France?\n");
    printf("1. London\n");
    printf("2. Paris\n");
    printf("3. Rome\n");
    printf("4. Berlin\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }


    printf("\nQuestion 2: How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }


    printf("\nQuestion 3: Which language are you learning?\n");
    printf("1. C\n");
    printf("2. Java\n");
    printf("3. Python\n");
    printf("4. HTML\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    printf("\nYour score is %d/3\n", score);

    return 0;
}
