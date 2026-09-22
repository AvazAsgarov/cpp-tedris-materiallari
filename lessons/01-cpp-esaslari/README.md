# Mövzu 01: C++ Proqramlaşdırma Dilinin Əsasları

Bu dərsdə C++ dilində ilk proqramın yazılışı, ekrana məlumat çıxarılması, dəyişənlər, istifadəçidən məlumatın qəbul edilməsi və əsas hesab əməliyyatları ilə tanış olacağıq.

---

## 1. İlk C++ Proqramının Quruluşu

Ən sadə C++ proqramı aşağıdakı kimidir:

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Salam, Dunya!" << endl;
    return 0;
}
```

Bu proqramın əsas hissələrini anlayaq:

- `#include <iostream>` — Giriş və çıxış əməliyyatlarını (məsələn, ekrana yazı çıxarmaq üçün `cout`) təmin edən kitabxananı koda qoşur.
- `using namespace std;` — Standart kitabxanadakı adları rahat şəkildə işlətməyə imkan verir.
- `int main() { ... }` — Proqramın icrasının başladığı əsas funksiyadır. Bütün əmrlər `{` və `}` fiqurlu mötərizələrinin daxilinə yazılır.
- `cout << "Salam, Dunya!" << endl;` — Mətni ekrana çıxarır və `endl` vasitəsilə yeni sətrə keçir.
- `;` (nöqtə-vergül) — C++ dilində hər bir tamamlanmış əmrin sonunda mütləq nöqtə-vergül qoyulmalıdır.
- `return 0;` — Proqramın uğurla başa çatdığını bildirir.

Fayl: [`01_salam.cpp`](./01_salam.cpp)

---

## 2. Ekrana Məlumat Çıxarılması (`cout`)

`cout` (Console Output) vasitəsilə ekrana mətn, ədəd və ya riyazi ifadələrin nəticəsini çıxara bilərik:

```cpp
cout << "5 + 3" << endl; // Dırnaq içində olduqda mətn kimi çıxır: 5 + 3
cout << 5 + 3 << endl;   // Dırnaqsız yazıldıqda hesablanır: 8
```

Birdən çox məlumatı ardıcıl çıxarmaq üçün `<<` operatorunu zəncirvari şəkildə bağlaya bilərik:

```cpp
cout << "Düzbucaqlının sahəsi: " << 6 * 4 << " kv. metr" << endl;
```

Fayl: [`02_metn_ve_hesablama.cpp`](./02_metn_ve_hesablama.cpp)

---

## 3. Xüsusi Simvollar və Şərhlər

### Xüsusi Simvollar (Escape Sequences)
- `\n` — Yeni sətrə keçid edir (mətndaxili keçidlər üçün əlverişlidir).
- `\t` — Bir tab boşluğu qoyur (cədvəl şəklində sütunlar qurmaq üçün istifadə olunur).
- `\"` — Mətn içərisində dırnaq işarəsinin özünü çap etmək üçündür.

```cpp
cout << "Ad\tSinif\n";
cout << "Əli\t8A\n";
```

### Şərhlər (Comments)
Şərhlər proqramçı üçün qeydlərdir və kompilyator tərəfindən nəzərə alınmır:

```cpp
// Bu təksetirli şərhdir.

/*
   Bu isə
   çoxsetirli şərhdir.
*/
```

Fayl: [`03_xususi_simvollar_ve_serhler.cpp`](./03_xususi_simvollar_ve_serhler.cpp)

---

## 4. Dəyişənlər və Əsas Məlumat Tipləri

Dəyişən — proqram işləyən zaman məlumatları yaddaşda saxlamaq üçün ayrılmış "yaddaş qutusudur".

Hər bir qutunun **adı**, **tipi** və **qiyməti** olur. Başlanğıc üçün ən çox istifadə olunan 3 tip:
1. `int` — Tam ədədlər üçün (`-5`, `0`, `14`, `2026`).
2. `double` — Kəsr / onluq ədədlər üçün (`3.14`, `9.75`, `0.5`).
3. `string` — Mətnlər üçün (`"Ayan"`, `"İnformatika"`).

### Elan, Mənimsətmə və İnisializasiya
- **Elan (Declaration):** Yaddaşda yer ayırırıq:
  ```cpp
  int age;
  ```
- **Mənimsətmə (Assignment):** Qutunun içinə qiymət qoyuruq:
  ```cpp
  age = 14;
  ```
- **İnisializasiya (Initialization):** Elan edərkən dərhal ilkin qiymət veririk:
  ```cpp
  int age = 14;
  double price = 4.50;
  string name = "Murad";
  ```

