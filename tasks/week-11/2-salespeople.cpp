#include <iostream>
#include <string>

using namespace std;

int max_spaces = 20;
string string_spaces(string s);

int main() {
    const int totalSalesPersons = 4;
    const int totalProducts = 3;
    int sales[totalSalesPersons][totalProducts + 1] = {0};     // +1 to store total products in the same array

    // for (int i = 0; i < totalSalesPersons; i++) {
    //     for (int j = 0; j < totalProducts+1; j++) {
    //         cout << sales[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //
    // I was testing {0}

    int total[totalProducts + 1] = {0};     // +1 to store grand total
    string products[totalProducts] = {"Laptops", "Phones", "Tablets"};

    // Data input for loop and calculating totals
    for (int i = 0; i < totalSalesPersons; i++) {
        for (int j = 0; j < totalProducts; j++) {
            cout << "Person " << i + 1 << ", " << products[j] << ": ";
            cin >> sales[i][j];
            sales[i][totalProducts] += sales[i][j];
            total[j] += sales[i][j];
        }
    }

    // Calculating Grandtotal
    for (int i = 0; i < totalProducts; i++)
    total[totalProducts] += total[i];

    // This loop was a hell to make and can be optimized using smarter arrays
    // But I wanted to stick with arrays which did notnhave random values, so used this logic.
    for (int i = -1; i < totalSalesPersons + 1; i++) {
        for (int j = -1; j < totalProducts + 1; j++) {

            // First there are three if satements. One for i == -1, one for i < totalSalesPersons and the last else for i == totalSalesPerson
            // Then inside each of these ifs, same happens with happen to j
            if (i == -1) {

                // if i == -1, we print the first header row
                if (j == -1) {

                    // for j == -1, we go print this
                    cout << string_spaces("Sales Person");

                } else if (j < totalProducts) {

                    // for j < totalProducts, we print the names of the products stored in the products array
                    cout << string_spaces(products[j]);

                } else {

                    // for j == totalProducts, we print this
                    cout << string_spaces("Total");

                }

            } else if (i < totalSalesPersons) {

                if (j == -1) {

                    // For j == -1, we print Person along the salesperson number
                    cout << string_spaces("Person " + to_string(i + 1));

                } else {

                    // else print the actual sales data for that person and product
                    cout << string_spaces(to_string(sales[i][j]));

                }

            } else {

                // for the last condition, i == totalSalesPerson, we print the "Total" row
                if (j == -1) {

                    // if j == -1, we print this
                    cout << string_spaces("Total");

                } else {

                    // else print the values for total
                    cout << string_spaces(to_string(total[j]));

                }

            }
        }
        cout << endl;
    }

    return 0;
}

// This returns a string that is identical to the given argument string but with a spaces character appended to it (max_spaces - argument.lentgh()) times
// Used this to make a table
string string_spaces(string s) {
    string meow = s;
    for (int i = 0; i < max_spaces - s.length(); i++) {
        meow.append(" ");
    }
    return meow;
}