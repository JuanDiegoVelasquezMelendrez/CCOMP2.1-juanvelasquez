#include <iostream>

using namespace std;

int main() {

    int y{100};
    int &yRef{y};
    int* yPtr{nullptr};

    yRef = 200;

    //*yPtr = &y; // ESTO ESTAL MAL
    yPtr = &y;

    int* ptr{nullptr};
    //*ptr = 100; <-- mal.

    *yPtr = 100;
    
    cout << *yPtr << endl;

    return 0;
}