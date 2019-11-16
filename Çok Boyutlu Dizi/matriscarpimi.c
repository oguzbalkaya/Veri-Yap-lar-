void matrisCarpimi(int ***A,int ***B,int ***C,int satir_A,int sutun_A,int satir_B,int sutun_B,int satir_C,int sutun_C){
   if(sutun_A!=satir_B)
       printf("Matris çarpımı yapabilmek için 1. matrisin sütun sayısı 2. matirisin satır sayısına eşit olmalı.");
   else if(satir_A!=satir_C || sutun_B!=sutun_C)
       printf("Çarpım matrisinin boyutları uymuyor.");
   else{
       for(int i=0;i<satir_C;i++){
           for(int j=0;j<sutun_C;j++){
               *(*(*C+i)+j)=0;
               for(int k=0;k<sutun_A; k++){
                   *(*(*C+i)+j)= *(*(*C+i)+j) + *(*(*A+i)+k) * *(*(*B+k)+j) ;
               }
           }
       }
   }
}

