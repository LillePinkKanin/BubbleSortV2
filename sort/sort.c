#include "sort.h"
#include <ctype.h>

void swap(char *a, char *b) {   //Saves the value from first element, copies value from second into first element, copies saved value into second element
    char t = *a; *a = *b; *b = t;
}

bool letters_in_order(char a, char b) { //Converts all elements(letters) to lower case and check if they are in order
    return tolower((unsigned char)a) <= tolower((unsigned char)b);
}

bool numbers_in_ascending_order(char a, char b) { //Checks if all elements (numbers) are in order
    return a <= b;
}

void bubble_sort(char arr[], int n, bool (*pair_is_in_order)(char, char)) {  // Parameters: Array, Size of that array, bool function pointer
    bool swapped; //Used to check for swaps
    do {
        swapped = false; // Sets swapped = false for each pass
        for (int i = 1; i < n; i++) { // Goes through positions in array, i = 1 to stay within the array as i-1 = 0 for the first position in array
            if (!pair_is_in_order(arr[i-1], arr[i])) { // Uses function to see if pair is not in order inside array
                swap(&arr[i-1], &arr[i]); // Swaps the values inside array using the swap function and sets them using their adress
                swapped = true; // Sets swapped to true when a swap has occurred 
            }
        }
    } while (swapped == true); // Continues the loop if swapped is true
}
