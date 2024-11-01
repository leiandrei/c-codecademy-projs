#include<stdio.h>
#include<string.h>

int main() {
    
    int counter1[] = {0, 0, 0, 0};
    int counter2[] = {0, 0, 0, 0};
    char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
    int i, j, k;
    int flag[0];

    for (int i = 0; i < strlen(s1); i++)
    {
        if (counter1[0] == 'a') {
            counter1[0]++;
        } else if (counter1[1] == 'b') {
            counter1[1]++;
        } else if (counter1[2] == 'c') {
            counter1[2]++;
        } else if (counter1[3] == 'd') {
            counter1[3]++;
        }
    }
    for (int j = 0; j < strlen(s2); j++)
    {
        if (counter2[0] == 'a') {
            counter2[0]++;
        } else if (counter2[1] == 'b') {
            counter2[1]++;
        } else if (counter2[2] == 'c') {
            counter2[2]++;
        } else if (counter2[3] == 'd') {
            counter2[3]++;
        }
    }
    for (int k = 0; k < 4; k++)
    {
        if (counter1[i] == counter2[j]) {
            printf("Anagram!\n");
        } else if (counter1[i] != counter2[j]) {
            flag[0] = 1;
            printf("Not Anagram!\n");
        }
    }
    return 0;
}
