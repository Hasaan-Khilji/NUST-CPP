#include <iostream>

using namespace std;

void addMatrix(int M1[], int M2[]);
void subMatrix(int M1[], int M2[]);
void transMatrix(int M[], int n);
void printMatrix(int M[], int n);

int rows[2];
int columns[2];

int main() {
    bool allowed = true;
    cout << "Number of rows of Matrix A: ";
    cin >> rows[0];
    cout << "Number of columns of Matrix A: ";
    cin >> columns[0];

    int A[rows[0] * columns[0]];
    for (int i = 0; i < rows[0]; i++) {
        for (int j = 0; j < columns[0]; j++) {
            cout << "Element A" << i+1 << j+1 << ": ";
            cin >> A[i + (j * columns[0])];
        }
    }
    cout << "Number of rows of Matrix B: ";
    cin >> rows[1];
    cout << "Number of columns of Matrix B: ";
    cin >> columns[1];
    int B[rows[1] * columns[1]];
    for (int i = 0; i < rows[1]; i++) {
        for (int j = 0; j < columns[1]; j++) {
            cout << "Element B" << i+1 << j+1 << ": ";
            cin >> B[i + (j * columns[1])];
        }
    }
    
    if (rows[0] != rows[1] || columns[0] != columns[1]) {
        allowed = false;
    }

    char choice;
    if (allowed) {
        cout << endl << "What do you want to do with these matrices?\na) Addition of Matrices\nb) Subtraction of Matrices\nc) Transpose of Matrices\nd) Exit" << endl << endl;
        cin >> choice;
    } else {
        cout << endl << "What do you want to do with these matrices?\na) Addition of Matrices (Cannot apply)\nb) Subtraction of Matrices (Cannot apply)\nc) Transpose of Matrices\nd) Exit" << endl << endl;
        cin >> choice;
    }
    cout << endl;
    cout << "Matrix A:" << endl;
    printMatrix(A, 0);
    cout << "Matrix B:" << endl;
    printMatrix(B, 1);

    switch (choice) {
        case 'd':
        case 'D':
            cout << "Exiting...";
            return 1;
            break;
        case 'a':
        case 'A':
            if (allowed) {
            addMatrix(A, B);
            } else {
                cout << "Rows and Columns DO NOT MATCH!" << endl;
            }
            return 2;
        case 'b':
        case 'B':
        if (allowed) {
            subMatrix(A, B);
            } else {
                cout << "Rows and Columns DO NOT MATCH!" << endl;
            }
            return 2;
        case 'c':
        case 'C':
            cout << "Transpose of Matrix A:";
            transMatrix(A, 0);
            cout << "Transpose of Matrix B:";
            transMatrix(B, 1);
            break;
        default:
            cout << "Invalid Input!" << endl;
            return 3;
    }


    return 0;
}


void addMatrix(int M1[], int M2[]){
    int sum[rows[0] + columns[0]];

    for (int i = 0; i < rows[0]; i++) {
        for (int j = 0; j < columns[0]; j++) {
            sum[i + (j * columns[0])] = M1[i + (j * columns[0])] + M2[i + (j * columns[0])];
        }
    }

    cout << "Sum of Matrices:" << endl;
    printMatrix(sum, 0);
}


void subMatrix(int M1[], int M2[]) {
    int sub[rows[0] + columns[0]];

    for (int i = 0; i < rows[0]; i++) {
        for (int j = 0; j < columns[0]; j++) {
            sub[i + (j * columns[0])] = M1[i + (j * columns[0])] - M2[i + (j * columns[0])];
        }
    }

    cout << "Subtraction of Matrices:" << endl;
    printMatrix(sub, 0);
}


void transMatrix(int M[], int n) {
    int trans[rows[n]][columns[n]];
    int me[3][2] = {{1, 2},{3, 4},{5, 6}};

    for (int i = 0; i < rows[n]; i++) {
        for (int j = 0; j < columns[n]; j++) {
            trans[j][i] = M[i + (j * columns[n])];
        }
    }
    cout << endl;

    for (int i = 0; i < columns[n]; i++) {
        for (int j = 0; j < rows[n]; j++) {
            cout << trans[i][j] << " ";  
        }
        cout << endl;
    }
    cout << endl;
}

void printMatrix(int M[], int n) {
    for (int i = 0; i < rows[n]; i++) {
        for (int j = 0; j < columns[n]; j++) {
            cout << M[i + (j * columns[n])] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
