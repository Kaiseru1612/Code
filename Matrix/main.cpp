/// sub matrix
/*
#include <iostream>
using namespace std;

int main() {
    unsigned int m1,n1;
    unsigned int m2,n2;
    ///input
    cin >> m1 >> n1 >> m2 >> n2;
    ///allocate
    int** A = new int*[m1];
    for (int i = 0; i < m1; i++) {
        A[i] = new int[n1];
    }
    int** B = new int*[m2];
    for (int i = 0; i < m2; i++) {
        B[i] = new int[n2];
    }
    ///input matrix
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> B[i][j];
        }
    }
    ///print
    cout << endl;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cout << B[i][j] << ' ';
        }
        cout << endl;
    }
    /// check
    bool check;
    int count=0;
    for (int iB = 0; iB < m2; iB++) {
        for (int jB = 0; jB < n2; jB++) {
            check = true;
            for (int iA = 0; iA < m1; iA++) {
                for (int jA = 0; jA < n1; jA++) {
                    if (A[iA][jA]!= B[iB+iA][jB+jA]){
                        check = false;
                        break;
                    }
                }
                if (!check)
                    break;
            }
            if (check) count++;
        }
    }
    cout << endl << "num: " << count;
    /// Delete
    for (int i = 0; i < m1; i++) {
        delete[] A[i];
    }
    delete[] A;
    for (int i = 0; i < m2; i++) {
        delete[] B[i];
    }
    delete[] B;
    return 0;
}
*/
/// max sub matrix
/*#include <iostream>
using namespace std;

int main() {
    unsigned int m1,n1;
    unsigned int m2,n2;
    ///input
    cin >> m1 >> n1 >> m2 >> n2;
    ///allocate
    int** A = new int*[m1];
    for (int i = 0; i < m1; i++) {
        A[i] = new int[n1];
    }
    ///input matrix
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            A[i][j] = rand()%10;
        }
    }
    ///print
    cout << endl;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    /// check
    int Max = -100000;
    int sum_tmp;
    int r=0, c=0;
    bool flag;
    for (int iB = 0; iB < m1; iB++) {
        for (int jB = 0; jB < n1; jB++) {
            sum_tmp = 0;
            flag = true;
            for (int iA = 0; iA < m2; iA++) {
                for (int jA = 0; jA < n2; jA++) {
                    if ((iB+iA) < m1 && (jB+jA) < n1 ){
                        sum_tmp += A[iB+iA][jB+jA];
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
                if (!flag) break;
            }
            if (flag){
                if (sum_tmp > Max) {
                    r = iB;
                    c = jB;
                    Max = sum_tmp;
                }
            }
        }
    }
    ///print
    cout << endl;
    for (int i = r; i < r + m2; i++) {
        for (int j = c; j < c + n2; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    /// Delete
    for (int i = 0; i < m1; i++) {
        delete[] A[i];
    }
    delete[] A;
    return 0;
}*/
/// opposite through main diagonal
#include <iostream>
using namespace std;

int main() {
    unsigned int m1, n1;
    ///input
    cin >> m1 >> n1;
    ///allocate
    int **A = new int *[m1];
    for (int i = 0; i < m1; i++) {
        A[i] = new int[n1];
    }
    ///input matrix
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            A[i][j] = 5;
        }
    }
    ///print
    cout << endl;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    /// check
    int count = 0;
    for (int iB = 0; iB < m1; iB++) {
        for (int jB = 0; jB < n1; jB++) {
            if (iB == jB) break;
            if (A[iB][jB]==A[jB][iB]) count++;
        }
    }
    cout << '\n' << count;
    /// Delete
    for (int i = 0; i < m1; i++) {
        delete[] A[i];
    }
    delete[] A;
    return 0;
}