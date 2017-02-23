local gpio = 0x0F--mcp23008.readGPIO() -- read the GPIO/buttons states

    -- get/extract the state of one pin at a time
    for pin=0,7 do
		print(bit.rshift(gpio,pin))
        local pinState = bit.band(bit.rshift(gpio,pin),0x1) -- extract one pin state

        -- change to string state (HIGH, LOW) instead of 1 or 0 respectively
        if(pinState == 1) then
            pinState = "HIGH"
        else
            pinState = "LOW"
        end

        print("Pin ".. pin .. ": ".. pinState)
end