# C-proje-calismalari
C dilinde yazdığım kodları burada göreblilirsiniz

XCode derleyicisi ile yazdığım için kodları yazarken türkçe karakter sorunu yaşamadım. Ancak DEV C ya da CodeBlocks gibi derleyicilerde sorun yaşayanlar için,
Türkçe karakter sorununu şu kod ile giderebilirsiniz:

#include <locale.h> 
int main(){

setlocale(LC_ALL, "Turkish");

//KOD BURADA BULUNACAK

return 0; }
