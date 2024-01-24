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

int isArmstrong(int num) {
    int numLen = numLength(num);        //Calculate the length of the number
    int temp = num;     //Saving the original number
    int result = 0;
    while (num > 0) {
        result += (int) pow(num % 10, numLen);        //Armstrong Number Rule-> each_digit^number_length
        num = num / 10;         //Removing the digit we already calculated (the last digit)
    }
    if (result == temp)          //Checking if the original number equals to the calculation we did
        return True;
    return False;
}

int isPalindrome(int num) {
    int numLen = numLength(num);        //Calculate the length of the number
    int smalldig, bigdig;
    if (numLen == 1) {      //Single-digit number is Palindrome
        return True;
    }
    while (num > 0) {
        smalldig = num % 10;        //Catching the last digit
        bigdig = num / (int) pow(10, numLen - 1);     //Catching the first digit
        if (smalldig != bigdig) {       //Checking the first digit is not equal to the last digit then return false
            return False;
        }
        num -= smalldig * (int) pow(10, numLen - 1);      //Removing the first digit
        num = num / 10;         //Removing the last digit
        numLen = numLen - 2;    //Updating number's length (removing the first and the last digit)
    }
    return True;
}
