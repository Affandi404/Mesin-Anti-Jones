#include"hedempat.h"

//===========================================submenu4.1================================================
// Deskripsi fungsi

int sum_vokal(int n, char kata[70]){//menghitung huruf voal dalam nama
       int i,vokal = 0;
       char word[70];
       for(i = 0; i < n; i++)
       {
         if((kata[i] == 'a')||(kata[i] == 'i')||(kata[i] == 'u')||(kata[i] == 'e')||(kata[i] == 'o')){
              vokal++;
         }
       }
       return vokal;
}

// Program utama tingkat ketampanan anda
int cantik()
{
	   system ("color 9B");
       char kata[37];
	   int kelamin;
       int i, n = 0, vokal = 0;
	   getchar();
       printf("Tuliskan Nama Anda : "); gets(kata);
	   printf("\n\n");
	   printf("1. Laki-Laki \n");
	   printf("2. Perempuan\n");
	   printf("Jenis kelamin : "); scanf("%d",&kelamin);
       strlwr(kata);
       n = strlen(kata);
       vokal = sum_vokal(n, kata);//memanggil fungsi : int sum_vokal(int n, char kata[70]) di atasnya
	   
	   printf("Hasil Analisis Komputer Menyatakan :\n\n");
	   
       if(kelamin == 1) //proses untuk laki-laki
		{	
			
			if(vokal < 3)
			{
				system ("color 0F");
				printf("       JELEQ      \n");
				printf(" _____      _____ \n");
				printf(" |   |      |   | \n");
				printf(" | X |      | x | \n");
				printf("  ```        ```  \n");
				printf("        #         \n");
				printf("     ,+===+,      \n\n");
				
				printf("  Anda buruk rupa \n");		
			}
			else if(vokal < 6)
			{
				system ("color 3F");
				printf("anda tampan. tingkat ketampanan anda adalah 70 persen\n\n");
				
				printf("  <>>>>>>>>>>>>>>>>>>>>>>>>> \n");
				printf("  <>>>>>>>>>>>>>>>>>>>>>>    \n");
				printf("  <><><><><><><><><>>>	     \n");
				printf("  <| ,--,   ,--, |>>         \n");
				printf(" ( |  O      O   | )         \n");
				printf("  (|      @      |)          \n");
				printf("   `#,   ===   ,#`           \n");
				printf("      `$,   ,$`              \n");
				printf("        |   |                \n");
				printf("  kamu keren banget          \n");
			}
			else
			{
				system ("color 9B");
				printf("\n anda sangat tamapan \n tingkat ketampananan anda 90 persen\n\n");
				
				printf(" {><><><><><><><><><><<<<<   \n");
				printf(" {<><><><><><><><><>>>>>     \n");
				printf(" {yyyyyyyyyyyyyyyyyyy        \n");
				printf("  {~  ,--,   ,--,~~          \n");
				printf("   {{  @      @  }}          \n");
				printf("    | ```  7 ``` |           \n");
				printf("    |     ___    |           \n");
				printf("    `+,        ,+`           \n");
				printf("       `~    ~`              \n");
				printf("         |  |                \n");
				printf("  Kamu Orangnya Ganteng      \n");
				printf(" Dan kereeen bangeeetzzzz    \n");				
			}
		
		}
	
		if(kelamin == 2)//proses untuk perempuan
		{
			if(vokal < 3)
			{
				system ("color 06");
				printf("anda buruk rupa \n\n");
				
				printf("  __________________  \n");
				printf(" |      jelek       | \n");
				printf(" |                  | \n");
				printf(" |    T        @    | \n");
				printf(" |        &         | \n");
				printf(" |     ,-+*+-,      | \n");
				printf(" |    '       '     | \n");
				printf("  ^^^^^^^^^^^^^^^^^^  \n");
				
			}
			else if (vokal < 6)
			{
				system ("color 0B");
				printf("\n Tingkat kecantikan anda adalah 70 persen\n\n");
				
				printf("         @#@           \n");
				printf("       @@@@@@@@        \n");
				printf("    @@@@@@@@@@@@@@     \n");
				printf("   @@@@@@@@@@@@@@@@    \n");
				printf("  @|^^66^^66^^66^^|@   \n");
				printf(" @@|  _         _ |@@  \n");
				printf(" [ |  Q         Q | ]  \n");
				printf("  #|       3      |#   \n");
				printf("   `+,   *****  ,+`    \n");
				printf("      `+,    ,+`       \n");
				printf("         |  |	       \n");
				printf("   Kamu cantik sayang  \n");
				
			}
			else 
			{
				system ("color 1E");
				printf("\n anda sangat cantik \n tingkat kecantikan anda 90 persen \n");
				
		        printf("         ___            \n");
				printf("       ~~~^~~~          \n");
				printf("    ~~~~~~~~~~~~~~      \n");
				printf("  ~~~~~~~~~~~~~~~~~~    \n");
				printf(" ~~~~~~~~~~~~~~~~~~~~~  \n");
				printf(" ~~~```````````````~~~  \n");
				printf("  ~~  _         _  ~~   \n");
				printf("   ~  Q         Q ~     \n");
				printf("  [|       &      |]    \n");
				printf(" $ `+,   ~~~~   ,+` $   \n");
				printf("      `+,    ,+`        \n");
				printf("         |  |           \n");
				printf("  Kamu cantik Jelita    \n");

			}
		
		}
		/*
		pernyataan untuk yang tidak berjenis 
		dan beraneka jenis
		*/		
		if(kelamin > 2)
		{
				printf("Mesin ERROR cin \n");
				printf("Tidak Tersedia untuk mahluk hermaprodit"); 
		}
		
		if(kelamin < 1)
		{
				printf("Mesin ERROR yaw \n");
				printf("Tidak Tersedia untuk mahluk tidak berjenis");
		}
		
	   printf("\n\n========================================================================\n");
	   printf("\n\n\n");
       return(0);
}

