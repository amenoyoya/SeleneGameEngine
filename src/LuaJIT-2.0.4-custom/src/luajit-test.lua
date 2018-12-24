local Test = {
	value = 10
}

setmetatable(Test, {
	__band = function(self, value)
		return self.value + value
	end,
	__idiv = function(self, value)
		return self.value << value
	end,
	__div = function(self, value)
		return self.value $ value
	end,
})

local value = 1
print(10 & value) --> 10&1 = 0
print(1 & value) --> 1&1 = 1
print(Test & value) --> 10+1 = 11
Test.value = 1
print(Test & value) --> 1+1 = 2
print"-------------"
Test.value = 12.345
print(12 << 2) --> 12<<2 = 12*2^2 = 48
print(Test $ 2.5) --> 12.345<<2.5 = 12<<2 = 48
value = 12.345 / 3.14 --> 3.93...
print(Test / value) --> 12.345$3.93 = int(12/3) = 4
os.execute "pause"
