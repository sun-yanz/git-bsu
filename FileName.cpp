#include <iostream>
#include <vector>
using namespace std;
int main() {
    int i, n, plus = 0;
    
    cin >> n;
    vector <int> a(n);
    //����� �������
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    //���������� ����� ��� ������
    for (i = 0; i < n; i++) {
        if (a[i] > 0 && a[i - 1] > 0) {
            
 

            for (int j = 0; j < n; j++) { //j � ������� � ������ ������ ���� ����������
                int min = j; //����� ������������ ��������
                for (int i = j; i < n; i++) { //���� ������ � ��� �� ������������� �����
                    if ((a[i] < a[min]) && (a[i] > 0 && a[i - 1] > 0) or (a[i] < 0 && a[i - 1] < 0)) {
                        min = i;
                    }
                }
                //����� �������� ��������� a[j] � a[num_min]
                int temp;
                temp = a[j];
                a[j] = a[min];
                a[min] = temp;
            }
            
            
                cout << a[i - 1] << " " << a[i] << " ";
            
        } else  if (a[i] < 0 && a[i - 1] < 0) {



            for (int j = 0; j < n; j++) { //j � ������� � ������ ������ ���� ����������
                int min = j; //����� ������������ ��������
                for (int i = j; i < n; i++) { //���� ������ � ��� �� ������������� �����
                    if ((a[i] < a[min]) &&  a[i] < 0 && a[i - 1] < 0) {
                        min = i;
                    }
                }
                //����� �������� ��������� a[j] � a[num_min]
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

