#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string material;
    double weight, infill;

    cout << "=== 3D PRINTING COST ESTIMATOR ===\n";

    cout << "Material (PLA/PETG/ABS): ";
    cin >> material;

    transform(material.begin(), material.end(), material.begin(), ::toupper);

    cout << "Selected material: " << material << "\n";

    cout << "Filament weight (grams): ";
    cin >> weight;

    cout << "Infill percentage (0-100): ";
    cin >> infill;

    cout << "\n--- INPUT SUMMARY ---\n";
    cout << "Material: " << material << "\n";
    cout << "Weight: " << weight << " g\n";
    cout << "Infill: " << infill << "%\n";

    return 0;
}
