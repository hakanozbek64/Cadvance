#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include <dirent.h>

int sayac=0;//dosya say�s�n� tutar
char aranan_kelime[50]="";
void dosyaRun(char []);//system komutu ile doosyan�n �al��t�r�lmas�
bool klasorKontrol(char*);//klas�rm� yoksa dosyam� kontrol�
void strSifirla(char[]);//string s�f�rlama fonksiyonu
void strAra(char[],char []);//string arama fonksiyonu
void agac(char* );//dizin gezme fonksiyonu


bool klasorKontrol(char* adres)//belirtilen yolun klas�r olup olmad���n� kontrol eder
{
        int length;
        length=strlen(adres);
        DIR *d;
        d=opendir(adres);//e�er a��lmaya �al���lan yol klas�r ise d do�ru bir de�er d�ner 
        if(d)
        {
            closedir(d);
            return false;
        }
        else return true;
}
void strSifirla(char kar[])//string s�f�rlamas� yapan fonksiyon
{
     
   int uzunluk=strlen(kar)+3;  
   for(int i=0;i<=uzunluk;i++)
   kar[i]='\0';      
}

void strAra(char yol[MAX_PATH],char dosya[MAX_PATH])//yol de�i�keni i�inde girilen katar�n olup olmad���n� kontrol eder
{
     char deg[MAX_PATH]="";
     int j=0;
     for(int i=0;i<strlen(yol);i++)
     {
        
        for(int j=i;j<strlen(yol);j++)
        {
                int ksayac=0;
                for(int k=i;k<=j;k++)
                {
                     deg[ksayac]=yol[k];
                     ksayac++;         
                }
                if(strcmp(deg,aranan_kelime)==0)//e�er kelime bulunursa
                {
                    printf("\ndosya bulundu...\n%s\n acilsin mi  e/h?",yol);
                    char ch=getch();
                   
                    if(ch=='e' || ch=='E')
                    dosyaRun(dosya);
                    printf("\naran�yor...\n");
                    return;
                 }
                 strSifirla(deg);   
        }
     }
}
void dosyaRun(char dosya[MAX_PATH])//system("") komutu ile yoldaki dosyan�n a��lmas�n� sa�lar
{
      int i;
      char runDosya[MAX_PATH];
      runDosya[0]='"';
      
      for(i=0;i<strlen(dosya);i++)
      {
              runDosya[i+1]=dosya[i];
      }
      runDosya[i+1]='"';
      runDosya[i+2]='\0'; 
      system(runDosya);
}

void agac(char*  yol)//dizin tarama islemi bu fonksiyonla yapilir
{
      char aranan[MAX_PATH],sonraki[MAX_PATH];
      bool sonuc=true;
      WIN32_FIND_DATA dbilgi;
      HANDLE dDir;

      sprintf(aranan,"%s\\*.*",yol);
      dDir=FindFirstFile(aranan,&dbilgi);

      if (dDir == INVALID_HANDLE_VALUE)
      return;

      while(sonuc)
      {

            if (!strcmp(dbilgi.cFileName, "."))  //e�er nokta ile kar��la��lma��sa
            {
               FindNextFile(dDir, &dbilgi);        //sonraki dosyay� bul
               sonuc = FindNextFile(dDir, &dbilgi);
               continue;
            }
            sprintf(sonraki, "%s\\%s", yol, dbilgi.cFileName);
            if(klasorKontrol(sonraki))// s�radaki yol klas�r den farkl� ise
            {
                char yoll[255];
                sayac++;
                strAra(dbilgi.cFileName,sonraki);
            }
            if (dbilgi.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
                agac(sonraki);//rek�rsif yap� ile fonksiyon yeniden �a�r�l�yor ve bir sonraki dizindeki eleman� aramak i�in sonraki yolu fonksiyona g�nderiliyor
                
             sonuc = FindNextFile(dDir, &dbilgi);
    }
    FindClose(dDir);
}

main()
{
      char yol[MAX_PATH];
      printf("dosya yolu      :");
      gets(yol);
      printf("aranan kelime   :");
      
      gets(aranan_kelime);
      printf("\naraniyor...\n");
      agac(yol);
      printf("arama bitti...%d dosya arandi...",sayac);
      getch();
}
