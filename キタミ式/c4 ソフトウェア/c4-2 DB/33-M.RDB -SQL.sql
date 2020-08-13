SELECT genre, COUNT(*) FROM items GROUP BY genre
SELECT genre, AVG(prace) FROM items GROUP BY genre
ジャンルごとの商品数、ジャンルごとの平均金額

SELECT genre FROM items GROUP BY genre HAVING AVG>=100
平均が百円以上のジャンルのみ取得
SELECT genre, MAX(prace) FROM items GROUP BY genre HAVING MIN>=100
最低金額が100円以上のジャンルとその最高値を取得
