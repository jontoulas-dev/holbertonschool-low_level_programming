#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;

    clock_t debut_total, fin_total;
    clock_t debut_build, fin_build;
    clock_t debut_process, fin_process;
    clock_t debut_reduce, fin_reduce;

    double total, build, process, reduce;

    debut_total = clock();

    debut_build = clock();
    build_dataset();
    fin_build = clock();
    build = (double)(fin_build - debut_build) / CLOCKS_PER_SEC;
    
    debut_process = clock();
    process_dataset();
    fin_process = clock();
    process = (double)(fin_process - debut_process) / CLOCKS_PER_SEC;

    debut_reduce = clock();
    checksum = reduce_checksum();
    fin_reduce = clock();
    reduce = (double)(fin_reduce - debut_reduce) / CLOCKS_PER_SEC;

    fin_total = clock();
    total = (double)(fin_total - debut_total) / CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");
    
    printf("TOTAL seconds: %.6f\n", total);
    printf("BUILD_DATA seconds: %.6f\n", build);
    printf("PROCESS seconds: %.6f\n", process);
    printf("REDUCE seconds: %.6f\n", reduce);

    return 0;
}
