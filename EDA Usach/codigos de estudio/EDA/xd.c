#include <stdio.h>
#include <limits.h>

void calcular_costos(int arreglo[], int N, int k, int index, int subarreglos[N][N], int *min_costo, int *max_costo) {
    if (index == N) {
        int costo_total = 0;
        for (int i = 0; i < k; i++) {
            int max_elemento = INT_MIN;
            for (int j = 0; j < N; j++) {
                if (subarreglos[i][j] != 0 && arreglo[j] > max_elemento) {
                    max_elemento = arreglo[j];
                }
            }
            costo_total += max_elemento;
        }

        if (costo_total < *min_costo) {
            *min_costo = costo_total;
        }
        if (costo_total > *max_costo) {
            *max_costo = costo_total;
        }
    } else {
        for (int i = 0; i < k; i++) {
            subarreglos[i][index] = arreglo[index];
            calcular_costos(arreglo, N, k, index + 1, subarreglos, min_costo, max_costo);
            subarreglos[i][index] = 0;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arreglo[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arreglo[i]);
    }

    int subarreglos[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            subarreglos[i][j] = 0;
        }
    }

    for (int k = 1; k <= N; k++) {
        int min_costo = INT_MAX;
        int max_costo = INT_MIN;

        calcular_costos(arreglo, N, k, 0, subarreglos, &min_costo, &max_costo);

        printf("%d %d\n", min_costo, max_costo);
    }

    return 0;
}