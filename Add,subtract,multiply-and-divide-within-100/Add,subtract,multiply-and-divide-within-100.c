#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int a, b, oper,c;
    int correct_count = 0;
    int total_count = 0;
    char ch;
    int ch2;

  t1:  for (int i = 0; i < 10; i++) {
        a = rand() % 100;
        b = rand() % 100;
        oper = rand() % 4;

        switch (oper) {
            case 0:
                ch = '+';
                break;
            case 1:
                ch = '-';
                break;
            case 2:
                ch = '*';
                break;
            case 3:
                ch = '/';
                break;
        }
        if(a<b)
                {
                    int t=a;
                    a=b;
                    b=t;
                }
        printf("第%d次训练：%d %c %d = ", i + 1, a, ch, b);
        scanf("%d", &c);

        switch (oper) {
            case 0:
                if (a + b == c) {
                    printf("正确\n");
                    correct_count=correct_count+1;
                    total_count=total_count+1;
                } else {
                    printf("错误\n");
                    total_count=total_count+1;
                }
                break;
            case 1:
                if (a - b == c) {
                    printf("正确\n");
                    correct_count=correct_count+1;
                    total_count=total_count+1;
                } else {
                    printf("错误\n");
                    total_count=total_count+1;
                }
                break;
            case 2:
                if (a * b == c) {
                    printf("正确\n");
                    correct_count=correct_count+1;
                    total_count=total_count+1;
                } else {
                    printf("错误\n");
                    total_count=total_count+1;
                }
                break;
            case 3:
                if (b == 0) {
                    printf("程序出错，本题跳过\n");
                } else if (a / b == c) {
                    printf("正确\n");
                    correct_count=correct_count+1;
                    total_count=total_count+1;
                } else {
                    printf("错误\n");
                    total_count=total_count+1;
                }
                break;
        }
        if (i == 9) {
            printf("答题结束，共答对%d/%d题，是否进行下一轮训练？(yes:1,no:0)\n", correct_count, total_count);
            scanf("%d", &ch2);
            if (ch2 == 1) 
            {
                correct_count=0;
                total_count=0;
                goto t1;
            } 
            else
            {
                break;
            }
        }
    }

    return 0;
}
