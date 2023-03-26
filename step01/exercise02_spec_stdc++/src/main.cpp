#include <stdio.h>
#include <atomic>

#define LOOP_COUNT 1000

using namespace std;

int main(int argv, char ** argc) {

    atomic<int> counter = {0};

    for (int index = 0; index < LOOP_COUNT; ++index) {
        counter.fetch_add(1, memory_order_relaxed);
    }

    printf("Result of counter: %d.\n", counter.load(memory_order_relaxed));

    return 0;
}