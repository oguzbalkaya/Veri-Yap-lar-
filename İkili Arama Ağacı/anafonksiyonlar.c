#include <stdio.h>
#include <stdlib.h>

struct dugum{
    int veri;
    struct dugum *sol,*sag;
};

struct ikiliAramaAgaci{
    struct dugum *kok;
};

void agacOlustur(struct ikiliAramaAgaci **agac){
    *agac=(struct ikiliAramaAgaci *)malloc(sizeof(struct ikiliAramaAgaci));
    if(*agac==NULL) {printf("Bellekte yer ayrılamadı."); exit(1);}
    (*agac)->kok=NULL;
}

struct dugum * dugumOlustur(int veri){
    struct dugum *yeni=(struct dugum *)malloc(sizeof(struct dugum));
    if(yeni==NULL) {printf("Bellekte yer ayrılamadı.");}
    yeni->veri=veri;
    yeni->sol=yeni->sag=NULL;
    return yeni;
}


void ekle(struct ikiliAramaAgaci *agac,int veri){
    struct dugum *isaretci,*onceki,*eklenen;
    isaretci=agac->kok;
    while(isaretci!=NULL){
        onceki=isaretci;
        if(isaretci->veri < veri) isaretci=isaretci->sag;
        else if(isaretci->veri > veri) isaretci=isaretci->sol;
        else return;
    }
    eklenen=dugumOlustur(veri);
    if(agac->kok==NULL){
        agac->kok=eklenen;
    }else{
        if(onceki->veri < veri) onceki->sag=eklenen;
        else onceki->sol=eklenen;

    }

}
void preorderYardimci(struct dugum *kok){
    if(kok==NULL) return;
    printf("%d ",kok->veri);
    preorderYardimci(kok->sol);
    preorderYardimci(kok->sag);
}

void preorder(struct ikiliAramaAgaci *agac){
    if(agac==NULL) return;
    preorderYardimci(agac->kok);
}

void inorderYardimci(struct dugum *kok){
    if(kok==NULL) return;
    inorderYardimci(kok->sol);
    printf("%d ",kok->veri);
    inorderYardimci(kok->sag);
}

void inorder(struct ikiliAramaAgaci *agac){
    if(agac==NULL) return;
    inorderYardimci(agac->kok);
}


void postorderYardimci(struct dugum *kok){
    if(kok==NULL) return;
    postorderYardimci(kok->sol);
    postorderYardimci(kok->sag);
    printf("%d ",kok->veri);
}

void postorder(struct ikiliAramaAgaci *agac){
    if(agac==NULL) return;
    postorderYardimci(agac->kok);
}

int dugumSayisi(struct dugum *kok){
    if(kok==NULL) return 0;
    return 1+dugumSayisi(kok->sol)+dugumSayisi(kok->sag);
}

int yaprakSayisi(struct dugum *kok){
    if(kok==NULL) return 0;
    if(kok->sag==NULL && kok->sol==NULL) return 1;
    else return yaprakSayisi(kok->sag)+yaprakSayisi(kok->sol);
}

int icDugumSayisi(struct dugum *kok){
    if(kok==NULL) return 0;
    if(kok->sag!=NULL || kok->sol!=NULL)
        return 1+icDugumSayisi(kok->sag)+icDugumSayisi(kok->sol);
    else return 0;

}


