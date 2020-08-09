puts "検索する数を入力してください"
target = gets.to_i

i = 1
ary = [7, 4, 2, 8, 10, 9, 1, 5, 3, 6]

for ary in 0..9 do
  if ary == target
    puts i.to_s + "個めにありました"
  end
  i += 1
end

if i == 10
  puts "ありませんでした"
end
