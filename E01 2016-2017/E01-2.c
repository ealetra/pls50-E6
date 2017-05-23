#include<stdio.h>   /* needed for printf(), scanf() */

#include <math.h> /* needed for sqrt gia ton ypologismo tiw ypoteinoysas */
#define PI 3.14159
float tetragono(float x){
	float p;
	p = x * 4;
	return p;
}
float parallilogrammo(float x, float y){
	return x*2 + y*2;
}
float trigono(float x, float y){
	float ypoteinoysa, p;              /* gia ton ypologismo tis ypoteinoysas kai tis perimetrou */
	ypoteinoysa = sqrt(x*x + y*y);
	p = ypoteinoysa + x + y;
	return p;
}
float kyklos(float x){
	return 2*PI*x;
}
int main()

{
   int choice; 	/* menu choice */
   float a, b; 	/* diastaseis */
   float p;		/* perimetros */
   do {
	   	printf("Epileje \n");
	   	printf("1. tetragono \n");
	   	printf("2. parallilogrammo \n");
	   	printf("3. trigono \n");
	   	printf("4. kyklos \n");
	   	printf("0. Exit \n\n");
	   	scanf(" %c", &choice);

   		if (choice == '1'){
   			printf("Dose tin pleyra toy tetragonoy.\n");
	   		scanf(" %f", &a);
	   		p = tetragono(a);
   			printf("H perimetros toy tetragonoy einai : %.2f\n", p);
		   }
		else if (choice == '2'){
			printf("Dose to mikos kai to platos toy parallilogrammoy.\n");
	   		scanf(" %f %f", &a, &b);
	   		p = parallilogrammo(a, b);
   			printf("H perimetros toy parallilogrammoy einai : %.2f\n", p);
		   }
		else if (choice == '3'){
			printf("Dose to mikos tis protis kai tis deyteris kathetis pleyras toy trigonoy.\n");
	   		scanf(" %f %f", &a, &b);
	   		p = trigono(a, b);
   			printf("H perimetros toy trigonoy einai : %.2f\n", p);
		   }
		else if (choice == '4'){
			printf("Dose tin aktina toy kykloy.\n");
	   		scanf(" %f", &a);
	   		p = kyklos(a);
   			printf("H perimetros toy kykloy einai : %.2f\n", p);
		   }
		else if (choice == '0'){
   			printf("\n");
		   }
		else{
			printf("Lathos epilogi \n");
		}

   		printf("\n\n");
  	} while (choice != '0');

   return 0;
}


