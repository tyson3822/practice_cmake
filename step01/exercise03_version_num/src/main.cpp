#include <stdio.h>
#include <atomic>

#include "version.hpp"

#define LOOP_COUNT 1000

using namespace std;

int main(int argv, char ** argc) {

    printf("Vesion: %s\n", VersionToString().c_str());

    return 0;
}