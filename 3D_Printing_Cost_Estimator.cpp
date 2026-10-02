#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string material;

    cout << "=== 3D PRINTING COST ESTIMATOR ===\n";

    cout << "Material (PLA/PETG/ABS): ";
    cin >> material;

    transform(material.begin(), material.end(), material.begin(), ::toupper);

    cout << "Selected material: " << material << "\n";

    return 0;
}
