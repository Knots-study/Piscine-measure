#include <stdio.h>
#include <time.h>

#define REPEAT 2                /* タイピング 練習 回数 */
#define TEHON_LINE_MAX_NUM 2 /* 手本 文字列 の 個数 */
#define GOOD_TIME 20           /* 入力 時間( GOOD) */
#define NG_TIME 40             /* 入力 時間( NG) */

int main(void)
{
    char line_array[][30] = {"I have some good news", "Let's do something fun"};
    int input_char,  /* キーボード からの 入力 データ（ 一文字） */
        count,        /* タイピング 回数 の 計 算用 */
        line,         /* 使用 する 手本 文字列 の 判定 用 */
        begin_input, /* 入力 の 開始 時刻 */
        end_input,   /* 入力 の 終了 時刻 */
        input_time,  /* 入力 時間 */
        index,        /* 文字 配列 の 添え 字 用 */
        error_cnt;   /* エラー 文字数 */
    time_t t;        /* time 関数 用 */

    printf("＜ タイピングゲーム 開始 ＞\n");
    for (count = 0; count < REPEAT; count++)
    {
        for (line = 0; line < TEHON_LINE_MAX_NUM; line++)
        { /* 手本 文字列 の 出力 処理 */
            printf("%s\n", line_array[line]);
            begin_input = time(&t); /* 入力 エラー 分析 処理 */
            index = 0;
            error_cnt = 0;
            while ((input_char = getchar()) != '\n'){
                if (line_array[line][index] != '\0'){
                    if (input_char != line_array[line][index]){
                        error_cnt++;
                    }
                    index++;
                }
            }
            end_input = time(&t); /* 入力 時間 による 該当 メッセージ の 表示 処理 */
            input_time = end_input - begin_input;
            printf(" time =% d ", input_time);
            printf(" error count =% d\n", error_cnt);
            if (error_cnt == 0)
            {
                if (input_time <= GOOD_TIME)
                {
                    printf(" すばらしい！\n");
                }
                else
                {
                    if (input_time >= NG_TIME)
                    {
                        printf(" がんばっ て！\n");
                    }
                    else
                    {
                        printf(" その 調子！\n");
                    }
                }
            }
            else
            {
                printf(" タイプ ミス が あり ます。\n");
            }
        }
    }
}
