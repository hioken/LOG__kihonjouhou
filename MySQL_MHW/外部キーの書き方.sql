-- 〇シンプル
  FK_id
  FOREIGN KEY (FK_id) REFERENCES oyatables (PK)
-- 後からalter tableで修正も可能

-- 〇オプションのつけ方
  FK_id
  FOREIGN KEY (FK_id) REFERENCES oyatables (PK)
  ON UPDATE OPTION名
  ON DELETE OPTION名


-- 多分親テーブルのカラムは、指定しなければ勝手にPRIMARY KEYを参照する？


-- 〇CONSTRAINT句
-- ・使う意味
-- エラーメッセージが分かりやすくなる
-- 変更したい制約を参照できるようになる
