//Düğüm yapıları, ekleme vb. gibi ana fonksiyonlar anafonksiyonlar.c dosyasında.

//Eski vize sorusu. Ağaçtaki tekli düğüm sayısını verir.
int tekliDugumSayisi(struct dugum *kok){
    if(kok==NULL) return 0;
    else if(kok->sol!=NULL && kok->sag==NULL){
        return 1+tekliDugumSayisi(kok->sol);
    }else if(kok->sag!=NULL && kok->sol==NULL){
        return 1+tekliDugumSayisi(kok->sag);
    }else{
        if(kok->sag!=NULL && kok->sol!=NULL){
            return tekliDugumSayisi(kok->sol)+tekliDugumSayisi(kok->sag);
       }
    }
}
