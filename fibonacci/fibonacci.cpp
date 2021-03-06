//
// Created by fanli Lin on 31.01.18.
//

#include <algorithm>
#include <vector>

typedef std::vector<unsigned long> Vector;

unsigned long fibonacci(unsigned n) {


    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

unsigned long fibonacciLinear(unsigned n) {

    if(n==0) return 0;
    if(n==1) return 1;

    Vector fib(n+1);

    fib[0] = 0;
    fib[1] = 1;

    for(unsigned i=2; i<=n; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}


unsigned long fibonacciConst(unsigned n) {
    if(n==0) return 0;
    if(n==1) return 1;

    unsigned long f_i_2 = 0;
    unsigned long f_i_1 = 1;

    for(unsigned i=2; i<=n; ++i) {
        f_i_2 += f_i_1;
        std::swap(f_i_2, f_i_1);

    }

    return f_i_1;
}
