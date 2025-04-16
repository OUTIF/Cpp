#include <iostream>
#define N 4
using namespace std;

int main() {
    int A[N][N];
    int B[N][N];
    int* p = &A[0][0];
    int* q = &B[0][0];
    int total = N * N;

    
    for (int i = 0; i < total; ++i) {
        *(p + i) = 0;
        *(q + i) = 0;
    }

  
    cout << "setting all to 0 of Matrix A:\n";
    for (int i = 0; i < total; ++i) {
        cout << *(p + i) << " ";
        if ((i + 1) % N == 0) cout << endl;
    }

   
    for (int i = 0; i < total; ++i) {
        int row = i / N;
        int col = i % N;
        if (row == 0 || row == N - 1 || col == 0 || col == N - 1) {
            *(p + i) = 1;
            *(q + i) = 1;
        }
    }

 
    cout << "\nMatrix A:\n";
    for (int i = 0; i < total; ++i) {
        cout << *(p + i) << " ";
        if ((i + 1) % N == 0) cout << endl;
    }

    for (int i = 0; i < total; ++i) {
        int row = i / N;
        int col = i % N;
        if (row == 0 || row == N - 1 || col == 0 || col == N - 1) {
            *(q + i) = (*(p + i))*2;
        }
    }

    cout << "\nMatrix B:\n";
    for (int i = 0; i < total; ++i) {
        cout << *(q + i) << " ";
        if ((i + 1) % N == 0) cout << endl;
    }
    


    return 0;
}

