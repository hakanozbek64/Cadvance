#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 20
int main()
{
int kredi,x,i=0,koltuk,sigara,a[10]={0};
char b[SIZE],c[SIZE];
srand(time(0));
devam:
printf("sigara icilen bolum icin 1 e\n");
printf("sigara icilmeyen bolum icin 2 e basiniz=");    
scanf("%d",&sigara);
if(sigara==1)
{
printf("\nad:");
scanf("%s",b);
printf("soyad:");
scanf("%s",c);
koltuk=rand()%4+1;
puts(b);
puts(c);
printf("koltuk numaraniz:%d\n",koltuk);
printf("salon numaraniz:1\n");
a[i]=1;
i++;
printf("\nkalan bos koltuk sayisi=%d\n",(5-i));
printf("bileti satin almak icin 1 e baska koltuk almak icin 2 e basin");
scanf("%d",&x);
if(x==1){
printf("toplam tutar=%d TL\n",(i*10));
printf("kredi karti numaranizi girinz:");
scanf("%d",&kredi);
printf("isleminiz onaylanmistir!!");
}
else
goto devam;
}
else
{
koltuk=rand()%4+6;
printf("%d",koltuk);   
a[i]=1;
i++;
} 
printf("\nad:");
scanf("%s",b);
printf("soyad:");
scanf("%s",c);
koltuk=rand()%4+1;
puts(b);
puts(c);
printf("koltuk numaraniz:%d\n",koltuk);
printf("salon numaraniz:1\n");
a[i]=1;
i++;
printf("\nkalan bos koltuk sayisi=%d\n",(5-i));
printf("bileti satin almak icin 1 e baska koltuk almak icin 2 e basin");
scanf("%d",&x);
if(x==1){
printf("toplam tutar=%d TL\n",(i*10));
printf("kredi karti numaranizi girinz:");
scanf("%d",&kredi);
printf("isleminiz onaylanmistir!!");
}
getch();    
}
