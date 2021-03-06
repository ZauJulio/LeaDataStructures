void insertionSort(int *A, int size);

void insertionSort(int *A, int size) {
    /*  */
    int i, j, k;

    for (j = 1; j < size; j++) {
        k = A[j];
        i = j - 1;

        while (i >= 0 && A[i] > k) {
            A[i + 1] = A[i];
            i--;
        }

        A[i + 1] = k;
    }
}