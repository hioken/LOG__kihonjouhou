# SQL
## syntax
- select(取得)
  - select distinct: 重複を削除
```sql
SELECT column_or_datails
  FROM table_name
  絞り込み;
```
- create view
```sql
CREATE VIEW view_name(
    column_names
  ) AS
  SELECT 文(column_namesに対応するカラムを取得)
```

## 絞り込み
- where: 条件の指定
- group by: グループ分け
- having: グループ分け後の条件
- order by: 並び替え
  - asc: 昇順
  - desc: 降順

## 集計

## 字句
- ~a~ as ~b~: a(カラムや条件の結果)にb(別名)を付ける
```sql
column_name AS name
```
- like ~a~: like が = の役目を果たし、a(後に続く文字列)にワイルドカードを使える
  - %: 何かしら0文字以上
  - _: 何かしら1文字
```sql
WHERE column_name LIKE '%name_'
```

# 制約
- 検査制約: CHECKの事、値のスコープが決まっている(相対的な場合も含む)場合に、必須
- 参照制約: 外部キー、更新する際に親がいるかどうかチェックする
