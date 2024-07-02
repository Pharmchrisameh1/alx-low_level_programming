#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the 101-crackme program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 0;
    int target = 2772; // Target sum based on the crackme program
    char password[100];
    int i = 0;
    char ch;

    srand(time(NULL)); // Seed the random number generator

    while (sum < target - 122) // 122 is the highest ASCII value for readable characters
    {
        ch = rand() % 94 + 33; // Generates a random printable ASCII character
        sum += ch;
        password[i++] = ch;
    }

    // Adjust the last character to ensure the sum equals the target
    password[i++] = target - sum;
    password[i] = '\0'; // Null-terminate the string

    printf("%s", password); // Print the generated password

    return 0;
}

