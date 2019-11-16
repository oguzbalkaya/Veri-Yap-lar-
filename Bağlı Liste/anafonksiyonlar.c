#include <stdio.h>
#include <stdlib.h>

struct dugum{
    int veri;
    struct dugum *sonraki;
};

struct dugum * dugumOlustur(int veri){
    struct dugum *yeni=(struct dugum * )malloc(sizeof(struct dugum));
    if(yeni==NULL) {printf("Bellekte yer ayrılamadı."); exit(1);}
    yeni->sonraki=NULL;
    yeni->veri=veri;
    return yeni;
}

void basaEkle(struct dugum **listebasi,int veri){
    struct dugum *eklenecek=dugumOlustur(veri);
    eklenecek->sonraki=*listebasi;
    *listebasi=eklenecek;
}

void sonaEkle(struct dugum **listebasi,int veri){
    struct dugum *isaretci=*listebasi;
    while(isaretci->sonraki!=NULL){
        isaretci=isaretci->sonraki;
    }
    struct dugum *eklenen=dugumOlustur(veri);
    if(isaretci==NULL){
        *listebasi=eklenen;
    }else{
        isaretci->sonraki=eklenen;
    }
}

void listeYazdir(struct dugum *listebasi){
    while(listebasi!=NULL){
        printf("%d ",listebasi->veri);
        listebasi=listebasi->sonraki;
    }
}

void listeYazdirRec(struct dugum *listebasi){
    if(listebasi==NULL) return;
    printf("%d ",listebasi->veri);
    listeYazdirRec(listebasi->sonraki);
}

void listeYazdirTersten(struct dugum *listebasi){
    if(listebasi==NULL) return;
    listeYazdirTersten(listebasi->sonraki);
    printf("%d ",listebasi->veri);
}

void siraliEkle(struct dugum **listebasi,int veri){
    struct dugum * onceki,*isaretci,*eklenen;
    isaretci=*listebasi;
    while(isaretci!=NULL && isaretci->veri > veri){
        onceki=isaretci;
        if(isaretci->veri==veri) return;
        isaretci=isaretci->sonraki;
    }
    eklenen=dugumOlustur(veri);
    if(isaretci==*listebasi){
eklenen->sonraki=*listebasi;
*listebasi=eklenen;
    }else{
        onceki->sonraki=eklenen;
        eklenen->sonraki=isaretci;
    }
}
