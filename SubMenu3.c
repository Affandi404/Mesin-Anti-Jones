#include "hedtiga.h"//system linking program

int resistor()
{
	int a,b,c,d,coba;
    float e,f;
	system("color 0B");
NEW:

    printf("\t---------------------------------------------------------\n");
    printf("\t       PROGRAM PERHITUNGAN NILAI RESISTOR 4 GELANG\n");
    printf("\t---------------------------------------------------------\n");
    printf("\t| Hitam         = 0         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Coklat        = 1         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Merah         = 2         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Orange        = 3         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Kuning        = 4         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Hijau         = 5         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Biru          = 6         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Ungu          = 7         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Abu-abu       = 8         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Putih         = 9         |\n");
    printf("\t-----------------------------\n");
    printf("\t| Emas          = 5 persen  |\n");
    printf("\t-----------------------------\n");
    printf("\t| Silver        = 10 persen |\n");
    printf("\t-----------------------------\n");
    printf("\t| Tak berwarna  = 20 persen |\n");
    printf("\t--------------------------------------------------------\n");
    printf("\t      Masukkan nilai kode warna sesuai yang diatas\n");
    printf("\t     Untuk gelang keempat tulis tanpa simbol persen\n");
    printf("\t--------------------------------------------------------\n");
    printf("\t Nilai warna gelang pertama = "); scanf("%d",&a);
   
        switch(a) {
              case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:
                   goto DUA;
                   break;
              default: system ("color 0C");
					   printf("\t--------------------------------------------------------\n");
                       printf("\t       MOHON MAAF DATA INPUT TIDAK DAPAT DIPROSES\n");
                       printf("\t--------------------------------------------------------\n");
                       goto AKHIR;
                       }
DUA:
    printf("\t Nilai warna gelang kedua   = "); scanf("%d",&b);
    switch(b) {
              case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:
                   goto TIGA;
                   break;
              default: system ("color 0C");
					   printf("\t--------------------------------------------------------\n");
                       printf("\t       MOHON MAAF DATA INPUT TIDAK DAPAT DIPROSES\n");
                       printf("\t--------------------------------------------------------\n");
                       goto AKHIR;
                       }         
TIGA:
    printf("\t Nilai warna gelang ketiga  = "); scanf("%d",&c);
    switch(c) {
              case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:
                   goto EMPAT;
                   break;
              default: system ("color 0C");
                       printf("\t--------------------------------------------------------\n");
                       printf("\t        MOHON MAAF DATA INPUT TIDAK DAPAT DIPROSES\n");
                       printf("\t--------------------------------------------------------\n");
                       goto AKHIR;
                       }  
EMPAT:
    printf("\t Nilai warna gelang keempat = "); scanf("%d",&d);
    switch(d) {
              case 5:case 10:case 20:
                   goto LIMA;
                   break;
              default: system ("color 0C");
					   printf("\t--------------------------------------------------------\n");
                       printf("\t       MOHON MAAF DATA INPUT TIDAK DAPAT DIPROSES\n");
                       printf("\t--------------------------------------------------------\n");
                       goto AKHIR;
                       }  
LIMA:
    printf("\t--------------------------------------------------------\n");
   
    e=(((a*10)+b)* pow(10,c))+(((a*10)+b)* pow(10,c)*d/100);
    f=(((a*10)+b)* pow(10,c))-(((a*10)+b)* pow(10,c)*d/100);
   
    printf("\t Nilai maksimum resistor = %.2f\n",e);
    printf("\t Nilai minimum resistor  = %.2f\n",f);
    printf("\t--------------------------------------------------------\n");
    printf("\t    Jika nilai ukur pada Multitester melebihi %.2f\n",e);
    printf("\t              atau kurang dari %.2f\n",f);
    printf("\t         maka resistor Anda selayaknya dibuang\n");
    printf("\t--------------------------------------------------------\n");
AKHIR:
    printf("\tTry again?\n");
                    printf("\t1.Yes\n\t2.Exit\n");
                    printf("\tPilih = ");scanf("%d",&coba);
                    switch(coba) {
                                 case 1: system("cls");goto NEW; break;
                                 case 2: goto END; break;
                                 default: printf("\t <-- INPUT ERROR --> "); }
  
END:
exit(1);

}

int kapasitor()
{
	system ("color 0F");
	float a, b, c;
	float cs , cp;
	
	printf("anda akan mengitung nilai 3 buah kapasitor \n");
	printf("\n\n");
	printf("masukan nilai C1 = "); scanf("%f",&a);
	printf("\n");
	printf("masukan nilai C2 = "); scanf("%f",&b);
	printf("\n");
	printf("masukan nilai C3 = "); scanf("%f",&c);
	printf("\n");
	
	cs = (a*b*c) /((a*b)+(a*c)+(b*c));
	printf("nilai kapasitor seri adalah = %f \n", cs);	
	
	printf("\n");
	
	cp = a + b + c;
	printf("nilai kapasitor paralel adalah = %f ", cp);
	
	printf("\n\n========================================================================\n");
	printf("\n\n\n");
	
	return 0;
}

float stdev()
{
	system ("color 0E");
	int *p, n, i;
    float a,b=0,c=0;
	printf("Anda akan menghitung stndar deviasi dari suatu data \n");
    printf("Berapa banyak data anda : ");
    scanf("%d", &n);
    
    p = malloc(n*sizeof(int)); /*memory allocation*/
    
    for(i=0; i<n; i++) //Proses Masukkan Nilai
    {
        printf("Silahkan masukkan data ke- %d : ",i+1);
        scanf("%d", p+i);
    }//end of for-loop
    
    printf("\n\nData yang anda masukkan: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    }
    
    //Mencari Rata-rata
    for(i=0; i<n; i++)
    {
        a=*(p+i);
        b=b+a;
    }
    b=b/n; /* b= rata-rata */
    printf("\nRata-rata= %f \n\n", b);
    
    for(i=0; i<n; i++)
    {
       a=((*(p+i))-b)*((*(p+i))-b);
       c=c+a; 
    }
    c=sqrt(c/(n-1));
    printf("Standar Deviasi= %f", c);
    free(p); 
	
	printf("\n\n========================================================================\n");
	printf("\n\n\n\n");

	return 0;

}

int sleksi()
{
		system ("color 4F");
		
		char nama[30],nim[15];
		int coba;
		float sks,ipk,tes1,tes2,tes3;
		
		printf("\n\n");
		printf("PROGRAM SELEKSI ASISTEN LABORATORIUM \n");
		printf("==================================== \n");
		getchar ();
		printf("\nInput Nama  : ");	gets(nama);
		printf("\nInput Nim   : ");	gets(nim);
		printf("\nInput Jumlah SKS Yang Diperoleh : ");
		scanf("%f", &sks);
		printf("\nInput Nilai IPK : ");
		scanf("%f", &ipk);
		printf("\nInput Nilai Tes-1 : ");
		scanf("%f", &tes1);
		printf("\nInput Nilai Tes-2 : ");
		scanf("%f", &tes2);
		printf("\nInput Nilai Tes-3 : ");
		scanf("%f", &tes3);
		
		printf("\n\nPeserta dengan: \n");
		printf ("\nNama   : %s \nNim    : %s \n",nama,nim);

		printf("\nDinyatakan : ");

		if(sks>=40)//syarat kelulusan
		{
			if(ipk>=3.00 && tes1>=80 && tes2>=80 && tes3>=80) printf("LULUS\n");
		}
		else
		{
			printf("TIDAK LULUS\n");
		}
		
	printf("\n\n========================================================================\n");     
	printf("\n\n\n");
		
	return 0;
}