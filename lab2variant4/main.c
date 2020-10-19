//
//  main.c
//  lab2variant4
//
//  Created by gru gri on 21.09.2020.
//  Copyright © 2020 gru gri. All rights reserved.
//
#include <stdio.h>
int main ()
{
    char c;
    int num_words=0, state = 0, num_chars = 0, k ;
    printf("Enter the length: ");
    scanf("%d",&k);
    if (k == 0 || k < 0){
        printf(" there are no such words\n");
        return 0;
    }
    printf("Enter the sentence:\n	");
    getchar();
    while (((c = getchar()) != EOF) && (c != '\n'))
    {
        if (('a' <= c &&c <= 'z')||('A' <= c && c <= 'Z')){
            state = 1;
            num_chars++;
        }
        else {
            if(state == 1 && num_chars == k)
                num_words++;
            state = 0;
            num_chars = 0;
        }
    }
    if (state == 1 && num_chars == k){
        num_words ++;
    num_chars = 0;
    printf("Number of words: %d\n",num_words);
    return 0;
    }
}

