#include <stdio.h>
#include "sort/sort.h"

#define SIZE 4

int main(void) {

    char number_arr1[] = {4, -1, 2, 9};
    char letter_arr1[] = {'z','S','s','a'};

        puts("Data items in original order:"); 
            printf("Numbers: ");
                for (int i = 0; i < SIZE; i++) //Presents the user with the original data order from the number array
                printf("%d ", number_arr1[i]);

            printf("\nLetters: ");
                for (int i = 0; i < SIZE; i++) //Presents the user with the original data order from letter array
                printf("%c ", letter_arr1[i]);

    bubble_sort(number_arr1, SIZE, numbers_in_ascending_order); //Uses bubble_sort function with: number array, SIZE and numbers_in...
    bubble_sort(letter_arr1, SIZE, letters_in_order); // Uses bubble_sort function with letter array, SIZE and letters_in.....

        puts("\nData items in ascending order:");
            printf("Numbers: ");
                for (int i = 0; i < SIZE; i++) //Presents the user with the re-arranged data from numbber array
                printf("%d ", number_arr1[i]);

            printf("\nLetters: ");
                for (int i = 0; i < SIZE; i++) //Presents the user with the re-arranged data from the letter array
                printf("%c ", letter_arr1[i]);
                puts(""); // new line

}