//===========================================submenu4.2================================================

int jodoh(void)
{
	system ("color 3F");
	char nama[100];
	char pasangan[100];
	int a , b, c ;
	
	printf("Mari cari tahu tingkat kecocokan anda bersama pasangan \n");
	getchar();
	printf("Tuliskan nama anda = "); gets(nama);
	printf("Tuliskan nama pasangan anda = "); gets(pasangan);
	
	a = 0;//menghitung jumlah huruf nama anda
	while (nama[a] != '\0')
	{
		a = a + 1;
	}
	
	b = 0;//menghitung jumlah huruf nama pasangan anda
	while (pasangan[b] != '\0')
	{
		b = b + 1;
	}
	
	c = a - b;//mencari jumlah selisih dari karakter nama anda dan pasangan anda.
	// menampilkan hasil jika nilai c diperoleh(---,----)
	if(c > 0){ 
		system ("color 0A");
		printf(" Anda jodoh\n"); 
		printf("Tingkat kecocokan anda adalah 70 persen :) \n\n"); 
		printf(",+='=+,   ,+='=+,\n");
		printf("'+-+-=-+,+-+-+-+'\n");
		printf("  '+_+-+-+-+_+'  \n");
		printf("     '*_+_*'     \n");
		printf("        *        \n");
		}
	else if(c < 0 ){
		system ("color 0C");
		printf("Sepertinya dia bukan orang yang tepat untukmu :( \n");
		printf("Tingkat kecocokan anda adalah 10 persen \n\n");
		printf(",+='=+,  |   | ,+='=+,	\n");
		printf("'+-+-=-+,| L |+-+-+-+'	\n");
		printf("  '+_+-+ | D |-+-+_+'	\n");
		printf("     '*_ | R |+_*'  	\n");
		printf("        *|   |*         \n");	
	}
	else {
		system ("color 0D");
		printf("Hubungan anda sempurna bersamanya \n");
		printf("Tingkat kecocokan anda adalah 90 persen :D \n\n");
		printf(",+='=+,   ,+='=+,\n");
		printf("'+-+-=-+,+-+-+-+'\n");
		printf("  '+_+JODOH+_+'  \n");
		printf("     '*_+_*'     \n");
		printf("        *        \n");
	}
	
	printf("\n\n========================================================================\n");
	printf("\n\n\n");
	return 0;
}

//===========================================submenu4.3================================================

char namaL[100];
char namaP[100];
char namabl[15];
char tempnama[100];
int tgll, bll, thl, tglp, blp, thp;
int betul;
char enteri[1];
char cobalg='y';


//====================== PROCEDURE CEK KALENDER ======================
void klender(int hari, int bulan, int tahun){
//=============== PROCEDURE CETAK KESALAHAN KALENDER =================
	void cetaksalah(char nama[100]){
		if (hari<10 && bulan<10)
			printf("Data tanggal lahir 0%d-0%d-%d salah. Silahkan cek kalender\n", hari, bulan, tahun);
		else if(hari<10 && bulan >=10)
			printf("Data tanggal lahir 0%d-%d-%d salah. Silahkan cek  kalender\n", hari, bulan, tahun);
		else if(hari>=10 && bulan<10)
			printf("Data tanggal lahir %d-0%d-%d salah. Silahkan cek kalender\n", hari, bulan, tahun);
		else
			printf("Data tanggal lahir %d-%d-%d salah. Silahkan cek kalender\n", hari, bulan, tahun);
		
		printf("\nMasukkan ulang tanggal lahir dari %s \n", nama);
		betul=1;
	}
	
	if(bulan==1 || bulan==3 || bulan==5 || bulan==7 || bulan==8 || bulan==10 || bulan==12){
		if(hari<=0 || hari>31)
			cetaksalah(tempnama);
		else
			betul=2;	
	}else if(bulan==4 || bulan==6 || bulan==9 || bulan==11){
		if(hari<=0 || hari>30)
			cetaksalah(tempnama);
		else
			betul=2;		
	}else if (bulan==2 && tahun%4==0){
		if(hari<=0 || hari>29)
			cetaksalah(tempnama);
		else
			betul=2;
	}else if(bulan==2 && tahun%4!=0){
		if(hari<=0 || hari>28)
			cetaksalah(tempnama);
		else
			betul=2;
	}else
		cetaksalah(tempnama);
}

