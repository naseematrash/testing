//
// Created by malak on 11/15/2022.
//
#include "NumClass.h"
#include <math.h>

#define True 1
#define False 0

int numLength(int num) {
    int result = 1;
    while (num >= 10) {
        result++;
        num = num / 10;
    }
    return result;
}

int power(int n, int k) {
    if (n < 10) {
        return (int) pow(n, k);
    }
    return (int) pow((n % 10), k) + power((n / 10), k);
}

int isArmstrong(int num) {
    int dig = numLength(num);           //Calculate the length of the number
    int numWithPow = power(num, dig);       //Calling power number with [number,number Length] inputs
    if (numWithPow == num) {        //Checking if the original number equals to the calculation we did
        return True;
    }
    return False;
}

int isPalindrome(int num) {
    int numLen = numLength(num);        //Calculate the length of the number
    int smalldig = num % 10;        //Catching the last digit
    int bigdig = (int)(num / pow(10, numLen - 1));     //Catching the first digit
    if (numLen == 1) {      //Single-digit number is Palindrome
        return True;
    }
    if (smalldig != bigdig) {       //Checking the first digit is not equal to the last digit then return false
        return False;
    }
    num -= smalldig * (int) pow(10, numLen - 1);        //Removing the first digit
    num = num / 10;          //Removing the last digit
    int newNumLen = numLength(num);         //Finding the new number's Length (after removing first & last digits)
    int diff = numLen - newNumLen;         //Calculating the difference between the old and the new length of the number
    if (diff >
        2) {         //Checking if the difference is greater than 2, which means we got some '0' digits at the starts
        int i = 0;
        while (i < diff - 2) {      //We loop on these zeros (diff - 2 because we already removed the first and the last digit)
            if (num % 10 != 0)          //Checking if the last digit is 0 then we will continue
                return False;
            num = num / 10;         //Removing the last digit we checked
            i++;
        }
    }
    return isPalindrome(num);       //Recursion on number
}