#include "kepala.h"//menghubungkan ke menu awal (menu.c)
#include "hedtiga.h"//menghubungkan ke submenu3.c

double LDG()
{
    system("color 3B");
	int pilihan;
	
    printf("\n\n");
	printf("               SELAMAT DATANG DI LABORATORIUM                   \n");
	printf("+=============================================================+ \n");
	printf("+ 01101    1001101     01111010   10   11           01101     + \n");
	printf("+ 00  10   01   110    11         11   01          11   01    + \n");
	printf("+ 01   10  110111      11  1011   01   11         000110011   + \n");
	printf("+ 01  01   10 11       01    10   01   00        01       01  + \n");
	printf("+ 1101     11  011  @  01101110   01   1011101  11         00 + \n");
	printf("+=============================================================+ \n");
	printf("\n\n");
	
	
  do{
    //Header
	printf("TERSEDIA FASILITAS : \n");
	printf("1. Penghitung nilai resistor gelang \n");
	printf("2. Penghitung nilai Kapasitor pengganti \n");
	printf("3. Menghitung Standar Deviasi  \n");
	printf("4. Mesin Sleksi Asisten lab \n\n");
	printf("Atau tekan 0 untuk kembali ke menu awal\n");
	
	printf("masukan pilihan anda = "); scanf("%d",&pilihan);
	printf("\n");
    
    switch(pilihan){
      case 0: break;
	  case 1: resistor(); break;
      case 2: kapasitor(); break;
      case 3: stdev(); break;
	  case 4: sleksi(); break;
	  
    }
    if(pilihan>4){
      system ("color 0C");
      printf("Pilihan yang anda masukkan tidak ada!\n\n"); 
    }
	
	}while(pilihan!=0); 	
	system("cls");
	return 0;
    
}//end of main function
