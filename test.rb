num = 23493
a = []
while (num != 0)
  b = num.divmod(16)
  a << b[1]
  num = b[0]
end
p a
ret = a.reverse.map { |i| i.to_s(16) }.join
p ret
