/*
 * PR Description:
 *
 * This file, soumya.c, serves as an introductory C program.
 * It demonstrates basic console output using `printf` and
 * introduces delays in execution using the `sleep` function.
 *
 * Purpose:
 * - To provide a simple, runnable C example for beginners.
 * - To illustrate the inclusion of standard libraries (`stdio.h`, `unistd.h`).
 * - To showcase the `sleep` function for pausing program execution.
 *
 * Motivation:
 * This marks a first step into C programming, embracing the joy of coding.
 */

// this was my first comment
#include <stdio.h>  // Required for printf
#include <unistd.h> // Required for sleep

int main() {
    printf("Hello, Soumya!\n");
    sleep(1); // Pause for 1 second

    printf("Welcome to your first C program.\n");
    sleep(2); // Pause for 2 seconds

    printf("We are using sleep operations to introduce delays.\n");
    sleep(1); // Pause for 1 second

    printf("This makes the output appear step-by-step.\n");
    sleep(3); // Pause for 3 seconds

    printf("i love coding\n");

    return 0; // Indicate successful execution
}
