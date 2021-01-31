〇埋め込み型SQL
・表データを直接扱えない手続型言語に、関係データベースを操作するために、SQLを埋め込む事

・結果表内にある１行を参照する仕組みをカーソルという
・親プログラムは、カーソルからデータを取得したり操作する
・下のコードのXがカーソルに当たる

EXEC SQL OPEN X;
  EXEC SQL FETCH X INTO :name, :dept;
  EXEC SQL UPDATE
    ...
EXEC SQL CLOSE X;

〇絞り込み
WHERE --条件を指定して、レコードを絞る(group by前)
GROUP BY --指定した属性で、レコードをグループ化する
HAVING --条件を指定して、GROUP BYで絞ったレコードを絞る
ORDER BY --ソート
