#include <iostream>

using namespace std;

int main() {

    int A{3};
    int defA{0};
    int defB{0};
    int defC{0};

    for (A; A<=1000; A++) {
        for (int B {A+1}; B<=1000; B++) {
            for (int C {B+1}; C<=1000;C++) {

                if (A*A + B*B == C*C) {
                    if (A + B + C == 1000) {
                        defA = A;
                        defB = B;
                        defC = C;
                        goto F;
                    } 
                }

            }
        } 
    }
F:
    cout << defA *defB * defC << endl;

    return 0;
}

