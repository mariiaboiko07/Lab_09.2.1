#include <iostream>
#include "macros.h"

using namespace std;

int main()
{
    double x, y, w;
    double part1, part2;
    char ch;

    cout << "Lab 9.2. Using macros and preprocessing directives (Variant 1)" << endl;

    do
    {
        cout << "\nCurrent preprocessor constant Z = " << Z << endl;
        cout << "Input x: "; cin >> x;
        PRINTI(x);
        cout << "Input y: "; cin >> y;
        PRINTI(y);

        // Умовна компіляція залежно від значення Z
#if (Z > 0) && (Z < 5)
        cout << "Active branch: 0 < Z < 5 -> w = max(x^2 + y + z, x*y*z)" << endl;
        part1 = SQR(x) + y + Z;
        PRINTI(part1);
        part2 = x * y * Z;
        PRINTI(part2);
        w = MAX(part1, part2);
#else
        cout << "Active branch: Z <= 0 or Z >= 5 -> w = min(x^2 + (y + z)^2, x*y)" << endl;
        part1 = SQR(x) + SQR(y + Z);
        PRINTI(part1);
        part2 = x * y;
        PRINTI(part2);
        w = MIN(part1, part2);
#endif

        PRINTR(w);

        cout << "\nRepeat? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    return 0;
}