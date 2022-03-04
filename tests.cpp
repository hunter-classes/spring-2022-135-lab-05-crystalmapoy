#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Task A"){
    CHECK(isDivisibleBy(100,25));
    CHECK(isDivisibleBy(35,17)==0);
}
TEST_CASE("Task B"){
    CHECK(isPrime(7));
    CHECK(isPrime(15));
}
TEST_CASE("Task C"){
    CHECK(nextPrime(16)==17);
    CHECK(nextPrime(18)==19);
}
TEST_CASE("Task D"){
    CHECK(countPrimes(5 , 10));
    CHECK(countPrimes(10, 20));
}
TEST_CASE("Task E"){
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(11) == true);
}
TEST_CASE("Task F"){
    CHECK(nextTwinPrime(10) == 11);
    CHECK(nextTwinPrime(16) == 17);
}
TEST_CASE("Task G"){
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(5, 17) == 17);
}