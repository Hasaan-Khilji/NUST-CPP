#include <iostream>

using namespace std;

int** get_matrix();
void addMatrix(int** Matrices[], int n, int Rows[], int Columns[]);
void subMatrix(int** Matrices[], int n, int Rows[], int Columns[]);
void transMatrix(int** Matrices[], int n, int Rows[], int Columns[]);
void printMatrices(int** Matrices[], int n, int Rows[], int Columns[]);


int main() {
    int n;
    bool allowed = true;

    cout << "Number of Matrices: ";
    cin >> n;
    int** matrices[n];
    int rows[n];
    int columns[n];
    for (int i = 0; i < n; i++){
        cout << "Matrix " << i + 1 << endl;
        matrices[i] = get_matrix();
        rows[i] = sizeof(matrices) / sizeof(matrices[0]);
        if (rows[i] != rows[0]) {
            allowed = false;
        }
        columns[i] = sizeof(matrices[0]) / sizeof(matrices[0][0]);
        if (columns[i] != columns[0]) {
            allowed = false;
        }
    }

    printMatrices(matrices, n, rows, columns);

    char choice;
    if (allowed) {
        cout << "What do you want to do with these matrices?\na) Addition of Matrices\nb)Subtraction of Matrices\nc) Transpose of Matrices\nd) Exit" << endl;
        cin >> choice;
    } else {
        cout << "What do you want to do with these matrices?\na) Addition of Matrices (Cannot apply)\nb)Subtraction of Matrices (Cannot apply)\nc) Transpose of Matrices\nd) Exit" << endl;
        cin >> choice;
    }

    switch (choice) {
        case 'e':
        case 'E':
            cout << "Exiting...";
            return 1;
            break;
        case 'a':
        case 'A':
            if (allowed) {
            addMatrix(matrices, n, rows, columns);
            } else {
                cout << "Rows and Columns DO NOT MATCH!";
            }
            return 2;
        case 'b':
        case 'B':
        if (allowed) {
            subMatrix(matrices, n, rows, columns);
            } else {
                cout << "Rows and Columns DO NOT MATCH!";
            }
            return 2;
        case 'c':
        case 'C':
        for (int i = 0; i < n; i++){
            transMatrix(matrices, n, rows, columns);
            }
            break;
        default:
            cout << "invalid input" << endl;
            return 3;
    }


    return 0;
}

void printMatrices(int** Matrices[], int n, int Rows[], int Columns[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < Rows[i]; j++) {
            for (int k = 0; k < Columns[i]; k++) {
                cout << Matrices[j][k][i] << "";
            }
            cout << endl;
        }
    }
}

int** get_matrix() {
    int n;
    int m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    int M[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element M" << i + 1 << j + 1 << ": ";
            cin >> M[i][j];
        }
    }
    cout << endl;
    return M;
}


void addMatrix(int** Matrices[], int n, int Rows[], int Columns[]) {
    
}