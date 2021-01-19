## 概要
- 配列[2^n]
- この配列に対して、合併をn回繰り返す事によって整列を行うのがmergeSort

## 順番
1. 配列input[] の要素を昇順に並べて、配列output[]に格納する
2. 引数
  - input[]
  - output[]
  - size


予想
span_size 合併後のサイズ
a_idx 合併前の配列1の0番目の位置
b_idx 合併前の配列2の0番目の位置

s_idx output[]へ出力するinput[]の位置
w_idx input[]からのの出力を入力するoutput[]の位置

a_yet
b_yet

temp[] 一時保存用配列



入力用のidxは多分、その入力する配列の0位置
yetは、その対象の配列操作中ですフラグ？


合併後サイズ = 2
配列を同化

while (合併後のサイズが、配列のサイズを超えるまで) {
  input[]とoutput[]idxを初期化

  /* ココから合併スタート */
  while (合併後のサイズが配列以上になるまで) { // 合併前のサイズが合併後のサイズになるまで
    /* 合併前の配列の0位置を、各iddxにセット */
    配列1 = 入力領域idx; 配列2 = 入力領域idx + 合併後のサイズ / 2  // point 1

    for (i = 配列1 - 入力用idx; i < 配列2 - 配列1; i++) { // 合併前の1配列、span_idxは配列2をコピーする時に、
      temp[i] = output [i + 入力用idx]
    }
    aとbのyetをtrue;

    while (aaaaaaaaaaaaa) {
      /* b_yetがtrue、なおかつ、a_yetとb_yetが両方真でoutputの対象が、tempの対象以上、ではない時 */
      if (b_yet = false or (a_yet = true && b_yet = true && temp[配列1idx - 入力領域idx] <= output[配列2idx])) {
        output[出力用] = temp[配列1idx - 入力領域idx]
        配列1idx++
        if (配列1idx >= 入力領域idx + 合併後のサイズ / 2) {
          a_yet = false
        }
      }
      else {
        output[出力用idx] = output[配列2idx]
        配列2idx++
        if (配列2idx >= 入力領域idx + 合併後のサイズ / 2) {　
          b_yet = false
        }
      }
      (bbbbbbbbbbbbb)
    }
    入力用idx += 合併後のサイズ
  }
  /* ここまでで1合併 */

  合併後のサイズ *= 2
}

ア、ク
