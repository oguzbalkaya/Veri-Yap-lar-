//Düğüm yapıları, ekleme vb. gibi ana fonksiyonlar anafonksiyonlar.c dosyasında.

//Eski vize sorusu.Verilen 2 düğümün kardeş olup olmadığını kontrol eden fonksiyon.Düğüm olarak parametre alan fonksiyon istenirse verilen düğümlerin verileri alınıp kullanılabilir.
int dugumlerKardesmi(struct ikiliAramaAgaci *agac,int veri1,int veri2){
    struct dugum *isaretci, *onceki = NULL;
    isaretci=agac->kok;
    while(isaretci->veri!=veri1 && isaretci->veri!=veri2){
        onceki=isaretci;
        if(veri1 < isaretci->veri) isaretci=isaretci->sol;
        else if (veri2 > isaretci->veri) isaretci=isaretci->sag;
        else return -1;
    }
    if((onceki->sol->veri==veri1 && onceki->sag->veri==veri2) || (onceki->sol->veri==veri2 && onceki->sag->veri==veri1)){
        return 1;
    }else return -1;
}


