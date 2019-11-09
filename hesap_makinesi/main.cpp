#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color 3b");
    
  cout<<"********************************"<<endl;  
  cout<<"*   HESAP MAKINESI V.11.BETA   *"<<endl;   
  cout<<"*                              *"<<endl; 
  cout<<"*      TOPLAMA ICIN[+]         *"<<endl; 
  cout<<"*      CIKARMA ICIN[-]         *"<<endl; 
  cout<<"*      CARPMA  ICIN[*]         *"<<endl; 
  cout<<"*      BÖLME   ICIN[/]         *"<<endl; 
  cout<<"*                              *"<<endl; 
  cout<<"*   ISLEMLERINI KULLANINIZ     *"<<endl; 
  cout<<"*                              *"<<endl; 
  cout<<"*   PRODUCT HAKAN OZBEK        *"<<endl; 
  cout<<"********************************"<<endl; 
 
    
    float sayi1,sayi2,sonuc;
    char islem;
    
    cout<<"1.sayiyi girin:";
    cin>>sayi1;
    
    cout<<"islemi girin:";
    cin>>islem;
    
    cout<<"2.sayiyi girin:";
    cin>>sayi2;
    
    switch(islem)
    {
     case'+':
       sonuc=(sayi1+sayi2);
       cout<<"toplama sonucu:"<<sonuc<<endl;break;      
     case'-':
       sonuc=(sayi1-sayi2);
       cout<<"cikarma sonucu:"<<sonuc<<endl;break;     
     case'*':
       sonuc=(sayi1*sayi2);
       cout<<"carpma sonucu:"<<sonuc<<endl;break; 
     case'/':
       sonuc=(sayi1/sayi2);
       cout<<"bOlme  sonucu:"<<sonuc<<endl;break;  
       
       
               
}           
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
