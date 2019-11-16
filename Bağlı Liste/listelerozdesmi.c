//Düğüm yapısı, ekleme, çıkarma ve yazdırma fonksiyonları anafonksiyonlar.c dosyasında.

//Eski vize sorusu.2 bağlı liste özdeşmi?
int elemanSayisi(struct dugum *liste){
if(liste==NULL) return 0;
return 1+elemanSayisi(liste->sonraki);
}

int listelerOzdesmi(struct dugum *liste1, struct dugum *liste2){
if(elemanSayisi(liste1)!=elemanSayisi(liste2)) return 0;
while(liste1!=NULL){
   if(liste1->veri!=liste2->veri) return 0;
   liste1=liste1->sonraki;
   liste2=liste2->sonraki;
}
return 1;
}

