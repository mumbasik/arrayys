
#include <iostream>


using namespace std;

void main()
{
    int const size1 = 10;
    int const size2 = 5;
    srand(time(NULL));
    int mas[size1], mas1[size2], mas2[size2];
    int i = 0;
    int j = 0;


    while (i < size1) {
        mas[i] = rand() % 15;
        i++;
    }



    for (int i = 0; i < size1; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;


    while (j < size2) {
        mas1[j] = mas[j];
        mas2[j] = mas[j + size2];
        j++;
    }



    for (int i = 0; i < size2; i++) {
        cout << mas1[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < size2; i++) {
        cout << mas2[i] << " ";
    }
    cout << endl;
    const int sizee = 5;
    int mass[sizee], mass2[sizee], mass3[sizee];
    
    for (int i = 0; i < sizee; i++) {
        mass[i] = rand() % 5;
    }
    for (int i = 0; i < sizee; i++) {
        mass2[i] = rand() % 5;
    }
    for (int i = 0; i < sizee; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < sizee; i++) {
        cout << mass2[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < sizee; i++) {
        mass3[i] = mass[i] + mass2[i];
    }
    for (int i = 0; i < sizee; i++) {
        cout << mass3[i] << " ";
    }
    cout << endl;

    const int week = 7;
    int ar[week];
    for (int i = 0; i < week; i++) {
        cout << "Passed summ: " << "For day: " << i << " ";
        cin >> ar[i];
    }
    int summ = 0;
    for (int i = 0; i < week; i++) {
        summ += ar[i];
    }
    cout << "Overall summш іs equal to: " << summ << endl;
    int averagesale = summ / week;
    cout << "Average summ: " << averagesale << endl;
    int countofdays = 0;
    for (int i = 0; i < week; i++) {
        if (ar[i] > 100) {
            countofdays++;
            cout << "The day which summ was bigger than 100: " << i << endl;
        }
    }
    cout << "Total days when more expensive than 100: " << countofdays;
}



