#ifndef LAB_H
#define LAB_H

#include <stdio.h>

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char* get_greeting(const char* restrict name);

/**
 * @brief Returns the product of two integers.
 * 
 * Function returns the result of integer a multiplied by integer b.
 * @param a The first integer.
 * @param b The second integer.
 * @return The product of a and b.
 */
int product_of_two_integers(int a, int b);

/**
 * @brief Returns the (incorrect) sum of two integers.
 * 
 * Function returns the result of integer a added to integer b.
 * Result of sum is intentionally incorrect by way of adding a random number between 1 & 100.
 * @param a The first integer.
 * @param b The second integer.
 * @return The incorrect sum of a and b.
 */
int incorrect_sum_of_two_integers(int a, int b);

#endif // LAB_H