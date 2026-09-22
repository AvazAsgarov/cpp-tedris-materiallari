#include <iostream>

using namespace std;

int main() {
    int a = 14;
    int b = 4;

    cout << "Toplama (a + b): " << a + b << endl;
    cout << "Çıxma   (a - b): " << a - b << endl;
    cout << "Vurma   (a * b): " << a * b << endl;

    // Tam bölmə: C++ hər iki ədəd tam olduqda kəsr hissəni atır!
    cout << "Tam bölmə (14 / 4): " << a / b << " (kəsr hissə atılır, nəticə 3 olur)" << endl;

    // Kəsr bölmə üçün tərəflərdən ən azı biri double olmalıdır:
    double x = 14.0;
    double y = 4.0;
    cout << "Kəsr bölmə (14.0 / 4.0): " << x / y << endl;

    return 0;
}
