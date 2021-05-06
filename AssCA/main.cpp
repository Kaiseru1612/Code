#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int rowA=0,colA=0;
    int rowB=0,colB=0;
    char c;
    string tmp;
    cout << "Enter number of row for matrix A: "; cin >> rowA; cout << '\n';
    cout << "Enter number of column for matrix A: "; cin >> colA; cout << '\n';
    cout << "Enter number of row for matrix B: "; cin >> rowB; cout << '\n';
    cout << "Enter number of column for matrix B: "; cin >> colB; cout << '\n';


    int** A = new int*[rowA];
    for (int i = 0; i < rowA; i++) {
        A[i] = new int[colA];
    }
    int** B = new int*[rowB];
    for (int i = 0; i < rowB; i++) {
        B[i] = new int[colA];
    }
    int** result = new int*[rowA];
    for (int i = 0; i < rowA; i++) {
        result[i] = new int[colB];
    }
    double ** golden_result = new double*[rowA];
    for (int i = 0; i < rowA; i++) {
        golden_result[i] = new double[colB];
    }
    
    
    
    ifstream ifsA;
    ifstream ifsB;
    ifstream ifsR;
    int m=0,n=0;

    ///OPEN A
    ifsA.open("A.txt");
    while (!ifsA.eof()){
        ifsA.get(c);
        if (c==' ' || c=='\0' || ifsA.eof()){
            if (m==rowA || n == colA) break;
            A[m][n]=stoi(tmp);
            if (n==colA-1) {
                m++;
                n=0;
            }
             else n++;
            tmp = "";
        }
        else{
            tmp += c;
        }
    }
    ifsA.close();


    /// OPEN B
    m=0,n=0;
    tmp="";
    ifsB.open("B.txt");
    while (!ifsB.eof()){
        ifsB.get(c);
        if (m==rowB || n == colB) break;
        if (c==' ' || c=='\0' || ifsB.eof()){
            B[m][n]=stoi(tmp);
            if (n==colB-1) {
                m++;
                n=0;
            }
            else n++;
            tmp = "";
        }
        else{
            tmp += c;
        }
    }
    ifsB.close();

    ///OPEN result
    m=0,n=0;
    tmp="";
    ifsR.open("result.txt");
    while (!ifsR.eof()){
        ifsR.get(c);
        if (m==rowA || n == colB) break;
        if (c==' ' || c=='\0' || ifsR.eof()){
            result[m][n]=stoi(tmp);
            if (n==colB-1) {
                m++;
                n=0;
            }
            else n++;
            tmp = "";
        }
        else{
            tmp += c;
        }
    }
    ifsR.close();
    /// Multiply 2 Matrix
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            for (int k = 0; k < colA; k++) {
                golden_result[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            golden_result[i][j]=(double)(golden_result[i][j]/result[i][j]);
        }
    }
    /// Print
    /*for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;*/
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            cout << golden_result[i][j] << " ";
        }
        cout << endl;
    }
    /// Delete
    for (int i = 0; i < rowA; i++) {
        delete[] A[i];
    }
    delete[] A;
    for (int i = 0; i < rowB; i++) {
        delete B[i];
    }
    delete[] B;
    for (int i = 0; i < rowA; i++) {
        delete[] result[i];
    }
    delete[] result;
    for (int i = 0; i < rowA; i++) {
        delete[] golden_result[i];
    }
    delete[] golden_result;
    return 0;
}
