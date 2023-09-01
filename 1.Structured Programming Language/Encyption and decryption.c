#include <stdio.h>

int main()
{
    char(ed);

    printf("Please Eter What do you Want...If you want to Encrypt your text press E and if you want to Decrypt your text press D: ");
    ed = getchar();
    if ((ed) == 'E' || (ed) == 'e')
    {
        char message[100], ch;
        int i, key;
        printf("Enter a message to encrypt: \n");
        fflush(stdin);
        gets(message);
        printf("Enter key: ");
        scanf("%d", &key);
        for (i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if (ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;
                if (ch > 'z')
                {
                    ch = ch - 'z' + 'a' - 1;
                }
                message[i] = ch;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;
                if (ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }
                message[i] = ch;
            }
        }
        printf("Encrypted message: %s", message);
    }

    else if (ed == 'D' || ed == 'd')
    {

        char message[100], ch;
        int i, key;
        printf("Enter a message to decrypt: ");
        fflush(stdin);
        gets(message);
        printf("Enter key: ");
        scanf("%d", &key);
        for (i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if (ch >= 'a' && ch <= 'z')
            {
                ch = ch - key;
                if (ch < 'a')
                {
                    ch = ch + 'z' - 'a' + 1;
                }
                message[i] = ch;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch - key;
                if (ch < 'A')
                {
                    ch = ch + 'Z' - 'A' + 1;
                }
                message[i] = ch;
            }
        }
        printf("Decrypted message: %s", message);
    }

    else
    {

        printf("\nThe key you pressed is incorrect ....  Your Pogramme will close now....");
    }

    getch();
    return 0;
}
