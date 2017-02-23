

local function bcdToDec(val)
	if val == nil then return 0 end
	local b2d = ((((val/16) - ((val/16)%1)) *10) + (val%16))
	print("BCD : "..val.."  Converted to Decimal : "..b2d)
  return b2d
end

bcdToDec(0011)
