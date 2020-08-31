







def party_number
  puts "パーティの人数を選択してください(1～3人)"
  nn = gets.to_i
  if nn < 0 || nn > 3
    puts "無効なパーティ人数です"
    nn.party_number
  end
end

def party(n)
  for num in 1..nn do
    puts num.to_s + "番目のパーティの職業を入力してください"
    menber = gets

    case num
      when 1 then
        menber1 = menber
      when 2 then]
        menber2 = menber
      when 3 then
        menber3 = menber
    end
end

def enemy
  enemy = rand(1..3)
  case enemy
    when 1 then
      return "スライム"
    when 2 then
      return "ゴブリン"
    when 3 then
      return "魔獣"
  end
end

def encounter
  e = ""
  enemy1 = e.enemy
  enemy2 = e.enemy

  puts enemy1 + "と" + enemy2 + "が現れた！"
end

def battle
  puts "何番目の敵に攻撃しますか？(1 or 2)"
  n = gets.to_i
  case n
    when 1
      enemy = enemy1
    when 2
      enemy = enemy2
  end

  puts menber1 + "は" + enemy + "に攻撃！"
  puts menber2 + "は" + enemy + "に攻撃！" if menber2.present?
  puts menber3 + "は" + enemy + "に攻撃！" if menber3.present?

  case n
    when 1
      enemy1 = enemy
    when 2
      enemy2 = enemy
  end
end



# 〇要件
# パーティは3人まで
# getsでエンター押させて話を区切る
# パーティ人数選択 > パーティメンバーの名前選択 > 敵と遭遇 > 戦闘まで
