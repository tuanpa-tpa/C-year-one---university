//Viết chương trình C cho  phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng.
//INPUT
//5
//OUTPUT
//56789
//4567
//345
//23
//1
//  main.c
//  Vẽ tam giác số theo nguyên tắc E (2)
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d = n;
    for (int i = 0; i<n; i++) {
        int t = d;
        for (int j = 0; j< n-i; j++){
            printf("%d",t++);
        }
        d--;
        printf("\n");
    }
    return 0;
}
