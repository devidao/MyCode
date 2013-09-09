#include "Prime.h"
#include <cmath>
#include <iostream>
void Prime::PrimeNum(double x)
{
    long long sum = 0;
    bool prime = true; 
    double number2;
     
    number2 =(double) floor (sqrt (x));
    for (int i = 1; i <= x; i++){       
        for ( int j = 2; j <= number2; j++){
            if ( i!=j && i % j == 0 ){      
                prime = false;
                break;
            }
        }
        if (prime){
            sum += i;
        }
        prime = true;
    }
    std::cout << "Answer: " << sum << std::endl;
}