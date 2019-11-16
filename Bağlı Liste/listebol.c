//Düğüm yapısı, ekleme, çıkarma ve yazdırma fonksiyonları anafonksiyonlar.c dosyasında.
//Bağlı listeyi 2 farklı bağlı listeye böler.
void listeBol(struct dugum **liste1,struct dugum **liste2,int nereden){
    struct dugum *onceki,*isaretci=*liste1;
    int say=0;
    while(liste1!=NULL && say!=nereden){
        say++;
        onceki=isaretci;
        isaretci=isaretci->sonraki;
    }
    onceki->sonraki=NULL;
    *liste2=isaretci;
}

