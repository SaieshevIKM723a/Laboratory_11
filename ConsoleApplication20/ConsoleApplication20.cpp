// Ввести значення 2-х цілих змінних а і b. Направити два покажчика на ці змінні. За допомогою покажчика збільшити значення змінної а в 2 рази якщо а>b, інакше – b зменшити в 2 рази
#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter sence for a: ";
    cin >> a;
    cout << "Enter sense for b: ";
    cin >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    if (*ptr_a > *ptr_b) {
        *ptr_a *= 2;
    }
    else {
        *ptr_b /= 2;
    }

    cout << "Sense a: " << a << endl;
    cout << "Sense b: " << b << endl;

    return 0;
}
// Описати 2 покажчика на дійсний тип. Виділити для них динамічну пам'ять. Увести значення у виділену пам'ять з клавіатури. Збільшити в 2 рази першу змінну
#include <iostream>

using namespace std;

int main() {
    double* ptr1, * ptr2;


    ptr1 = new double;
    ptr2 = new double;


    cout << "Enter sense for first index: ";
    cin >> *ptr1;


    cout << "Enter sense for second index: ";
    cin >> *ptr2;

    *ptr1 *= 2;

    cout << "Sense of first index after: " << *ptr1 << endl;
    cout << "Sense of second index: " << *ptr2 << endl;

    delete ptr1;
    delete ptr2;

    return 0;
}
//Створити динамічні масиви, використовуючи покажчики. Дано 2 масиви х[n] і у[m]. Скільки разів зустрічається другий елемент першого масиву х[n] у другому масиві у[m]?
#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter size of second array: ";
    cin >> m;

    int* x = new int[n];
    int* y = new int[m];

    cout << "Enter elements of first array(x[n]): ";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter elements of second array(y[m]): ";
    for (int i = 0; i < m; i++) {
        cin >> y[i];
    }

    int count = 0;
    int second_element = x[1]; 
    for (int i = 0; i < m; i++) {
        if (y[i] == second_element) {
            count++;
        }
    }
    cout << "Second elements of first array duplicates in second array " << count << " times." << endl;

    return 0;
}

