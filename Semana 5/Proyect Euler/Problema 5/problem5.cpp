#include <iostream>

using namespace std;

int main() {
    int masPeq = 40;
    int i = 10;

    while (i<20){
        if (masPeq%i == 0){
            i++;
            continue;
        }
        else{
            i = 10;
            masPeq += 20;
        }
        }
    cout << masPeq << endl;

    return 0;

}