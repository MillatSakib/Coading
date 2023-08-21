//This programme is for simple Encryption & Decryption
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char w, enorde,plaintext[500],ciphertext[500],spt;
    int plen,key,ascii;

    do{
            system("CLS");
    printf("Please enter E if you want Encryption or press D if you want Decryption: ");
    scanf(" %c",&enorde);
    if(enorde=='e'||enorde=='E'){
        printf("\nPlease enter the Plain text: ");
        fflush(stdin);
        gets(plaintext);
        plen=strlen(plaintext);
        printf("\nPlease enter the Key: ");
        scanf(" %d",&key);
        printf("\nThe chipher text is: ");
        for(int i=0;i<plen;i++){
               ascii = plaintext[i];
         if(ascii==32){
            printf("%c",ascii);
         }

         else if(ascii>=65 && ascii<=90){
            int temp;
            temp=ascii-65;
            temp=(temp+key)%26;
            temp=temp+65;
            printf("%c",temp);
         }

        else if(ascii>=97 && ascii<=122){
            int temp;
            temp=ascii-97;
            temp=(temp+key)%26;
            temp=temp+97;
            printf("%c",temp);
         }
        }
    }

       else if(enorde=='d'||enorde=='D'){

        printf("\nPlease enter the Cipher text: ");
        fflush(stdin);
        gets(ciphertext);
        plen=strlen(ciphertext);
        printf("\nPlease enter the Key: ");
        scanf(" %d",&key);
        printf("\nThe chipher text is: ");
        for(int i=0;i<plen;i++){
               ascii = ciphertext[i];
         if(ascii==32){
            printf("%c",ascii);
         }
         else if(ascii>=65 && ascii<=90){
            int temp;
            temp=ascii-65;
            temp=(temp-key)%26;
            if(temp<0){
                temp+=26;
            }
            temp=temp+65;
            printf("%c",temp);
         }
        else if(ascii>=97 && ascii<=122){
            int temp;
            temp=ascii-97;
            temp=(temp-key)%26;
            if(temp<0){
                temp+=26;
            }
            temp=temp+97;
            printf("%c",temp);

         }

    }

    }
    else{
        printf("\nYou choose wrong value");
    }
    printf("\n\n Do you want Encrypt or Decrypt again???\nIf you want Encrypt or Decrypt again press 'Y'.And if you don't want press 'N': ");
    scanf(" %c",&w);
    if((w=='y'||w=='Y')||(w=='n'|| w== 'N'))
    printf("");
        else{
            printf("You Press a wrong Key..Note: If you press wrong key again...This programme will exit....\n");
            printf("\nPlease enter a valid(Y/N) key: ");
            scanf(" %c",&w);
            if((w=='y'||w=='Y')||(w=='n'||w== 'N'))
                printf("");
            else{
                        printf("\nSorry..You Press a wrong key Again..\n\a");
    }
    }
    if(w=='n'||w=='N'){
        system("EXIT");
    }
    }

    while(w=='y'||w=='Y');
return 0;

}
