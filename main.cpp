#include <iostream>
#include "number_operation.h"

using namespace std;
using namespace no;

int main() {
    vector<int> result = findFactors(525326735);
    for( int i: result)
        cout << i << " ";
    return 0;
}
