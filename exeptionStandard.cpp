#include <iostream>
#include <exception>
// untuk obyek exeption yang akan di gunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try {
        array<int, 3> data = {1, 2, 3 };
        // pesan array interger 3 elemen
        cout<<data.at(5)<<endl;
        // memanggil array elemen 5
    }
    catch (exception& e) {
        // penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
}