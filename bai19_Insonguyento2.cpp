// bai19_Insonguyento2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// bai19_insonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "KIEM TRA SO CO PHAI SO NGUYEN TO KHONG! \n";

    int so;
    cout << "Nhap 50: "; cin >> so;
    int dem = 0;

    for (int i = 1; i <= so; i++)
    {
        // neu chia het thi tang den len 1: 50%i==0
        if (so % i == 0)
        {
            dem++;
        }
    }
    cout << "So dem = " << dem << endl;
    if (dem == 2) {
        cout << "so " << so << "la so nguyen to\n";
    }
    else {
        cout << "so " << so << " KHONG PHAI so nguyen to\n";
    }




}