decToBcd(5)


local function decToBcd(val)
  if val == nil then return 0 end
  local d2c = ((((val/10) - ((val/10)%1)) *16) + (val%10))
  print("Decimal : "..val.."  Converted to BCD : "..d2c)
  return d2c
end

--[[//********************** RESULTs **************************************//

Decimal : 0 Converted to BCD : 0
Decimal : 1 Converted to BCD : 1
Decimal : 2 Converted to BCD : 2
Decimal : 3 Converted to BCD : 3
Decimal : 4 Converted to BCD : 4
Decimal : 5 Converted to BCD : 5
Decimal : 6 Converted to BCD : 6
Decimal : 7 Converted to BCD : 7
Decimal : 8 Converted to BCD : 8
Decimal : 9 Converted to BCD : 9
Decimal : 10 Converted to BCD : 16
Decimal : 11 Converted to BCD : 17
Decimal : 12 Converted to BCD : 18
Decimal : 13 Converted to BCD : 19
Decimal : 14 Converted to BCD : 20
Decimal : 15 Converted to BCD : 21
Decimal : 16 Converted to BCD : 22
Decimal : 17 Converted to BCD : 23
Decimal : 18 Converted to BCD : 24
Decimal : 19 Converted to BCD : 25
Decimal : 20 Converted to BCD : 32
Decimal : 21 Converted to BCD : 33
Decimal : 22 Converted to BCD : 34
Decimal : 23 Converted to BCD : 35
Decimal : 24 Converted to BCD : 36
Decimal : 25 Converted to BCD : 37
Decimal : 26 Converted to BCD : 38
Decimal : 27 Converted to BCD : 39
Decimal : 28 Converted to BCD : 40
Decimal : 29 Converted to BCD : 41
Decimal : 30 Converted to BCD : 48
Decimal : 31 Converted to BCD : 49
Decimal : 32 Converted to BCD : 50
Decimal : 33 Converted to BCD : 51
Decimal : 34 Converted to BCD : 52


]]--
