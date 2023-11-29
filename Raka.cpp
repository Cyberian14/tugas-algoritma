#include <iostream>
#include <string>
	using namespace std;
int	main(){
	int tunjangan=1000000;
	string nama_karyawan;	
	int gaji_pokok, pajak, gaji_bersih;
	cout << "nama_karyawan: ";
	cin >> nama_karyawan;
	cout << "gaji_pokok: ";
	cin >> gaji_pokok;
	pajak= 0.1 * (gaji_pokok+tunjangan);
	gaji_bersih= gaji_pokok+tunjangan-pajak;
	cout << nama_karyawan<<endl;
	cout <<"Rp. "<< gaji_bersih;
}