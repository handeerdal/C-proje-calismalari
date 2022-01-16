# C-proje-calismalari
 
Eğer kodları çalıştırırken türkçe karakter sorunu yaşıyorsanız koda şu eklemeleri yapınız.

#include <locale.h>
int main(){

  setlocale(LC_ALL, "Turkish");

//KOD BURADA BULUNACAK

  return 0;
}
