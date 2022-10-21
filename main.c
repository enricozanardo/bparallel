#include <stdio.h>
#include <omp.h>

int main() {
    int tid = -1;
    #pragma omp parallel private(tid) // Start parallel region
    {
        tid = omp_get_thread_num(); // default is the number of CPU in the machine
        printf("Hello from thread: %d\n", tid);

        if (tid == 0) {
            printf("Number of therads = %d\n", omp_get_num_threads());
        }
    } // end parallel region: join threads
    return 0;
}


