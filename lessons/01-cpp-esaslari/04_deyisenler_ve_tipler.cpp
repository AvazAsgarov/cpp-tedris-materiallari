#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Tam ədəd tipi (int): -5, 0, 14, 2026 kimi tam ədədlər
    int age = 14;
    int studentCount = 30;

    // 2. Kəsr ədəd tipi (double): 3.14, 95.5, 0.75 kimi onluq kəsr ədədlər
    double averageScore = 94.5;
    double bookPrice = 8.75;

    // 3. Mətn tipi (string): simvol ardıcıllıqları və sözlər
    string studentName = "Ayan";
    string subject = "İnformatika";

    // Məlumatları ekrana çıxarırıq
    cout << "Şagird: " << studentName << endl;
    cout << "Fənn: " << subject << endl;
    cout << "Yaş: " << age << endl;
    cout << "Sinifdəki şagird sayı: " << studentCount << endl;
    cout << "Orta bal: " << averageScore << endl;
    cout << "Dərs vəsaitinin qiyməti: " << bookPrice << " AZN" << endl;

    // Dəyişənin qiymətini yeniləyirik
    age = age + 1;
    cout << "Növbəti il yaş: " << age << endl;

    return 0;
}
