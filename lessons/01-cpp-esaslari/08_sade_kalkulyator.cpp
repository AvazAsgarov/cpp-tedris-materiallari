#include <iostream>

using namespace std;

int main() {
    int notebookCount;
    double notebookPrice;

    cout << "Dəftərlərin sayını daxil edin: ";
    cin >> notebookCount;

    cout << "1 dəftərin qiymətini daxil edin (AZN): ";
    cin >> notebookPrice;

    double totalCost = notebookCount * notebookPrice;

    cout << "Alınan dəftər sayı: " << notebookCount << endl;
    cout << "1 ədədinin qiyməti: " << notebookPrice << " AZN" << endl;
    cout << "Ümumi ödəniş məbləği: " << totalCost << " AZN" << endl;

    return 0;
}
