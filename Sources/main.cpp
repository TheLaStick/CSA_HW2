//------------------------------------------------------------------------------
// main.cpp - contains main function
// for simple test
//------------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "../headers/container.h"

void errMessage1() {
    printf("Incorrect command line!\n"
           "  Waited:\n"
           "     command -f infile outfile1 outfile2\n"
           "  Or:\n"
           "     command -n number outfile1 outfile2\n");
}

void errMessage2() {
    printf("Incorrect qualifier value!\n"
           "  Waited:\n"
           "     command -f infile outfile1 outfile2\n"
           "  Or:\n"
           "     command -n number outfile1 outfile2\n");
}

int main(int argc, char *argv[]) {
    clock_t start = clock();

    if (argc != 5) {
        errMessage1();
        return 1;
    }

    printf("Start\n");
    container c;
    c.Init();

    srand(static_cast<unsigned int>(time(nullptr)));

    if (!strcmp(argv[1], "-f")) {
        FILE *fileIn = fopen(argv[2], "r");
        if (fileIn == nullptr) {
            printf("Cannot find file with name %s\n", argv[2]);
            return 3;
        }
        c.In(fileIn);
        fclose(fileIn);
        if (c.len < 1 || c.len > container::max_len) {
            printf("Incorrect number of plants = %d. Set 0 < number <= %d\n", c.len, container::max_len);
            return 3;
        }
    } else if (!strcmp(argv[1], "-n")) {
        int size = atoi(argv[2]);
        if ((size < 1) || (size > container::max_len)) {
            printf("Incorrect number of plants > %d. Set 0 < number <= %d\n", size, container::max_len);
            return 3;
        }
        c.InRandom(size);
    } else {
        errMessage2();
        return 2;
    }

    // Outputting container content into a file
    FILE *fileOut1 = fopen(argv[3], "w");
    fprintf(fileOut1, "Filled container:\n");
    c.Out(fileOut1);
    fclose(fileOut1);

    // The 2nd part of task
    FILE *fileOut2 = fopen(argv[4], "w");
    c.DeleteSort();
    fprintf(fileOut2, "Sorted container with deleted elements:\n");
    c.Out(fileOut2);
    fclose(fileOut2);

    c.Clear();

    printf("Stop\n");
    printf("Time taken: %.2f ms\n", (double)(clock() - start) / CLOCKS_PER_SEC * 1000);
    return 0;
}
