#include "kepala.h"

void TPK(void)
{
	system("color 5E");//mengganti warna windows
	char nama[100];
	char k[100]= " ";//variabel yang menampung kalimat dalam "case"
	char l[100]= " ";
	char m[100]= " ";
	char n[100]= " ";
	char o[100]= " ";
	char p[100]= " ";
	char q[100]= " ";
	char r[100]= " ";
	char s[100]= " ";
	char t[100]= " ";
	char a, b, c, d, e, h, i, j;
	int f, g, ulang;
	
	printf("                 Anda memilih seri tes psikologi kepribadian                 \n");
	printf("       Jawablah pertanyaan berikut sesuai dengan apa yang anda pikirkan      \n");
	printf("============================================================================ \n");
	printf("\n");
    getchar();
	printf("Tuliskan Nama Panggilan anda: ");
	gets(nama);
	
	printf("\n\n");
	
	printf("ayo %s jawab pertanyaan berikut yaaahh :) \n\n ", nama);

NEW:
	printf("1. anda pergi ke suatu hutan, di hutan anda melihat sebuah gubuk \n ");
	printf("   dan di gubuk tersebut anda melihat sebuah pintu. pintu tersebut \n");
	printf("\n  a. terbuka");
	printf("\n  b. tertutup");

	printf("\n jawab = "); scanf(" %c",&a);

	switch (a) 
		{
		case 'a' :
			printf(" anda adalah tipekal orang yang terbuka \n",k);
			goto dua;//mengarahkan ke "dua:"
			break;
		case 'b' :
			printf(" anda adalah tipekal orang yang tertutup \n",k);
			goto dua;
			break;
		default ://pernyataan untuk input selain a dan b
			printf("tidak ada dalam pilihan brow \n",k);
			goto akhir;
			break;
		}
	
dua:	
	printf("\n");
	
	printf("2. lalu anda masuk ke gubuk tersebut, dan melihat sebuah meja.\n");
	printf("   bagaimana apa bentuk meja tersebut ? \n");
	printf("\n  a. bulat");
	printf("\n  b. kotak");
	printf("\n  c. segitiga");
	getchar();
	printf("\n jawab = "); scanf("%c",&b);

	switch (b) 
		{
		case 'a' :
			printf(" anda berteman dengan siapa saja \n",l);
			goto tiga;
			break;
		case 'b' :
			printf(" anda slektif dalam berteman \n",l);
			goto tiga;
			break;
		case 'c' :
			printf(" sangat pemilih dalam berteman \n",l);
			goto tiga;
			break;
		default :
			printf(" tidak ada dalam pilihan brow \n",l);
			goto akhir;
			break;
		}
	
tiga:	
	printf("\n");
	
	printf("3. lalu anda melihat sebuah pot yang sedang tergantung di sebuah ruangan.\n");
	printf("   terbuat dari apa pot tersebut ?");
	printf("\n  a. guci keramik atau tanah liat");
	printf("\n  b. plasitik");
	printf("\n  c. besi");
	getchar();
	printf("\n jawab = "); scanf("%c",&c);
	
	switch (c) 
		{
		case 'a' :
			printf(" rendah hati dan berperasaan \n",m);
			goto empat;
			break;
		case 'b' :
			printf(" fleksibel \n",m);
			goto empat;
			break;
		case 'c' :
			printf("keras kepala dan egois \n",m);
			goto empat;
			break;
		default :
			printf("tidak ada dalam pilihan brow \n",m);
			goto akhir;
			break;
		}
	
empat:	
	printf("\n");
	
	printf("4. ternyata pot tersebut terlihat basah.\n");
	printf("   berapa banyakkah air di dalamnya ?");
	printf("\n  a. penuh");
	printf("\n  b. setengah");
	printf("\n  c. kosong");
	getchar();
	printf("\n jawab = "); scanf("%c",&d);
	
	switch (d) 
		{
		case 'a' :
			printf(" cita-cita anda sudah tercapai \n",n);
			goto lima;
			break;
		case 'b' :
			printf(" cita-cita anda baru setengah tercapai \n",n);
			goto lima;
			break;
		case 'c' :
			printf(" cita-cita anda belum tercapai \n",n);
			goto lima;
			break;
		default :
			printf(" tidak ada dalam pilihan brow \n",n);
			goto akhir;
			break;
		}
	
lima:	
	printf("\n");
	
	printf("5. lalu anda keluar dari gubuk tersebut \n");
	printf("   saat berjalan melihat sejumlah kunci. \n");
	printf("   terbuat dari apakah kunci tersebut \n");
	printf("\n  a. Emas");
	printf("\n  b. Perak");
	printf("\n  c. Besi");
	getchar();
	printf("\n jawab = "); scanf("%c",&e);
	
	switch (e) 
		{
		case 'a' :
			printf(" berjiwa besar penolong dan ramah \n",o);
			goto enam;
			break;
		case 'b' :
			printf(" percaya diri , kreatif \n",o);
			goto enam;
			break;
		case 'c' :
			printf(" anda orang yang biasa-biasa saja \n",o);
			goto enam;
			break;
		default :
			printf(" tidak ada dalam pilihan brow \n",o);
			goto akhir;
			break;
		}
	
enam:	
	printf("\n");
	
	printf("6. berapakah jumlah kunci tersebut.\n");
	printf("\n  masukan angka 1 sampai 10 = "); scanf("%d",&f);
	switch (f) 
		{
		case 1 :
			printf("anda memiliki seorang teman yang anda percayai \n",p);
			goto tujuh;
			break;
		case 2 :
			printf(" anda puya sedikit teman yang anda percayai \n",p);
			goto tujuh;
			break;
		case 3 :
			printf("anda kurang bergaul dengan orang sekitar \n",p);
			goto tujuh;
			break;
		case 4 :
			printf(" jumlah teman yang anda percayai hanya beberapa \n",p);
			goto tujuh;
			break;
		case 5 :
			printf(" anda memiliki cukup banyak teman \n",p);
			goto tujuh;
			break;
		case 6 :
			printf(" anda lebih suka berkelompok dalam berteman \n",p);
			goto tujuh;
			break;
		case 7 :
			printf("ada banyak orang-orang yang anda rasa baik disekitar anda \n",p);
			goto tujuh;
			break;
		case 8 :
			printf("anda cuku pintar dalam bergaul \n",p);
			goto tujuh;
			break;
		case 9 :
			printf(" teman anda cukup banyak \n",p);
			goto tujuh;
			break;
		case 10 :
			printf(" anda mempunyai banyak teman \n",p);
			goto tujuh;
			break;
		default :
			printf("angka yang anda masukan tidak terdifinisi bro \n",p);
			goto akhir;
			break;
		}

tujuh:	
	printf("\n");
	
	printf("7. lalu anda berjalan ke depan dan melihat air terjun, \n");
	printf("   air terjun tersebut mengalir\n");
	printf("   seberapa deraskah air terjun tersebut ?\n");
	printf("   masukan angka 1-10. semakin tinggi angkanya, semakin deras air tejun tersebut \n");
	
	printf("\n jawab = "); scanf("%d",&g);
	switch (g) 
		{
		case 1 :
			printf("anda adalah orang yang tidak memiliki gairah hidup \n",q);
			goto delapan;
			break;
		case 2 :
			printf(" amisi anda masih kurang \n",q);
			goto delapan;
			break;
		case 3 :
			printf("hidup anda cukup berwarna \n",q);
			goto delapan;
			break;
		case 4 :
			printf("Rasa penasaran anda akan suatu hal masih kurang \n",q);
			goto delapan;
			break;
		case 5 :
			printf(" anda orang yang terkontrol dalam segala hal \n",q);
			goto delapan;
			break;
		case 6 :
			printf("anda punya rasa penasaran yang tinggi akan suatu hal \n",q);
			goto delapan;
			break;
		case 7 :
			printf("ada orang yang cukup bergairah dalam berhubungan \n",q);
			goto delapan;
			break;
		case 8 :
			printf("anda memiliki selera humor yang tinggi \n",q);
			goto delapan;
			break;
		case 9 :
			printf(" memiliki dorongan sexsual yang tinggi \n",q);
			goto delapan;
			break;
		case 10 :
			printf("anda adalah tipe orang yang cepat kalah oleh nafsu \n",q);
			goto delapan;
			break;
		default :
			printf("angka yang anda masukan tidak terdifinisi bro \n",q);
			goto akhir;
			break;
		}

delapan:	
	printf("\n");
	
	printf("8. lalu anda berjalan ke sebelah kanan dan melihat istana.\n");
	printf("   anda masuk ke dalam istana tersebut\n");
	printf("   di dalam istana terdapat dua buah kolam\n ");
	printf("   di kolam pertama terdapat sejumlah koin yang \n");
	printf("   terbuat dari emas namun airnya kotor \n");
	printf("   di kolam kedua terdapat banyak sekali koin yang \n"); 
	printf("   terbuat dari perak dengan air cukup bersih \n ");
	printf("   pada situasi tersebut apa yang akan anda lakukan \n");
	printf("\n  a. mengambil koin emas pada kolam pertama");
	printf("\n  b. mengambil koin perak pada kolam ke dua");
	printf("\n  c. Tidak mengambil apa apa");
	getchar();
	printf("\n jawab = "); scanf("%c",&h);
	
	switch (h) 
		{
		case 'a' :
			printf(" anda orangnya matre. jika mencari pasangan lebih mengutamakan kekayaan \n",r);
			goto sembilan;
			break;
		case 'b' :
			printf(" jika memilih pasangan lebih mengutamakan tampang atau fisik \n",r);
			goto sembilan;
			break;
		case 'c' :
			printf(" anda orang yang apa adanya dlam memilih pasangan \n",r);
			goto sembilan;
			break;
		default :
			printf(" tidak ada dalam pilihan brow \n",r);
			goto akhir;
			break;
		}
	
sembilan:
	printf("\n");
	
	printf("9. lalu anda keluar dari istana tersebut \n");
	printf("   dan melihat sebuah kotak harta karun.\n");
	printf("   ukuran kotak tersebut tersebut \n");
	printf("\n  a. besar");
	printf("\n  b. sedang");
	printf("\n  c. kecil");
	getchar();
	printf("\n jawab = "); scanf("%c",&i);
	
	switch (i) 
		{
		case 'a' :
			printf("anda orangnya egois \n",s);
			goto sepuluh;
			break;
		case 'b' :
			printf(" anda orangnya biasa saja \n",s);
			goto sepuluh;
			break;
		case 'c' :
			printf(" baik hati dan dermawan \n",s);
			goto sepuluh;
			break;
		default :
			printf(" tidak ada dalam pilihan brow \n",s);
			goto akhir;
			break;
		}
		
sepuluh:
	printf("\n");
	
	printf("10. disekitar derah tersebut anda melihat seekor kuda dan sebuah kotak besr.\n");
	printf("    oh tidak... tiba-tiba tornado datang \n");
	printf("    Apa yang anda lakukan\n");
	printf("\n  a. berlari menggunakan kuda");
	printf("\n  b. masuk kedalam kotak besar");
	printf("\n  c. berlari ke tempat yang lebih aman");
	getchar();
	printf("\n jawab = "); scanf("%c",&j);
	
	switch (j) 
		{
		case 'a' :
			printf(" anda tipe orang yang suka mendiskusikan masalah anda \n dengan dengan orang terdekat \n",t);
			goto jawab;
			break;
		case 'b' :
			printf(" anda tipe orang yang suka memendam masalah \n",t);
			goto jawab;
			break;
		case 'c' :
			printf(" anda biasanya selalu menyelesaikan masalah sendirian \n",t);
			goto jawab;
			break;
		default :
			printf(" tidak ada dalam pilihan brow \n",t);
			goto akhir;
			break;
		}

jawab:
	printf("%s", k);
	printf("%s", l);
	printf("%s", m);
	printf("%s", n);
	printf("%s", o);
	printf("%s", p);
	printf("%s", q);
	printf("%s", r);
	printf("%s", s);
	printf("%s \n", t);
		
akhir :
printf("\tTry again?\n");
                    printf("\t 1.Yes \n \t 2.Exit \n");
                    printf("\t Pilih = ");scanf("%d",&ulang);
                    switch(ulang) {
                                 case 1: goto NEW; break;
                                 case 2: goto END; break;
                                 default: printf("\t <-- ERROR Cin--> "); }
  
END:
exit(1);

}	