//===================== PROCEDURE INPUT LAHIR COWOK =====================
void lahircowok(){
	printf("Tanggal Lahir : "); scanf("%d", &tgll);
	printf("Bulan Lahir   : "); scanf("%d", &bll);
	printf("Tahun Lahir   : "); scanf("%d", &thl);
	klender(tgll, bll, thl);
}

//==================== PROCEDURE INPUT LAHIR CEWEK ==================
void lahircewek(){
	printf("Tanggal Lahir : "); scanf("%d", &tglp);
	printf("Bulan Lahir   : "); scanf("%d", &blp);
	printf("Tahun Lahir   : "); scanf("%d", &thp);
	klender(tglp, blp, thp);
}

//======================== PROCEDURE NAMA BULAN ====================================
void nama_bulan(int i){
	if (i==1)
		strcpy(namabl, "Januari");
	else if(i==2)
		strcpy(namabl, "Februari");
	else if(i==3)
		strcpy(namabl, "Maret");
	else if(i==4)
		strcpy(namabl, "April");
	else if(i==5)
		strcpy(namabl, "Mei");
	else if(i==6)
		strcpy(namabl, "Juni");
	else if(i==7)
		strcpy(namabl, "Juli");
	else if(i==8)
		strcpy(namabl, "Agustus");
	else if(i==9)
		strcpy(namabl, "September");
	else if(i==10)
		strcpy(namabl, "Oktober");
	else if(i==11)
		strcpy(namabl, "November");
	else
		strcpy(namabl, "Desember");
}

//======================== PROCEDURE CETAK INFO ============================
void cetak_info(char namaorang[100], int tanggal, int bulan, int tahun, char jeniskelamin[10]){
	nama_bulan(bulan);
	printf("\n");
	printf("+-----------------------------------------+\n");
	printf("|              BIODATA %s              |\n", jeniskelamin);
	printf("+-----------------------------------------+\n");
	printf("  Nama           : %s\n", namaorang);
	printf("  Tanggal Lahir  : %d %s %d\n", tanggal, namabl, tahun);
	printf("-------------------------------------------\n");
}

//======================= PROCEDURE MULAI RAMAL ===========================
void ramal(){
	int tglr, blr, thr;
	tglr=tgll+tglp;
	blr=bll+blp;
	thr=thl+26;
	
	if(blr>12)
		blr=blr-12;
	
	if(blr==1 || blr==3 || blr==5 || blr==7 || blr==8 || blr==10 || blr==12){
		if(tglr>31)
			tglr=tglr-31;
		else
			tglr=tglr;
	}else if(blr==4 || blr==6 || blr==9 || blr==11){
		if(tglr>30)
			tglr=tglr-30;
		else
			tglr=tglr;
	}else if(blr==2 && thr%4==0){
		if(tglr>29)
			tglr=tglr-29;
		else
			tglr=tglr;
	}else if(blr==2 && thr%4!=0){
		if(tglr>28)
			tglr=tglr-28;
		else
			tglr=tglr;
	}	
	
	nama_bulan(blr);
	
	printf("\n+------------------------------------------------------------------------+\n");
	printf("   %s dan %s diramalkan  \n", namaL, namaP );
	printf("   akan menikah pada tanggal %d %s %d \n",tglr, namabl, thr);
	printf("+------------------------------------------------------------------------+\n");
}

//======================== PROCEDURE UTAMA =========================================
int proses(){	
	system ("color 1B");
	while(cobalg=='y' || cobalg=='Y'){
		printf("\n");
		printf("INPUT INFO PASANGAN PRIA\n");
		printf("------------------------");
		printf("\n");
		getchar();
		printf("Nama          : "); gets(namaL);
		strcpy(tempnama, namaL);
		lahircowok();
		
		while(betul==1){
			lahircowok();
		}
		cetak_info(namaL, tgll, bll, thl, "COWOK");
		printf("\n");
		
		printf("INPUT INFO PASANGAN WANITA\n");
		printf("--------------------------");
		printf("\n");
		getchar();
		printf("Nama          : "); gets(namaP);
		strcpy(tempnama, namaP);
		lahircewek();
		while(betul==1){
			lahircewek();
		}
		cetak_info(namaP, tglp, blp, thp, "CEWEK");
		
		printf("\n");
		getchar();
		printf("Tampilkan Ramalan Pernikahan [Enter]...."); gets(enteri);
		ramal();
		printf("\nCoba lagi? [y/t]: "); scanf("%c", &cobalg);
		
	}
	
	printf("\n\n========================================================================\n");
	printf("\n Terimaksih telah menggunakan program ini\n\n");
	
	return 0;
}