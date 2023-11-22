#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_(int min, int max) {
    // Random number in interval [min, max]
    return rand() % (max - min + 1) + min;
}

int main() {
    // Number of records in the dataset
    const int DATASET_SIZE = 100;

    // Seed random number generator with current time
    srand(time(NULL));

    printf("%s\n", // Dataset header (must match the number of columns)
        "feature1,feature2,class"
    );

    for (int i = 0; i < DATASET_SIZE; i++) {
        printf(
            "%d,%d,%s\n",
            random_(0, 10),                     // feature1
            random_(20, 30),                    // feature2
            random_(0, 1) ? "\"class1\"" : "\"class2\"" // class
        );
    }

    return 0;
}
