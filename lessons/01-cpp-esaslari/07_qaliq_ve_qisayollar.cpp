#include <iostream>

using namespace std;

int main() {
    // 1. Qalıq operatoru: % (Modulus)
    // Yalnız tam ədədlər (int) üçün keçərlidir.
    int totalItems = 17;
    int boxCapacity = 5;

    int fullBoxes = totalItems / boxCapacity;  // 17 / 5 = 3 qutu
    int remainder = totalItems % boxCapacity;  // 17 % 5 = 2 ədəd qalıq

    cout << "Tam doldurulan qutular: " << fullBoxes << endl;
    cout << "Qutudan kənarda qalanlar: " << remainder << endl;

    // 2. Qısa yazılışlar (əvvəlcə geniş mənasını başa düşürük)
    int score = 50;

    // score = score + 10 ilə eynidir:
    score += 10;
    cout << "10 xal əlavə olundu: " << score << endl;

    // score = score + 1 ilə eynidir:
    score++;
    cout << "1 vahid artırıldı: " << score << endl;

    // score = score - 1 ilə eynidir:
    score--;
    cout << "1 vahid azaldıldı: " << score << endl;

    return 0;
}
