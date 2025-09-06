#include <iostream>

using namespace std;

int main() {
    int x=0;
    for (int i = 0; i < 10000000; ++i) {
        x+=i;
    }
    return 0;
}
