//
// Created by malak on 11/15/2022.
//
#include "NumClass.h"
#include <math.h>

int fact(int num) {

    int result = 1;

    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int isPrime(int num) {
    if (num == 1 || num == 2) {
        return True;
    }
    if (num % 2 == 0) {         //Checking if number divisible by 2
        return False;
    }
    for (int i = 3; i <= sqrt(num); ++i) {      //Looping on all number in range [3,sqrt(number)]
        if (num % i == 0) {         //Checking if the number is divisible by any number of this range then will return False
            return False;
        }
    }
    return True;        //Otherwise, return True
}

int isStrong(int num) {
    if (num == 0) {
        return False;
    }
    int temp = num;     //Saving the original number
    int result = 0;
    while (num > 0) {
        result += fact(num % 10);        //isStrong Number Rule-> (each_digit) !
        num = num / 10;         //Removing the digit we already calculated (the last digit)
    }
    if (result == temp)          //Checking if the original number equals to the calculation we did
        return True;
    return False;
}

