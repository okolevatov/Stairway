#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3)
        return 0;
    int N = atoi(argv[1]);
    int K = atoi(argv[2]);
    int all = 0;

    if((all = N % (K + 1)) != 0) { // when he step over K stairs he always will be at i * (K + 1) stair, then if after all steps there is remains less then 1 step we add one step 
        all = N / (K + 1);
        all++;
    }
    else 
        all = N / (K + 1);
    std::cout<<all<<std::endl;
    return 0;
}
