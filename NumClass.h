//
// Created by malak on 11/15/2022.
//

#ifndef S_S_A_1_NUMCLASS_H
#define S_S_A_1_NUMCLASS_H
#define False 0
#define True 1

/*
 * will return if a number is Armstrong number
 * An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
 * For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
 */
int isArmstrong(int);

/*
 * will return if a number is a palindrome
 */
int isPalindrome(int);

/*
 * will return if a number is prime
 */
int isPrime(int);

/*
 * Strong number is a special number whose sum of the factorial of digits is equal to the original number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int);

/*
 * Find length of number (number of digits)
 */
int numLength(int);

/*
 * input[number,power]
 * This function calculate the sum of each digit to the k (constant) power;
 */
int power(int, int);

/*
 * input[number]
 * Factorial function (n! = n * (n-1) * (n-2) * ... * 2 * 1)
 */
int fact(int);

#endif //S_S_A_1_NUMCLASS_H