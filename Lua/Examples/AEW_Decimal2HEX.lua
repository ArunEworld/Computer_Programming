----------- method -1 (using string library) ----------------------
D2H = 100                   --   Decimal -> 100 (HexaDecimal->64)
print(string.format("%x, ", D2H))


----------- method -2 (without using string library----------------------

--va = DEC_HEX(255)             -- Decimal -> 255 (HexaDecimal->FF)
--print(va)
function DEC_HEX(IN)
    local B,K,OUT,I,D=16,"0123456789ABCDEF","",0
    while IN>0 do
        I=I+1
        IN,D=math.floor(IN/B),math.mod(IN,B)+1
        OUT=string.sub(K,D,D)..OUT
    end
    return OUT
end
