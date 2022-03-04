#include <iostream>
#include "funcs.h"

// add functions here

//Task A. Is divisible?
bool isDivisibleBy(int n, int d) {
    if (n % d == 0) {
        return true;
    }
    else {
        return false;
    }
}

//Task B. Is a prime?
bool isPrime(int n) {
    bool result = false;
    if (n >= 2) {
        for (int i = 2; i < n; i++){
            if (isDivisibleBy(n, i)){
                result = false;
            }
            else {
                result = true;
            }
        }
    }
    else {
        return false;
    }
    return result;
}

//Task C. Next Prime

int nextPrime (int n) {
    int x = n + 1;
    while(isPrime(x)==false){
        x++;
    }
    return x;
}

//Task D. Count primes in range
int countPrimes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count; 
}

//Task E. Is a twin prime?
bool isTwinPrime(int n) {
    if(isPrime(n)){
        if(isPrime(n-2) || isPrime(n+2))
            return true;
        else
            return false;
    }
    else
        return false;    
}

//Task F. Next twin prime 
int nextTwinPrime(int n) {
    int x = n + 1;
        while(!isTwinPrime(x))
            x++;
    return x;  
}

//Task G. Largest twin prime in range
int largestTwinPrime(int a, int b){
    int x = -1;
    for (int i = a; i <= b; i++){
        if(isTwinPrime(i) && i > x)
            x = i;
    }
    return x; 
}