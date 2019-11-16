//Düğüm yapısı, ekleme, çıkarma ve yazdırma fonksiyonları anafonksiyonlar.c dosyasında.

//Eski vize sorusu.Bağlı dizideki tek ve çift sayılarını bulur.
void tekmiCiftmi(struct dugum *listebasi,int *cift,int *tek){
    if(listebasi==NULL) {printf("Liste boş"); return;}
    while(listebasi!=NULL){
        if(listebasi->veri % 2 == 0) (*cift)++;
        else (*tek)++;
        listebasi=listebasi->sonraki;
    }
}

