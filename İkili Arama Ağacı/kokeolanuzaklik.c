//Düğüm yapıları, ekleme vb. gibi ana fonksiyonlar anafonksiyonlar.c dosyasında.

//Eski vize sorusu. Verinin köke olan uzaklığını hesaplar.Düğüm olarak parametre alan fonksiyonlarda düğümün verisi alınarak kullanılabilir.
int dugumunKokeUzakligi(struct ikiliAramaAgaci *agac, int veri){
    struct dugum *isaretci;
    int uzaklik=0;
    isaretci=agac->kok;
    while(veri!=isaretci->veri){
        if(isaretci->veri < veri){ isaretci=isaretci->sag; uzaklik++;}
        else if(isaretci->veri > veri){ isaretci=isaretci->sol; uzaklik++;}
        else return -1;
    }
    return uzaklik;
}

