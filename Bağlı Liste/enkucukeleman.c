//Düğüm yapısı, ekleme, çıkarma ve yazdırma fonksiyonları anafonksiyonlar.c dosyasında.
//Bağlı listedeki en küçük elemanı bulur.
int enKucukEleman(struct dugum *listebasi){
    if(listebasi==NULL) return -100000000;
    int enkucuk=listebasi->veri;
    listebasi=listebasi->sonraki;
    while(listebasi!=NULL){
        if(listebasi->veri < enkucuk){
            enkucuk=listebasi->veri;
        }
        listebasi=listebasi->sonraki;
    }
    return enkucuk;
}

