=begin
puts({:a => '1'}[:a])
h = {:a => '1'}
puts h[:a]
=end

params = {:key1 => {:child => '1', :child_2 => '3'}, :key2 => '2'}
p params[:key1]
p params[:key2]
