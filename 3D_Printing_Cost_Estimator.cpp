#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string material, quality;
    double weight, infill, printHours;
    double materialPricePerKg;

    cout << "=== 3D PRINTING COST ESTIMATOR ===\n";

    cout << "Material (PLA/PETG/ABS): ";
    cin >> material;
    transform(material.begin(), material.end(), material.begin(), ::toupper);

    if (material == "PLA")
        materialPricePerKg = 75.0;
    else if (material == "PETG")
        materialPricePerKg = 85.0;
    else if (material == "ABS")
        materialPricePerKg = 80.0;
    else {
        cout << "Invalid material.\n";
        return 1;
    }

    cout << "Filament weight (grams): ";
    cin >> weight;

    cout << "Infill percentage (0-100): ";
    cin >> infill;

    cout << "Print time (hours): ";
    cin >> printHours;

    cout << "Quality (Draft/Standard/High): ";
    cin >> quality;
    transform(quality.begin(), quality.end(), quality.begin(), ::toupper);

    double materialCost = (weight / 1000.0) * materialPricePerKg;
    double electricityCost = 0.12 * printHours * 0.57;
    double machineCost = 0.50 * printHours;
    double totalCost =
    materialCost + electricityCost + machineCost;

    cout << fixed << setprecision(2);
    cout << "\n--- COST ESTIMATE ---\n";
    cout << "Material cost: RM " << materialCost << "\n";
    cout << "Electricity cost: RM " << electricityCost << "\n";
    cout << "Machine allowance: RM " << machineCost << "\n";
    cout << "Estimated total: RM " << totalCost << "\n";
    return 0;
}