> Dəyişən adlarında ingilis dilində mənalı sözlərdən (`age`, `price`, `total`, `studentName`) istifadə etmək məsləhətdir.

Fayl: [`04_deyisenler_ve_tipler.cpp`](./04_deyisenler_ve_tipler.cpp)

---

## 5. Klaviaturadan Məlumat Daxiletmə (`cin`)

İstifadəçidən məlumat almaq üçün `cin` (Console Input) və `>>` axın operatorundan istifadə olunur.

Oxların istiqamətinə diqqət yetirin:
- `cout <<` — məlumatı ekrana göndərir.
- `cin >>` — məlumatı klaviaturadan alıb dəyişənə yazır.

```cpp
int age;

cout << "Yaşınızı daxil edin: "; // İstifadəçiyə sual veririk
cin >> age;                      // Qiyməti daxil edirik

cout << "Sizin " << age << " yaşınız var." << endl;
```

Fayl: [`05_daxiletme_cin.cpp`](./05_daxiletme_cin.cpp)

---

## 6. Hesab Əməliyyatları və Bölmə Qaydası

C++ dilində təməl hesab operatorları:
- `+` — Toplama
- `-` — Çıxma
- `*` — Vurma
- `/` — Bölmə

### Ən Vacib Məqam: Tam Bölmə
Əgər hər iki tərəf tam ədəddirsə (`int`), bölmə əməliyyatı kəsr hissəni atır:
```cpp
cout << 7 / 2;     // Cavab: 3 (3.5 yox!)
cout << 7.0 / 2.0; // Cavab: 3.5 (həqiqi kəsr bölmə)
```

Fayl: [`06_hesab_emeliyyatlari.cpp`](./06_hesab_emeliyyatlari.cpp)

---

## 7. Qalıq Operatoru (`%`) və Qısa Yazılışlar

### Qalıq Operatoru (`%`)
Bir ədədi digərinə böldükdə qalan qalığı tapır. Yalnız tam ədədlər (`int`) üçün işləyir:
```cpp
cout << 17 % 5; // Cavab: 2 (çünki 17-nin içində 3 dənə 5 var, qalıq 2 qalır)
cout << 10 % 2; // Cavab: 0 (qalıqsız bölünür)
```

### Qısa Yazılışlar
Dəyişənin qiymətini artırmaq və ya azaltmaq üçün qısa formalardan istifadə olunur:
- `x++` $\rightarrow$ `x = x + 1` ilə eynidir (1 vahid artırır)
- `x--` $\rightarrow$ `x = x - 1` ilə eynidir (1 vahid azaldır)
- `x += 5` $\rightarrow$ `x = x + 5` ilə eynidir
- `x -= 3` $\rightarrow$ `x = x - 3` ilə eynidir

Fayl: [`07_qaliq_ve_qisayollar.cpp`](./07_qaliq_ve_qisayollar.cpp)

---

## 8. Bütöv Nümunə: Dəftərxana Hesablayıcısı

Öyrəndiyimiz bütün anlayışları (giriş, hesablama, çıxış) birləşdirən kiçik bir proqram:

```cpp
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
```

Fayl: [`08_sade_kalkulyator.cpp`](./08_sade_kalkulyator.cpp)

---

## ✏️ Dərsdaxili Təcrübə Tapşırıqları

### A. Nəticəni Proqnozlaşdırın
Proqramı işə salmadan konsolda nə çıxacağını tapın:
```cpp
int a = 19;
int b = 4;
cout << a / b << endl;
cout << a % b << endl;
```

### B. Boşluğu Doldurun
İstifadəçidən ədədi oxumaq üçün nöqtələrin yerinə nə yazılmalıdır?
```cpp
int score;
cout << "Balınızı daxil edin: ";
...... >> score;
```

### C. Xətanı Tapın
Aşağıdakı kodda kompilyasiya xətası yaradan səbəbi aşkarlayın:
```cpp
int count = 5

cout << count;
```

### D. Müstəqil Kodlama
1. `task01.cpp` faylı yaradın: İstifadəçidən düzbucaqlının uzunluğunu və enini alaraq onun sahəsini və perimetrini hesablayıb ekrana çıxarın.
2. `task02.cpp` faylı yaradın: İstifadəçidən ümumi dəqiqə sayını (məsələn, `135`) qəbul edərək, onun neçə saat və neçə dəqiqə olduğunu tam bölmə (`/`) və qalıq (`%`) ilə tapıb çap edin.
