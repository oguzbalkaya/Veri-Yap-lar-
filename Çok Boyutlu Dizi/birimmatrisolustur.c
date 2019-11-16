void birimMatrisOlustur(int ***matris,int satir,int sutun){
    *matris=(int **)malloc(sizeof(int *)*satir);
    for(int i=0; i<satir; i++){
        *(*matris+i)=(int *)malloc(sizeof(int)*sutun);
        for(int j=0; j<sutun ; j++){
            if(i==j){
                *(*(*matris+i)+j)=1;
            }else{
                *(*(*matris+i)+j)=0;
            }
        }
    }
}
