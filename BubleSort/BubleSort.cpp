#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20 
int n; // Deklarasi variabel global n untuk menyimpan banyak elemen array

void input() { // Prosedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; // output ke layar
        cin >> n; // input dari pengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break; // keluar dari loop
        else {  // jika n lebih dari 20
            cout << "nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar

        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; 1 < n; i++) { //looping dengan i dimulai dari 0 hinnga n-1
        cout << "Data ke-" << (i + 1) << ":"; // ouput ke layar
        cin >> arr[i]; // output ke pengguna
    }
}
void bubblesortArray() { //prosedur untuk mengurutkan array dengna metode bubble sort
    int pass = 1; // step 1

    do {
        for (int j =0; j<= n -1 - pass; j++){ // step 2
            if (arr[j > arr[j + 1]]) { // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; // step 4

        cout << "nPass " << pass - 1 << ": "; // number of passs
        for (int k = 0; k < n; k++) {
            cout << arr[k] << "";
        }
        cout << endl;
    } while (pass <= n - 1);
}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // menampilkan array
        if (j < n - 1) {
            cout << " ===> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << " Jumlah Pass = " << n - 1 << endl; // menampilkan jumlah pass
    cout << endl;
    cout << endl;
}

int main()
{
    input();

    bubblesortArray();
    display();

    system("pause");
    return 0;
}