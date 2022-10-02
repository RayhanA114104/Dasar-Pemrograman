#include <iostream>

using namespace std;

int main()
{
    char daftar;

  cout << "Daftar Jurusan (1.Teknik Informatika 2.Sistem Informasi 3.Desain Komunikasi) masukan jurusan anda (1-3): ";
  cin >> daftar;

  switch (daftar) {
  case '1':
    cout << "Jurusan anda adalah Teknik Informatika" << endl;
    break;
  case '2':
    cout << "Jurusan anda adalah Sistem Informasi" << endl;
    break;
  case '3':
    cout << "Jurusan anda adalah Desain Komunikasi" << endl;
    break;
  default:
    cout << "Maaf, format daftar tidak sesuai" << endl;
  }

  char kategori;

  cout << "Kategori Mahasiswa 4.(Semester 1-2) 5.(Semester 3-4) 6.(Semester 5-6) 7.(Semester 7-8) masukan semester anda (4-7): ";
  cin >> kategori;

  switch (kategori) {
  case '4':
    cout << "Anda dalam kategori Freshman Year" << endl;
    break;
  case '5':
    cout << "Anda dalam kategori Sphomore Year" << endl;
    break;
  case '6':
    cout << "Anda dalam kategori Junior Year" << endl;
    break;
  case '7':
    cout << "Anda dalam kategori Senior Year " << endl;
    break;
  default:
    cout << "Maaf, format kategori tidak sesuai" << endl;
  }
    return 0;
}
