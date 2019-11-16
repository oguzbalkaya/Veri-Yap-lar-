#include <stdio.h>
#include <stdlib.h>
void matrisOlustur(int ***matris, int satirSayisi, int sutunSayisi){
    *matris=(int**)malloc(sizeof(int *)*satirSayisi);
    for(int i=0; i<satirSayisi; i++){
        *(*matris+i)=(int *)malloc(sizeof(int)*sutunSayisi);
        for (int j=0; j<sutunSayisi; j++){
            *(*(*matris+i)+j)=rand()%5;
        }
    }
}


void matrisYazdir(int ***matris, int satirSayisi, int sutunSayisi){
    for(int i=0;i<satirSayisi;i++){
        for(int j=0;j<sutunSayisi;j++){
         printf("%d ",*(*(*matris+i)+j));
        }
        printf("\n");
    }
}

