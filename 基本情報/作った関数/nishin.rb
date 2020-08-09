puts "0 ~ 256までの値を入力してください"

number_10 = gets
number_10 = number_10.to_i

if number_10 >= 0 || number_10 <= 256
  number_10 = number_10.to_i
  number_10.change_to_2(number_10)
else
  puts "無効な数字です"
end


def change_to_2(target)
  length = 0

  while target > 1
    length += 1
    number = target % 2
    @nishin#{length} = number
    target = target / 2
  end

  while length <= 8
    @nishin = ""
    length += 1
    @nishin = @nishin + @nishin#{length}.to_s
  end
end
