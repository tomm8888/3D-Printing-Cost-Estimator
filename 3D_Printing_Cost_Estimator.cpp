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
        cout << "Invalid material. Please choose PLA, PETG, or ABS.\n";
        return 1;
    }

    cout << "Filament weight (grams): ";
    cin >> weight;

    if (weight <= 0) {
        cout << "Weight must be greater than 0.\n";
        return 1;
    }

    cout << "Infill percentage (0-100): ";
    cin >> infill;

    if (infill < 0 || infill > 100) {
        cout << "Infill must be between 0 and 100.\n";
        return 1;
    }

    cout << "Print time (hours): ";
    cin >> printHours;

    if (printHours <= 0) {
        cout << "Print time must be greater than 0.\n";
        return 1;
    }

    cout << "Quality (Draft/Standard/High): ";
    cin >> quality;

    transform(quality.begin(), quality.end(), quality.begin(), ::toupper);

    double qualityRate;

    if (quality == "DRAFT")
        qualityRate = 0.50;
    else if (quality == "STANDARD")
        qualityRate = 1.00;
    else if (quality == "HIGH")
        qualityRate = 1.50;
    else {
        cout << "Invalid quality. Choose Draft, Standard, or High.\n";
        return 1;
    }

    // Material cost
    double materialCost = (weight / 1000.0) * materialPricePerKg;

    // Electricity cost
    double electricityCost = 0.12 * printHours * 0.57;

    // Machine allowance
    double machineCost = 0.50 * printHours * qualityRate;

    // Total cost
    double totalCost = materialCost + electricityCost + machineCost;

    cout << fixed << setprecision(2);

    cout << "\n--- COST ESTIMATE ---\n";
    cout << "Material cost: RM " << materialCost << "\n";
    cout << "Electricity cost: RM " << electricityCost << "\n";
    cout << "Machine allowance: RM " << machineCost << "\n";
    cout << "Estimated total: RM " << totalCost << "\n";

    return 0;
}
