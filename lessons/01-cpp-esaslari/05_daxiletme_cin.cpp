#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int birthYear;

    // Qızıl qayda: cin-dən əvvəl həmişə cout ilə istifadəçiyə sual veririk
    cout << "Adınızı daxil edin: ";
    cin >> name;

    cout << "Doğum ilinizi daxil edin: ";
    cin >> birthYear;

    int currentYear = 2026;
    int age = currentYear - birthYear;

    cout << "Salam, " << name << "! Sizin təxminən " << age << " yaşınız var." << endl;

    // Bir sətirdə iki ədəd daxil etmək
    int a, b;
    cout << "İki ədəd daxil edin (aralarında boşluq qoyaraq): ";
    cin >> a >> b;
    cout << "Daxil edilən ədədlərin cəmi: " << a + b << endl;

    return 0;
}
