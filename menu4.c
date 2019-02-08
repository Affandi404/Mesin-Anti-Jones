#include "kepala.h"//menghubungkan ke menu.c
#include "hedempat.h"//menghubungkan ke submenu4.c

int SGAJ()
{
	
	system("color 5D");
    int pilihan;
	
	printf("========================================== \n");
	printf("|         AYO BERMAIN DALAM SERIS        | \n");
	printf("| G A M E  A N T I   J O N E S   V 21.33 | \n");
	printf("========================================== \n");
	
	printf("\n");
	
	
  do{
    //Header
	printf("Menu Game: \n");
	printf("1. Righting Wajah berdasarkan nama\n");
	printf("2. Kalkulator Cinta dengan si dia \n");
	printf("3. Ramalan hari dimana anda akan menikah \n");
	printf(" Atau tekan 0 untuk kembali ke menu awal \n\n");
	
	printf("masukan pilihan mu = "); scanf("%d",&pilihan);
	printf("\n");
    
    switch(pilihan){
      case 0: break;
	  case 1: cantik(); break;
      case 2: jodoh(); break;
      case 3: proses(); break;
	  /*dalam case ditulis fungsi utama program*/
    }
    if(pilihan > 3){
	  system ("color 0C");
      printf("Pilihan yang anda masukkan tidak ada!\n\n"); 
    }
	
	}while(pilihan !=0); 	
	system("cls");
	return 0;
    
}//end of main function
