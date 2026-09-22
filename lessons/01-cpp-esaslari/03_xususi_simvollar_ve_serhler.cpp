#include <iostream>

using namespace std;

int main() {
    // Təksetirli şərh: Bu qeydi kompilyator oxumur.

    /*
       Çoxsetirli şərh:
       Bura istənilən qədər izahat
       və ya qeyd yaza bilərik.
    */

    // \n - yeni sətirə keçid simvoludur
    cout << "Birinci sətir\nİkinci sətir\nÜçüncü sətir\n\n";

    // \t - tab boşluğu qoyur (cədvəl sütunları üçün çox əlverişlidir)
    cout << "Ad\tSinif\tBal" << endl;
    cout << "Əli\t8A\t95" << endl;
    cout << "Leyla\t8B\t98" << endl;

    // \" - mətn daxilində qoşa dırnaq çap etmək üçündür
    cout << "Müəllim dedi: \"C++ proqramlaşdırma dilinə xoş gəldiniz!\"" << endl;

    return 0;
}
