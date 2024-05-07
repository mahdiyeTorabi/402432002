#include <iostream>
using namespace std;
int determinant(int matrix[3][3]) {
    int det = 0;
    for (int i = 0; i < 3; i++) {
        int minor[2][2] = {0};
        int minor_row = 0;
        for (int j = 1; j < 3; j++) {
            int minor_col = 0;
            for (int k = 0; k < 3; k++) {
                if (k != i) {
                    minor[minor_row][minor_col] = matrix[j][k];
                    minor_col++;
                }
            }
            minor_row++;
        }
        int sub_det = (minor[0][0] * minor[1][1]) - (minor[0][1] * minor[1][0]);
        det += (i % 2 == 0 ? 1 : -1) * matrix[0][i] * sub_det;
    }
    return det;
}
int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int det = determinant(matrix);
    cout << "Determinant of the matrix is: " << det << endl;
    return 0;
}
