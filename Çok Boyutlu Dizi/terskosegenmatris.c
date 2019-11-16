void tersKosegenOlustur(int ***A,int satirSayisi,int sutunSayisi){
    *A=(int **)malloc(sizeof(int *)*satirSayisi);
    for(int i=0;i<satirSayisi;i++){
        *(*A+i)=(int *)malloc(sizeof(int)*sutunSayisi);
        for(int j=0;j<sutunSayisi;j++){
            if(i+j==satirSayisi-1){
                *(*(*A+i)+j)=1;
            }else{
                *(*(*A+i)+j)=0;
            }
        }
    }
}

