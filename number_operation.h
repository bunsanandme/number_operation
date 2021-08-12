#ifndef SOLUTION2_NUMBER_OPERATION_H
#define SOLUTION2_NUMBER_OPERATION_H

#include <vector>
#include <cmath>

using namespace std;

namespace no {

    const int N = 10;

    int GCD(int a, int b) {
        while(b != 0) {
            int remainer = a % b;
            a = b;
            b = remainer;
        }
        return a;
    }

    double raiseToPower(double a, int p) {
        if(p == 1) return a;
        if(p % 2 == 0) return raiseToPower(a*a, p/2);
        return a * raiseToPower(a, p-1);
    }

    vector<int> findFactors(int number) {
        vector<int> factors;
        while(number % 2 == 0) {
            factors.push_back(2);
            number /= 2;
        }
        int i = 3;
        double max_factor = sqrt(number);
        while (i <= max_factor) {
            while(number % i == 0) {
                factors.push_back(i);
                number /= i;
                max_factor = sqrt(number);
            }
            i += 2;
        }
        if (number > 1) factors.push_back(number);
        return factors;
    }
}
#endif //SOLUTION2_NUMBER_OPERATION_H
