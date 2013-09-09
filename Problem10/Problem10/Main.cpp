// Task: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
// Find the sum of all the primes below two million.

#include <iostream>
#include <cmath>
#include <time.h>
#include "Prime.h"
using namespace std;

long long c = 0;
long long sum = 0;
int main(){
    clock_t t;
    t = clock();
    Prime object;
    object.PrimeNum(2000000);
    t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
    return 0;
}

