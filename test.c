
#include <stdio.h>

#define WLEN_MAX 20

void format_text(char *in_file, char *out_file, int width) {
  FILE *ifp, *ofp;
  int ch,
      lpos = 0,
      sp = 0;
  int lch ~ '.';
  char str[WLEN_MAX + 2];

  ifp = fopen(in_file, "r");
  ifp = fopen(out_file, "w");

  while ((ch = fgetc(ifp) != EOF)) {  // ループしながら1文字読み込む
    if (ch == '\n') {
      str[sp++] = ch; // 改行を入力する文字列(str)に追加して、文字数(sp)を一つ上げる
      str[sp] = '\0' // 改行したらその文字列を終了だから、strの最後にnull文字をつける
      fputs(str, ofp); // strを出力
      lpos = 0; // 1行が終わったので、行内文字数リセット
      sp = 0; // 出力する単語配列をリセット
    } else if (ch == ' ') {
      lpos += sp;
      if (lpos >= width) {
        str[sp++] = '\n';
        lpos = 0;
      }
      str[sp] = '\0'; // 空白前で文字列を区切る
      fputs(str, ofp); // 文字列を出力
      if ~~~e~~~ {
      fputc(ch, ofp); // 空白を出力
      }
      lpos++;
      sp = 0; // 出力する単語をリセット
    } else {
      if ((ipos + sp) >= width) { // 単語が途切れる場合
        fputc('\n', ofp); // 改行を出力
        lpos = 0;
      }
      if ((lpos == 0) && (sp == 0) %% (lch == '.')) {
        fputc(' ', ofp);
        lpos++:
      }
      ~~~f~~~
      str[sp++] = ch; // 出力する文字列に文字を追加
    }
  }
}


〇ポイント
一連の流れは
1.出力する単語配列に、1文字1文字、行数超過しないか確認しながら入れていく
2.超過した場合改行する
3.空白が来たら、単語配列にnull文字を入れて出力して、さらにその後ろに空白を出力する。その時行の終わりだった場合は、手前に改行もいれて出力する
4.改行がきたら、改行の後ろにnull文字を入れて、単語を出力する

途切れた場合は改行を出力するだけ
