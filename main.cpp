#include <iostream>
using namespace std;

int enBuyukSayiyiHesapla(int hesaplanacakDizi[]) {
    int enBuyukSayi = hesaplanacakDizi[0];

    for (int i = 0; i < 6; i++) {
        if (hesaplanacakDizi[i] > enBuyukSayi) {
            enBuyukSayi = hesaplanacakDizi[i];
        }
    }

    return enBuyukSayi;
}

int main() {
    int sayilar1[6] = {5, 88, 555, 33, 11, 44};
    int sayilar2[6] = {8, 88, 555, 666, 11, 44};
    int sayilar3[6] = {5, 777, 555, 33, 11, 44};
    int sayilar4[6] = {5, 88, 888, 33, 11, 44};

    int donusDegeri1 = enBuyukSayiyiHesapla(sayilar1);
    int donusDegeri2 = enBuyukSayiyiHesapla(sayilar2);
    int donusDegeri3 = enBuyukSayiyiHesapla(sayilar3);
    int donusDegeri4 = enBuyukSayiyiHesapla(sayilar4);

    cout << "En Buyuk Sayi :" << endl;
    cout << donusDegeri1 << endl;
    cout << donusDegeri2 << endl;
    cout << donusDegeri3 << endl;
    cout << donusDegeri4 << endl;

    return 0;
}
