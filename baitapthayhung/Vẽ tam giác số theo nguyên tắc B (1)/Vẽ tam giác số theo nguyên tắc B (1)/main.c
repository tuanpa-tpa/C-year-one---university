//
//  main.c
//  Vẽ tam giác số theo nguyên tắc B (1)
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,d=1;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0; j<i+1; j++){
            printf("%d",d);
        }
        d++;
        printf("\n");
    }
    return 0;
}
