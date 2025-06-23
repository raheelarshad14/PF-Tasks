#include <iostream>
#include <iomanip>
using namespace std;

struct Seat {
    char status;
};

int main() {
    int rows = 9;
    int cols = 6;
    int row, column, moreBooking = 1;

    Seat** seatarr = new Seat*[rows];
    for (int i = 0; i < rows; i++) {
        seatarr[i] = new Seat[cols];
        for (int j = 0; j < cols; j++) {
            seatarr[i][j].status = 'F';
        }
    }

    cout << "\t       -------------------------" << endl;
    for (int i = 0; i < rows; i++) {
        if (i == 0) {
            cout << "\t\tC.No->";
            cout << "1-2-3-4-5|    |6|" << endl;
            cout << "\t\tR.No";
            cout << "|-------------------" << endl;
        } else if (i % 2 == 0) {
            cout << "\t\t    |----------|    |-|" << endl;
        }

        cout << "\t\t" << i + 1 << ")  ";
        cout << "|";
        for (int j = 0; j < cols; j++) {
            if (j == 5)
                cout << "|    |" << seatarr[i][j].status;
            else
                cout << " " << seatarr[i][j].status;
        }
        cout << "|" << endl;
    }
    cout << "\t      -------------------------" << endl;

    do {
        cout << "\t\tROW.No: ";
        cin >> row;

        if (row < 1 || row > rows) {
            cout << "Invalid input. Row must be between 1 and 9." << endl;
            continue;
        }

        cout << "\t\tCOLUMN.No: ";
        cin >> column;

        if (column < 1 || column > cols) {
            cout << "Invalid input. Column must be between 1 and 6." << endl;
            continue;
        }

        if (seatarr[row - 1][column - 1].status == 'B') {
            cout << "Seat already booked. Try another one." << endl;
            continue;
        }

        seatarr[row - 1][column - 1].status = 'B';

        cout << "\t       -------------------------" << endl;
        for (int i = 0; i < rows; i++) {
            if (i == 0) {
                cout << "\t\tC.No->";
                cout << "1-2-3-4-5|    |6|" << endl;
                cout << "\t\tR.No";
                cout << "|-------------------" << endl;
            } else if (i % 2 == 0) {
                cout << "\t\t    |----------|    |-|" << endl;
            }

            cout << "\t\t" << i + 1 << ")  ";
            cout << "|";
            for (int j = 0; j < cols; j++) {
                if (j == 5)
                    cout << "|    |" << seatarr[i][j].status;
                else
                    cout << " " << seatarr[i][j].status;
            }
            cout << "|" << endl;
        }
        cout << "\t      -------------------------" << endl;

        cout << "Enter any key to continue booking or 0 to exit: ";
        cin >> moreBooking;

    } while (moreBooking != 0);

    cout << "Thank you for using our service." << endl;

    for (int i = 0; i < rows; i++) {
        delete[] seatarr[i];
    }
    delete[] seatarr;

    return 0;
}