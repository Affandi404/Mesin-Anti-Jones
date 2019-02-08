#include "kepala.h"

int main()
{

    int pil;
	system("color 2F");
	
	printf("\t\t                    _____                    \n");
	printf("\t\t                   |     |                   \n");
	printf("\t\t +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
	printf("\t\t +      SELAMAT DATANG DALAM PROGRAM       + \n");
	printf("\t\t +  M E S I N  A N T I  J O N E S  V.21.33 + \n");
	printf("\t\t +             Programer by :              + \n");
	printf("\t\t +       Muhammad Ilham   [G1B015021]      + \n");
	printf("\t\t +       Rian Affandi     [G1B015033]      + \n");
	printf("\t\t +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n");
	printf("\t\t                   |     |                   \n");
	printf("\t\t                   |     |                   \n");
	printf("\t\t                   |     |                   \n");
	printf("\t\t                   |     |                   \n");
    printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	
  do{
	
    printf("\n\n Pilihlah salah satu dari menu yang ada untuk memulai program \n\n");
    printf("1: Tes Psikologi Kepribadian                                 \n");
    printf("2: Sulap Matematika                                          \n");
    printf("3: Laboratorium Doktor Gila                                  \n");
    printf("4: Seris Gaming Anti Jones                                   \n");
    printf("0: Close                                                     \n");
    printf("Masukan Pilihan Anda: ");
    scanf("%d", &pil);
	
	printf("============================================================================\n\n");
    
    switch(pil){
      case 0:  break;
      case 1:  TPK();break;
      case 2:  SM(); break;
      case 3:  LDG();break;
      case 4:  SGAJ();break;

    }
    if(pil>4){
	  system ("color 0C");
      printf("Pilihan yang anda masukkan tidak ada!\n\n"); 
    }
	
	}while(pil!=0); 
	
	system("cls");
	return 0;
    
}