#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Paket {
    long long x;
    int Id;
};

int main() {
    int n;
    cin >> n;

    vector<Paket> daftarPaket(n);

    for (int i = 0; i < n; i++) {
        cin >> daftarPaket[i].x;
    }
    for (int i = 0; i < n; i++) {
        cin >> daftarPaket[i].Id;
    }

    sort(daftarPaket.begin(), daftarPaket.end(), [](const Paket& a, const Paket& b) {
        return a.x < b.x;
    });

    map<int, bool> IdDiambil;
    int jumlahPaket = 0;

    for (int i = 0; i < n; i++) {
        int IdTemp = daftarPaket[i].Id;
        
        if (IdDiambil.find(IdTemp) == IdDiambil.end()) {
            IdDiambil[IdTemp] = true;
            jumlahPaket++;
        }
    }

    cout << jumlahPaket << endl;
    return 0;
}