#include <stdio.h>
#include <string.h>

void print(int count[])
{
    for (int i = 0; i < 26; i++) {

        if (count[i] != 0) {

            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
}

void counter(char s[])
{
    int i = 0;
    int count[26] = {0};
  
    while (s[i] != '\0') {
        count[s[i]-'a']++;
        i++;
    }
    print(count);
}

int main()
{
	char s[1000];
    printf("Enter string : ");
    gets(s);
    counter(s);
}
