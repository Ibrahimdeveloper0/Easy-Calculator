#include <iostream>
using namespace std;

int main(){
        int secim;
        float sayi1, sayi2;
        cout << "Kalkulyator" << endl;
        cout << "1.Toplama\n";
        cout << "2.Cikarma\n";
        cout << "3.Çarpma\n";
        cout << "4.Bölme\n";
        cout << "Emeliyyat növünü seçin:  ";
        cin >> secim;
        
        cout << "Birinci rakami daxil edin: ";
        cin >> sayi1;
        cout << "İkinci rakami daxil edin: ";
        cin >> sayi2;
        
        if(secim == 1){
            cout << "Cevab: " << sayi1 + sayi2;
        } else if(secim == 2) {
            cout << "Cevab: " << sayi1 - sayi2;
        } else if(secim == 3) {
            cout << "Cevab: " << sayi1 * sayi2;
        } else if(secim == 4) {
            if(sayi2 != 0) { 
                cout << "Cevab: " << sayi1 / sayi2;
            } else {
                cout << "Hata! Sıfıra bölme hatası!";
            }
        } else {
            cout << "Geçersiz işlem";
        }

    return 0;
}
/