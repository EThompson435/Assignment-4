#include <iostream>
using namespace std;

void create_multiplication_table() {
    while (true) {
        int start_range_table, end_range_table, start_range_mult, end_range_mult;

        // Get user input for the ranges
        cout << "Enter the starting range for Multiplication Table: ";
        cin >> start_range_table;
        cout << "Enter the ending range for Multiplication Table: ";
        cin >> end_range_table;
        cout << "Enter the starting range for multiplying the numbers in Multiplication Table: ";
        cin >> start_range_mult;
        cout << "Enter the ending range for multiplying the numbers in Multiplication Table: ";
        cin >> end_range_mult;

        // Print the multiplication table
        cout << "\nHere is the multiplication table for " << start_range_table << " to " << end_range_table << " in the range of " << start_range_mult << " to " << end_range_mult << endl;

        // Print header row
        cout << "X\t";
        for (int i = start_range_table; i <= end_range_table; ++i) {
            cout << i << "\t";
        }
        cout << endl;

        // Print each row of the table
        for (int i = start_range_mult; i <= end_range_mult; ++i) {
            cout << i << "\t";
            for (int j = start_range_table; j <= end_range_table; ++j) {
                cout << i * j << "\t";
            }
            cout << endl;
        }

        // Ask if the user wants to create another table
        char repeat;
        cout << "\nDo you want to create another multiplication table (yes/no): ";
        cin >> repeat;
        if (repeat != 'y' && repeat != 'Y') {
            break;
        }
    }

    cout << "Thank you for using the multiplication table generator!" << endl;
}

int main() {
    create_multiplication_table();
    return 0;
}
