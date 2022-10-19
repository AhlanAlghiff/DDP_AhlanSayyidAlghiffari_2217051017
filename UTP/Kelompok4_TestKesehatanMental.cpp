#include <iostream>
#include <string>

/*
  PROGRAM KELOMPOK 4 - KELAS C - S1 ILMU KOMPUTER
  ANGGOTA :
  1. AHLAN SAYYID ALGHIFFARI (2217051017)
  2. GHULAM DARIS FAUZAN (2217051044)
  3. TRIO SAKTI ARDIKA (2257051012)
*/

using namespace std;

void quote(){
	system ("Color 0E");
	cout << "==========================================================================================" << endl;
	cout << " \"Untuk sementara biarlah seperti ini, pasti ada saatnya dimana semuanya berjalan lebih baik," << endl;
//	cout << " 		   	          - Monkey D Luffy" << endl;
	cout << "           Everything is gonna be fine at the end, just believe in yourself!\"" << endl;
	cout << "==========================================================================================" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

void profil(){
	system ("Color 0E");
	cout << "=================================================================================" << endl;
	cout << "                                  Profil "<< endl;
	cout << "=================================================================================" << endl;
	cout << " Program ini dibuat untuk memenuhi tugas UTP Mata kuliah Dasar-Dasar Pemrograman" << endl;
	cout << "                            Kelompok 4 Kelas C" << endl;
	cout << "                 S1-Ilmu Komputer - Universitas Lampung " << endl;
	cout << endl;
	cout << endl;
}

void test(string nama){
	string soal[21];
	int jawab[21], hasil[21];

	soal[0] = "Apakah kamu sering merasa sakit kepala?\n";
	soal[1] = "Apakah kamu kehilangan nafsu makan? atau terlalu banyak makan?\n";
	soal[2] = "Apakah kamu sering merasa ingin menyerah?\n";
	soal[3] = "Apakah tidur kamu tidak nyenyak?\n";
	soal[4] = "Apakah kamu mudah takut/marah?\n";
	soal[5] = "Apakah kamu sering berfikir bahwa semuanya hanya akan menjadi lebih buruk?\n";
	soal[6] = "Apakah kamu merasa cemas, tegang, atau khawatir?\n";
	soal[7] = "Apakah kamu merasa sulit berpikir jernih?\n";
	soal[8] = "Apakah kamu kehilangan minat terhadap banyak hal?\n";
	soal[9] = "Apakah kamu sering berfikir bahwa tidak ada yang berjalan sesuai keinginanmu?\n";
	soal[10] = "Apakah kamu lebih sering menangis?\n";
	soal[11] = "Apakah kamu mengalami gangguan pada perut/pencernaanmu?\n";
	soal[12] = "Apakah kamu merasa tidak mampu berperan dalam kehidupan ini?\n";
	soal[13] = "Apakah kamu merasa tidak berdaya akhir-akhir ini?\n";
	soal[14] = "Apakah kamu sulit berkonsentrasi dan tidak bisa bersantai?\n";
	soal[15] = "Apakah aktivitas/tugas sehari-hari kamu terbengkalai?\n";
	soal[16] = "Apakah kamu mengalami kesulitan untuk mengambil keputusan?\n";
	soal[17] = "Apakah kamu mempunyai pikiran untuk menghakhiri hidup?\n";
	soal[18] = "Apa kamu sering memandang diri sendiri negatif?\n";
	soal[19] = "Apakah kamu merasa tidak berharga?\n";
	soal[20] = "Apakah kamu merasa tidak bahagia?\n";


	int total = 0;
	for (int i = 0; i < 21; i++)
	{
		cout << soal[i];
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak\n" << endl;
		cout << "Jawab: ";
		cin >> jawab[i];
		cout << endl;
		system("cls");
	}
	for (int j = 0; j < 21; j++)
	{
		if (jawab[j] == 1)
		{
			hasil[j] = 50;
		}
		else
		{
			hasil[j] = 0;
		}
		total = total + hasil[j];
	}
	system("cls");
	
	if (total >= 850)
	{
		cout << "Mungkin kamu menderita depresi, stres, dan cemas\n";
		cout << "Pasti sulit yaa? :( \n";
		cout << "Semangat selaluu " << nama; 	
		cout << ", kamu harus bisa bangkit, kamu orang hebatt. bighugg <3\n";

		cout << "Jangan lupa pergi ke psikolog untuk konsultasi masalahmu.\n";
	}
	else if (total >= 550)
	{
		cout << "Mungkin kamu menderita depresi\n";
		cout << "Pasti sulit yaa?\n";
		cout << "Semangat " << nama << " kamu orang hebatt, peluk jauhh <3\n";
		cout << "Jangan lupa pergi ke psikolog untuk konsultasikan masalahmu.\n";
	}
	else if (total >= 250)
	{
		cout << "Haii " << nama << " kamu mengalami stress ringan\n";
		cout << "Pergi jalan-jalan bersama sahabat atau keluargamu mungkin bisa meredakan stressmu\n";
		cout << "semangat selaluu menjalani hari-harinya yaa...\n";
	}
	else if (total >= 0)
	{
		cout << nama << " kondisi kesehatan mental kamu cenderung stabil!" << endl;
		cout << "Terus pertahankan yaaa :D" << endl;
	}
	
	else;
	{
		cout << endl;
	}

}

int main(){
	
	string nama;
	int menu, akhir;
	
    system ("Color 0E");
	cout << "Masukkan nama : ";
	getline(cin, nama);
	system("cls");
	cout << "Hai " << nama << "! Selamat datang di" << endl;

	mulai:
	system ("Color 0E");
	cout << "============================\n";
	cout << "          Program           \n";
	cout << "Tes Kondisi Kesehatan Mental\n";
	cout << "============================\n";
	cout << "=      <1> Mulai Test      =\n";
	cout << "=      <2> Profil	   =\n";
	cout << "=      <3> Quotes          =\n";
	cout << "=      <4> Keluar	   =\n";
	cout << "============================\n";
	cout << "Ketik angka : ";
	cin >> menu;
	system("cls");
	
	system ("Color 0F");
	switch (menu){
	case 1:
		test(nama);
		system ("Color 0F");
		cout << "Kembali ke menu awal?" << endl;
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak" << endl;
		cin >> akhir;
		system("cls");
		switch (akhir)
		{
		case 1:
			goto mulai;
		case 2:
			goto selesai;
		default:
			goto mulai;
		}
		break;
	case 2:
		profil();
		cout << "Kembali ke menu awal?" << endl;
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak" << endl;
		cin >> akhir;
		system("cls");
		switch (akhir)
		{
		case 1:
			goto mulai;
		case 2:
			goto selesai;
		default:
			goto mulai;
		}
		break;
	case 3:
		quote();
		cout << "Kembali ke menu awal?" << endl;
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak" << endl;
		cin >> akhir;
		system("cls");
		
		switch (akhir)
		{
		case 1:
			system ("Color 0E");
			goto mulai;
		case 2:
			goto selesai;
		default:
			goto mulai;
		}
		break;
	case 4:
		goto selesai;
		break;
	default:
		goto mulai;
		
	system ("Color 0E");
	selesai:
		system ("Color 0E");
		cout << "Hai " << nama << ", Terimakasih telah menggunakan program ini!" << endl;
		cout << "Semoga bermanfaat dan tetap semangat yaaa!! <3" << endl;
		
		return 0;
	}
}
