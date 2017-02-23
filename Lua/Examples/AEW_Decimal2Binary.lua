digits = {}
for i=0,9 do digits[i] = string.char(string.byte('0')+i) end
for i=10,36 do digits[i] = string.char(string.byte('A')+i-10) end

function numberstring(number, base)
   local s = ""
   repeat
      local remainder = number % base
      s = digits[remainder]..s
      number = (number-remainder)/base
   until number==0
   return s
end
print(numberstring(136,2))