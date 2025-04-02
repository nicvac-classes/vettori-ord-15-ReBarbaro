#include <iostream>
#include <vector>
using namespace std;

int main() {
    srand(time(0));   
    
    int n, i, j, t;
    string c;

    cout << "quate sono le automobili?" << endl;
    cin >> n;
    int p[n];
    string nomi[n];

    i = 0;
    while (i < n) {
        cout << "quale è il" << i + 1 << "nome?" << endl;
        cin >> nomi[i];
        p[i] = 1 + rand() % (n + 1);
        i = i + 1;
    }
    i = 0;
    j = 0;
    t = 0;
    while (i < n) {
        j = 0;
        while (j <= n - 2 - i) {
            if (p[j] > p[j + 1]) {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
                c = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = c;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "il" << i + 1 << "nome è" << nomi[i] << "la posizione è" << p[i] << endl;
        i = i + 1;
    }
    
}




