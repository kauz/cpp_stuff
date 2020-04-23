#include <iostream>

using namespace std;

int left_bound(int A[], int N, int x) {
    int left = -1;
    int right = N;
    while (right - left > 1) {
        int middle = (left + right) / 2;
        if (A[middle] < x)
            left = middle;
        else
            right = middle;
    }
    return left;
}

int find(int A[], int N, int x) {
    int middle = N / 2;
    int left = left_bound(A, N, x);
    int possible_x = left + 1;
    if (possible_x < N and A[possible_x] == x)
        return possible_x;
    else
        return -1;
}

int main() {
    int N = 10;
    int A[] = {1, 3, 3, 7, 7, 7, 7, 9, 10, 10};
    int x;

    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << "\n";
    cin >> x;
    cout << "left boundary of x is: " << left_bound(A, N, x) << "\n";
    cout << "index of x is: " << find(A, N, x) << "\n";
    return 0;
}
