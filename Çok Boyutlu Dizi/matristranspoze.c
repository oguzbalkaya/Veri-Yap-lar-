void transpoze(int **A,int satirA,int sutunA,int **B,int satirB,int sutunB){
    if(satirA!=sutunB || satirB!=sutunA){
        printf("Boyular uyuşmuyor");
        exit(1);
    }else{
        for(int i=0;i<satirA;i++){
            for (int j=0;j<sutunA;j++){
                *(*(B+j)+i)=*(*(A+i)+j);
            }
        }
    }
}

