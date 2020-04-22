#include <iostream>


void print_array2d(int *p, int N, int M) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cout << p[i * M + j] << '\t'; // A[i][j]
        }
        std::cout << '\n';
     }
}


int main() {
    int N, M;
    std::cin >> N >> M;

    int A[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = i * M + j;
        }
    }

    print_array2d(reinterpret_cast<int*>(A), N, M);

    return 0;
}
