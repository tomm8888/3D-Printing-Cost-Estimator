#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string material, quality;
    double weight, infill, printHours;

    cout << "=== 3D PRINTING COST ESTIMATOR ===\n";

    cout << "Material (PLA/PETG/ABS): ";
    cin >> material;
    transform(material.begin(), material.end(), material.begin(), ::toupper);

    cout << "Filament weight (grams): ";
    cin >> weight;

    cout << "Infill percentage (0-100): ";
    cin >> infill;

    cout << "Print time (hours): ";
    cin >> printHours;

    cout << "Quality (Draft/Standard/High): ";
    cin >> quality;
    transform(quality.begin(), quality.end(), quality.begin(), ::toupper);

    cout << "\n--- INPUT SUMMARY ---\n";
    cout << "Material: " << material << "\n";
    cout << "Weight: " << weight << " g\n";
    cout << "Infill: " << infill << "%\n";
    cout << "Print time: " << printHours << " hours\n";
    cout << "Quality: " << quality << "\n";

    return 0;
}
