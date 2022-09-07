/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/
#include <iostream>

using namespace std;

int main() {

  int C;	// Mendeklarsikan variabel C

  // Mengisikan nilai ke dalam variabel C
  // dengan nilai 5
  C = 5;

  // Melakukan pre-increment
  cout<<"Nilai C awal	: "<<C<<endl;
  cout<<"Nilai ++C	: "<<++C<<endl;
  cout<<"Nilai C akhir	: "<<C<<endl;
  cout<<'\n';

  // Mengubah nilai yang terdapat dalam variabel C 
  // dengan nilai 10
  C = 10;

  // Melakukan post-increment
  cout<<"Nilai C awal	: "<<C<<endl;
  cout<<"Nilai C++	: "<<C--<<endl;
  cout<<"Nilai C akhir	: "<<C<<endl;

  return 0;
}
