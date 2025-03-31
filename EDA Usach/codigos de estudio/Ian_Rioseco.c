#include <stdio.h>
#include <string.h>

#define MAX_N 31

int isFreeOfTriplets(char pattern[], int n) {
    for (int i = 0; i <= n - 3; i++) {
        if (pattern[i] == pattern[i + 1] && pattern[i + 1] == pattern[i + 2]) {
            return 0;
        }
    }
    return 1;
}

int countFreeStrings(char pattern[], int n, int idx) {
    if (idx == n) {
        return isFreeOfTriplets(pattern, n);
    }

    if (pattern[idx] == '*') {
        int count = 0;
        pattern[idx] = '0';
        count += countFreeStrings(pattern, n, idx + 1);
        pattern[idx] = '1';
        count += countFreeStrings(pattern, n, idx + 1);
        pattern[idx] = '*';
        return count;
    }

    return countFreeStrings(pattern, n, idx + 1);
}

int main() {
    int n;
    char pattern[MAX_N];

    // Leer la entrada hasta que se ingrese n = 0
    int caseNumber = 1;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        scanf("%s", pattern);

        // Calcular la cantidad de strings libres de tripletas para el patrón actual
        int result = countFreeStrings(pattern, n, 0);

        // Imprimir el resultado
        printf("Caso %d: %d\n", caseNumber++, result);
    }

    return 0;
}
