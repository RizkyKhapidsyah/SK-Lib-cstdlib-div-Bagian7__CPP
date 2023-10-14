#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    div_t result = div(50, 17);

    cout << "div(50, 17) gives quotient = " << result.quot << " and remainder = " << result.rem << "\n";

    _getch();
    return 0;
}