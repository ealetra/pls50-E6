#include <stdio.h>

int main()
{
 double n1,n2,apotelesma;       /*variables for number1,number2,apotelesma*/
 char praksi;                     /*variables for sumbol praksi*/


 printf("Dwse arithmo praksi arithmo\n");
 scanf("%lf %c %lf",&n1,&praksi,&n2);

 /*check the praski*/
 if(praksi =='+'){
    apotelesma=n1+n2;
    printf("apotelesma= %.2f\n",apotelesma);  /*emfanisi apotelesmatos*/
 }

 else if(praksi =='-'){
        apotelesma=n1-n2;
        printf("apotelesma= %.2f\n",apotelesma);   /*emfanisi apotelesmatos*/

 }
else if(praksi =='*'){
        apotelesma=n1*n2;
        printf("apotelesma= %.2f\n",apotelesma);   /*emanisi aporelesmatos*/

}

else if(praksi =='/'){
        if(n2 ==0){
            printf("Adynati praksi\n");
        }
        else{
         apotelesma=n1/n2;
         printf("apotelesma= %.2f\n",apotelesma);   /*emfanisi apotelesmatos*/
        }
}
else
    printf("Edwses lathos praksi\n");


}
