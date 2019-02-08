#include "kepala.h"


float SM()
{
	system("color 9E");//mengganti warna windows
	long int x,y;
	
	
	printf("|******************************************| \n");
	printf("|          Selamat Datang Dalam Seri       | \n");
	printf("|               SULAP MATEMATIKA           | \n");
	printf("|******************************************| \n\n");
	printf("Dalam seri ini Komputer akan mencoba membaca pikiran anda \n");
	printf("Untuk memulai permainan ini ikutilah petunjuk berikut , \n dan jika sudah selesai tekan enter \n\n");
	

	printf("petunjuk : \n");
	getchar();//agar lanjut saat ditekan enter
	printf(" 1. siapkan kalkulator sebelum memulai \n");
	getchar();
	printf(" 2. sekarang coba pikirkan tanggal lahir anda \n");
	getchar();
	printf(" 3. kalikan tanggal lahir tersebut dengan 100 \n ");
	getchar();
	printf(" 4. sekarang coba anda jumlahkan angka tersebut dengan bulan kelahiran anda \n");
	getchar();
	printf(" 5. lalu hasilnya coba anda kalikan 2 \n");
	getchar();
	printf(" 6. sekarang hasil no 5 anda jumlahkan dengan 2 \n");
	getchar();
	printf(" 7. jika sudah sekarang tolong kalikan dengan 5 \n");
	getchar();
	printf(" 8. lalu hasilnya jumlahkan 1 \n");
	getchar();
	printf(" 9. jika suda selesai coba kalikan 10 dan hasilya jumlahkan 1 \n");
	getchar();
	printf(" 10. hasil dari proses no 9 coba anda jumlahkan dengan 2 angka terakhir tahun kelahiran anda \n");
	getchar();
	printf("\t jika sudah masukan hasilnya di sini = "); scanf("%ld",&x);
	y = x -111;
	printf(" pasti anda lahir pada tanggal, bulan dan tahun \n");
	printf(" dengan urutan angka berikut = %ld ",y );
	
	printf("\n\n");
	printf("========================================================================================");
	printf("\n\n\n");
	
	return 0;
}