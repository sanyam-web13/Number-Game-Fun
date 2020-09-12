#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1 ;
    /*printf("The number is %d\n\n",number);
    
    */
    do
    {
        printf("Guess number between 1 to 100\n\n");
        scanf("%d",&guess);
        if (guess<number)
        {
            printf("Number is bigger than your chosen number\n");
        }
        else if (guess>number)
        {
            printf("Number is smaller than choosen Number\n\n");
        }
        else
      {
        
         printf("Congratulation guess is correct at %dth attempt",nguesses);
        }
        nguesses++;
        
    } while (nguesses!=number);
          
    return 0;
}