#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coin=0,coin5=50,coin10=50,coin25=50,coin50=50;
    int stamp=0,stamp10=50,stamp15=50,stamp25=50;
    int balance=0;

    while(1){
        printf("............................................................................................................\n\nAmount of stamps remaining:| Rs10 Stamp-%d | Rs15 Stamp-%d | Rs25 Stamp-%d |\n",stamp10,stamp15,stamp25);
        printf("Amount of coins left : | 5 Rupees Coins-%d | 10 Rupees Coins-%d | 25 Rupees Coins-%d | 50 Rupees Coins-%d |\n\n............................................................................................................\n\n",coin5,coin10,coin25,coin50);
        printf("Enter the stamp you need :");
        scanf("%d",&stamp);

        if (stamp==25){
            if(stamp25==0){
                printf("\nSorry!,no stamp available\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }
        }else if (stamp==15){
            if(stamp15==0){
                printf("\nSorry!,no stamp available\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }
        }else if (stamp==10){
            if(stamp10==0){
                printf("\nSorry!,no stamp available\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }
        }else{
            printf("\nThis machine does not have stamps of the value you are entering\n\n");
            printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
            continue;
        }
        printf("\nEnter the payment amount(only RS50,RS25,RS10 and RS5) :");
        scanf("%d",&coin);
        if(coin<stamp){
            printf("\ninsufficient amount tendered\n\n");
            printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
            continue;
        }
        balance=coin-stamp;
        if(balance==40){
            if(coin25!=0&&coin10!=0&&coin5!=0){
                    coin25--;
                    coin10--;
                    coin5--;

            }else{
                printf("\nno change\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }
        }else if(balance==35){
            if(coin25!=0&&coin10!=0){
                coin25--;
                coin10--;
            }else{
                printf("\nno change\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }

        }else if(balance==25){
            if(coin25!=0){
                coin25--;
            }else{
                printf("\nno change\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }


        }else if(balance==15){
            if(coin5!=0&&coin10!=0){
                coin5--;
                coin10--;
            }else{
                printf("\nno change\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }


        }else if(balance==10){
            if(coin10!=0){
                coin10--;
            }else{
                printf("\nno change\n\n");
                printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
                continue;
            }


        }else if(balance==0){

        }
        if(coin==50){
            coin50++;
        }else if(coin==25){
            coin25++;
        }else if(coin==10){
            coin10++;
        }else if(coin==5){
            coin5++;
        }else{
            printf("\nInsert the correct coins\n\n");
            printf("...................................\n\n    TRY AGAIN  \n\n...................................\n");
            continue;
        }
        if(stamp==25){
            stamp25--;
        }else if(stamp==15){
            stamp15--;
        }else if(stamp==10){
            stamp10--;
        }
        printf("\n\n%dstamps and RS%d is given as balance\n\n",stamp,balance);
        printf("...................................\n\n    THANKS! COME BACK \n\n...................................\n");


    }
}
