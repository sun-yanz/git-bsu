#include <iostream>
#include <vector>
using namespace std;
int main() {
    int i, n, plus = 0;
    
    cin >> n;
    vector <int> a(n);
    //вывод массива
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    //нахождение чисел для вывода
    for (i = 0; i < n; i++) {
        if (a[i] > 0 && a[i - 1] > 0) {
            
 

            for (int j = 0; j < n; j++) { //j – начиная с какого номера ищем наименьший
                int min = j; //номер минимального элемента
                for (int i = j; i < n; i++) { //ищем только в еще не упорядоченной части
                    if ((a[i] < a[min]) && (a[i] > 0 && a[i - 1] > 0) or (a[i] < 0 && a[i - 1] < 0)) {
                        min = i;
                    }
                }
                //обмен значений элементов a[j] и a[num_min]
                int temp;
                temp = a[j];
                a[j] = a[min];
                a[min] = temp;
            }
            
            
                cout << a[i - 1] << " " << a[i] << " ";
            
        } else  if (a[i] < 0 && a[i - 1] < 0) {



            for (int j = 0; j < n; j++) { //j – начиная с какого номера ищем наименьший
                int min = j; //номер минимального элемента
                for (int i = j; i < n; i++) { //ищем только в еще не упорядоченной части
                    if ((a[i] < a[min]) &&  a[i] < 0 && a[i - 1] < 0) {
                        min = i;
                    }
                }
                //обмен значений элементов a[j] и a[num_min]
                int temp;
                temp = a[j];
                a[j] = a[min];
                a[min] = temp;
            }


            cout << a[i - 1] << " " << a[i] << " ";

        }
    }
    
    return 0;
}

