#include <iostream>

using namespace std;

int main()
{
    int counter = 2;
    int prime = 0;
    bool primeFound=true;

    for(int i = 3; counter < 10002; i++){
        for(int j = 2; j < i; j++){
 
            primeFound = true;

            if(i % j == 0){

                primeFound = false;
                break;
            }
            if(counter==10001){
                prime = i;
            }
        }
        if(primeFound){
            counter+=1;
        }
    }
    std::cout << prime << std::endl;

    return 0;

}