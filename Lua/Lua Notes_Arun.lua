Usefull Websites
		http://lua-users.org
	Lua Manuals
		https://www.lua.org/manual/
		
			ESP8266 using 5.1 ver Lua so use this link https://www.lua.org/manual/5.1/


What is a Module in lua?
		Module is like a library that can be loaded using require and has a single global name containing a table.

---------------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------- chapter 6:  Standard Library Functions  -------------------------------------------------------
-- reference website  : https://www.lua.org/manual/5.2/manual.html#6.5 
-- Chapter 6
---------------------------------------------------------------------------------------------------------------------------------------------------------
		
    basic library	(chapter 6.1)
    coroutine library (chapter 6.2)
    package library (chapter 6.3)
    string manipulation (chapter 6.4)
    table manipulation (chapter 6.5)
    mathematical functions (sin, log, etc.); (chapter 6.6)
    bitwise operations (chapter 6.7)
    input and output (chapter 6.8)
    operating system facilities (chapter 6.9)
    debug facilities (chapter 6.10)
------------------------------------------------------------- Basic Functions  --------------------------------------------------------------------
-- reference website  : https://www.lua.org/manual/5.2/manual.html#6.5 
-- Chapter 6.1
---------------------------------------------------------------------------------------------------------------------------------------------------------
assert (v [, message])		-- error :	v is "Value of argument" is false . print message and return all its argument : v is "Value of argument" is true

collectgarbage ([opt [, arg]])	

dofile ([filename])		-	
	Opens the named file and executes its contents as a Lua chunk. 
	When called without arguments, dofile executes the contents of the standard input (stdin).
	Returns all values returned by the chunk. In case of errors, dofile propagates the error to its caller (that is, dofile does not run in protected mode). 

error (message [, level])		

_G			--	A global variable (not a function) that holds the global environment (see Â§2.2). Lua itself does not use this variable; changing its value does not affect any environment, nor vice-versa.
	Example : _G[WS2812] = WS2812_Module

getmetatable (object)

ipairs (t)

load (ld [, source [, mode [, env]]])

loadfile ([filename [, mode [, env]]])

next (table [, index])

pairs (t)

pcall (f [, arg1, ???])

print (???)				-- Receives any number of arguments and prints their values to stdout, using the tostring function to convert each argument to a string. print is not intended for formatted output, but only as a quick way to show a value, for instance for debugging. For complete control over the output, use string.format and io.write. 

rawequal (v1, v2)		-- Checks whether v1 is equal to v2, without invoking any metamethod. Returns a boolean. 

rawget (table, index)	-- Gets the real value of table[index], without invoking any metamethod. table must be a table; index may be any value. 

rawlen (v)				-- Returns the length of the object v, which must be a table or a string, without invoking any metamethod. Returns an integer number. 

rawset (table, index, value)

select (index, ???)

setmetatable (table, metatable)

tonumber(e [, base])

tostring(v)

type(v)

=_VERSION				--	A global variable (not a function) that holds a string containing the current interpreter version. The current contents of this variable is "Lua 5.2". 

xpcall (f, msgh [, arg1, ???])		-- This function is similar to pcall, except that it sets a new message handler msgh. 

reference website : 
		https://www.lua.org/manual/5.2/manual.html#6.5	(chapter 6.1)

------------------------------------------------------------- 6.3 – Modules  --------------------------------------------------------------------
-- reference website  : https://www.lua.org/manual/5.2/manual.html#6.5 
-- Chapter 6.1
---------------------------------------------------------------------------------------------------------------------------------------------------------
require (modname)
	Roughly, require does the same job as dofile, but with two important differences.
		1. First, require searches for the file in a path;
		2. second, require controls whether a file has already been run to avoid duplicating the work.		
		
	--Refer Website
		--https://www.tutorialspoint.com/lua/lua_modules.htm
		--https://www.lua.org/manual/5.2/manual.html#6.5
		--https://www.tutorialspoint.com/lua/lua_error_handling.htm
		
package.config

package.cpath

package.loaded

package.loadlib (libname, funcname)

package.path

package.preload

package.searchers

package.searchpath (name, path [, sep [, rep]])


------------------------------------------------------------- 6.4 – String Manipulation  ---------------------------------------------------------------
-- reference website  : https://www.lua.org/manual/5.2/manual.html#6.5 
-- Chapter 6.4
---------------------------------------------------------------------------------------------------------------------------------------------------------
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.byte~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.byte (s [, i [, j]])
s:byte(i[,j]])
	--Return the numerical code the i-th through j-th character of the string passed. 
--example
	> = string.byte("ABCDE")      -- no index, so the first character
	65
	> = string.byte("ABCDE",1)    -- indexes start at 1
	65
	> = string.byte("ABCDE",0)    -- we're not using C
	> = string.byte("ABCDE",100)  -- index out of range, no value returned
	> = string.byte("ABCDE",3,4)
	67      68
	> s = "ABCDE"
	> = s:byte(3,4)               -- can apply directly to string variable
	67      68

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.char~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.char (???)	--Generate a string representing the character codes passed as arguments. Numerical codes are not necessarily portable across platforms.
--example
	> = string.char(65,66,67)
	ABC
	> = string.char()  -- empty string

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.dump~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.dump(function) end	--Returns a binary representation of the given function, so that a later loadstring on that string returns a copy of the function. Function must be a Lua function without upvalues. 

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.finds~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.find (s, pattern [, init [, plain]])
s:find(pattern [, index [, plain]])
--example
	> = string.find("Hello Lua user", "Lua")
	7       9
	> = string.find("Hello Lua user", "banana")
	nil
	> = string.find("Hello Lua user", "Lua", 1)  -- start at first character
	7       9
	> = string.find("Hello Lua user", "Lua", 8)  -- "Lua" not found again after character 8
	nil
	> = string.find("Hello Lua user", "e", -5)   -- first "e" 5 characters from the end
	13      13
	> = string.find("Hello Lua user", "%su")          -- find a space character followed by "u"
	10      11
	> = string.find("Hello Lua user", "%su", 1, true) -- turn on plain searches, now not found
	nil

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.format~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.format (formatstring, ???)
s:format(e1, e2, ...)
--example
	> = string.format("%s %q", "Hello", "Lua user!")   -- string and quoted string
	Hello "Lua user!"
	> = string.format("%c%c%c", 76,117,97)             -- char
	Lua
	> = string.format("%e, %E", math.pi,math.pi)       -- exponent
	3.141593e+000, 3.141593E+000
	> = string.format("%f, %g", math.pi,math.pi)       -- float and compact float
	3.141593, 3.14159
	> = string.format("%d, %i, %u", -100,-100,-100)    -- signed, signed, unsigned integer
	-100, -100, 4294967196
	> = string.format("%o, %x, %X", -100,-100,-100)    -- octal, hex, hex
	37777777634, ffffff9c, FFFFFF9C

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.gmatch~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.gmatch (s, pattern)
s:gmatch(pattern)	--This returns a pattern finding iterator. The iterator will search through the string passed looking for instances of the pattern you passed. 
--example
	> for word in string.gmatch("Hello Lua user", "%a+") do print(word) end
	Hello
	Lua
	user
	
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.gsub~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.gsub (s, pattern, repl [, n])
s:gsub(pattern, replace [,n])
--example
	> = string.gsub("Hello banana", "banana", "Lua user")
	Hello Lua user  1
	> = string.gsub("banana", "a", "A", 2)  -- limit substitutions made to 2
	bAnAna  2
	> = string.gsub("banana", "(an)", "%1-")    -- capture any occurences of "an" and replace
	ban-an-a        2
	> = string.gsub("banana", "a(n)", "a(%1)")  -- brackets around n's which follow a's
	ba(n)a(n)a      2
	> = string.gsub("banana", "(a)(n)", "%2%1") -- reverse any "an"s
	bnanaa  2
	> = string.gsub("Hello Lua user", "(%w+)", print)  -- print any words found
	Hello
	Lua
	user
		3
	> = string.gsub("Hello Lua user", "(%w+)", function(w) return string.len(w) end) -- replace with lengths
	5 3 4   3
	> = string.gsub("banana", "(a)", string.upper)     -- make all "a"s found uppercase
	bAnAnA  3
	> = string.gsub("banana", "(a)(n)", function(a,b) return b..a end) -- reverse any "an"s
	bnanaa  2
	> = string.gsub("The big {brown} fox jumped {over} the lazy {dog}.","{(.-)}", function(a)  print(a) end )
	brown 
	over 
	dog

	> = string.gsub("The big {brown} fox jumped {over} the lazy {dog}.","{(.*)}", function(a)  print(a) end )
	brown} fox jumped {over} the lazy {dog

	
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.len~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.len (s)					--	Receives a string and returns its length. The empty string "" has length 0. Embedded zeros are counted, so "a\000bc\000" has length 5.
s:len()						--	Return the length of the string passed. 
--example
	> = string.len("Lua")
	3
	> = string.len("")
	0
	> = string.len("Lua\000user")   -- Lua strings are 8 bytes pure so \000 does not terminate
	8

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.lower~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.lower (s)				-- Receives a string and returns a copy of this string with all uppercase letters changed to lowercase. All other characters are left unchanged. The definition of what an uppercase letter is depends on the current locale. 
s:lower()					-- Make uppercase characters lower case.
--example
	> = string.lower("Hello, Lua user!")
	hello, lua user!
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.match~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.match (s, pattern [, init])
s:match(pattern [, index])		--	Extract substrings by matching patterns. 
--example
	> = string.match("I have 2 questions for you.", "%d+ %a+")
	2 questions

	> = string.format("%d, %q", string.match("I have 2 questions for you.", "(%d+) (%a+)"))
	2, "questions"
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.rep~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.rep (s, n [, sep])			--	Returns a string that is the concatenation of n copies of the string s separated by the string sep. The default value for sep is the empty string (that is, no separator). 
s:rep(n)					--	Generate a string which is n copies of the string passed concatenated together. 
--example
	> = string.rep("Lua ",5)
	Lua Lua Lua Lua Lua
	> = string.rep("Lua\n",3)
	Lua
	Lua
	Lua
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.reverse~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.reverse (s)					--	Returns a string that is the string s reversed. 
s:reverse()						--	Reverses a string.
--example
    > = string.reverse("lua")
    aul

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.sub~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.sub (s, i [, j])
s:sub(i [,j])
--example
	> = string.sub("Hello Lua user", 7)      -- from character 7 including 7 until the end
	Lua user
	> = string.sub("Hello Lua user", 7, 9)   -- from character 7 until and including 9
	Lua
	> = string.sub("Hello Lua user", -8)     -- 8 from the end until the end
	Lua user
	> = string.sub("Hello Lua user", -8, 9)  -- 8 from the end until 9 from the start
	Lua
	> = string.sub("Hello Lua user", -8, -6) -- 8 from the end until 6 from the end
	Lua

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string.upper~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~--
string.upper (s)
s:upper()	--	Make all the lower case characters upper case.
--example
    > = string.upper("Hello, Lua user!")
    HELLO, LUA USER!


--Reference Websites
--http://lua-users.org/wiki/StringLibraryTutorial

-------------------------- 6.4.1 – Patterns
Character Class:
	x: (where x is not one of the magic characters ^$()%.[]*+-?) represents the character x itself.
	.: (a dot) represents all characters.
	%a: represents all letters.
	%c: represents all control characters.
	%d: represents all digits.
	%g: represents all printable characters except space.
	%l: represents all lowercase letters.
	%p: represents all punctuation characters.
	%s: represents all space characters.
	%u: represents all uppercase letters.
	%w: represents all alphanumeric characters.
	%x: represents all hexadecimal digits.
	%x: (where x is any non-alphanumeric character) represents the character x.

------------------------------------------------------------- 6.5 – Table Manipulation -----------------------------------------------------------------
-- reference website  : https://www.lua.org/manual/5.2/manual.html#6.5 
-- Chapter 6.5
---------------------------------------------------------------------------------------------------------------------------------------------------------	
table.concat (list [, sep [, i [, j]]])
	table.concat(table_name, ";")					--	table.concat (table [, sep [, i [, j]]]) --Concatenates the strings in the tables based on the parameters given. See example for detail.

table.insert (list, [pos,] value)
	table.insert(table_name, value)					--	table.insert (table, [pos,] value)		--Inserts a value into the table at specified position.
	table.insert(table_name, key, value)			-- 	table.insert (table, [pos,] value)		--Inserts a value into the table at specified position.

table.pack (???)			-- Returns a new table with all parameters stored into keys 1, 2, etc. and with a field "n" with the total number of parameters. Note that the resulting table may not be a sequence. 
		Example : local WS2812 = ...		-- Obtain a sample value from somewhere

table.remove (list [, pos])	
	table.remove(table_name, value)					--	table.remove (table [, pos])			--Removes the value from the table.
	table.remove(table_name, key, value)			--	table.remove (table [, pos])			--Removes the value from the table.

--table.maxn
	table.maxn (table)								--	Returns the largest numeric index.

table.sort (list [, comp])
	table.sort (table [, comp])						--	Sorts the table based on optional comparator argument.

table.unpack (list [, i [, j]])

--reference Websites
	-- http://lua-users.org/wiki/TablesTutorial
	-- https://www.tutorialspoint.com/lua/lua_tables.htm

---------------------------------------------------------------------------------------------------------------------------------------------------------			
------------------------------------------------------------- 6.7 – Bitwise Operations --------------------------------------------------------------------
-- reference website  : https://www.lua.org/manual/5.2/manual.html#6.5 
-- Chapter 6.5
---------------------------------------------------------------------------------------------------------------------------------------------------------	
bit32.arshift (x, disp)

bit32.band (???)	-- Returns the bitwise and of its operands. 
	bit.band(x1[,x2...])  -- bitwise and of x1, x2, ...

bit32.bnot (x)			--	Returns the bitwise negation of x. For any integer x, the following identity holds:
	Ex; assert(bit32.bnot(x) == (-1 - x) % 2^32)

bit32.bor (???)		--	Returns the bitwise or of its operands.
	
bit32.btest (???)	--	Returns a boolean signaling whether the bitwise and of its operands is different from zero.

bit32.bxor (???)	--	Returns the bitwise exclusive or of its operands. 

bit32.extract (n, field [, width])

bit32.replace (n, v, field [, width])		-- Returns a copy of n with the bits field to field + width - 1 replaced by the value v. See bit32.extract for details about field and width. 

bit32.lrotate (x, disp)

bit32.lshift (x, disp)

bit32.rrotate (x, disp)

bit32.rshift (x, disp)

--[[
BitWise Operators (Can only used on integrals, no floats and doubles)
	&	AND
	|	OR
	^	XOR
	<<	LEFT SHIFT
	>>	RIGHT SHIFT
	~	ONE'S COMPLEMENT
	
	bit.bnot(x)           -- bitwise not of x
	bit.band(x1[,x2...])  -- bitwise and of x1, x2, ...
	bit.bor(x1[,x2...])   -- bitwise or of x1, x2, ...
	bit.bxor(x1[,x2...])  -- bitwise xor of x1, x2, ...
	bit.lshift(x, n)      -- left-shift of x by n bits
	bit.rshift(x, n)      -- logical right-shift of x by n bits
	
Examples
	&	AND
			x = 193;			/*1100 0001*/
			y = x & 0xf0;		/*1111 0000*/
			y = 192;			/*1100 0000*/
	|	OR
			x = 193;			/*1100 0001*/
			y = x | 0xf0;		/*1111 0000*/
			y = 241;			/*1111 0001*/
	^	XOR
			x = 193;			/*1100 0001*/
			y = x ^ 0xf0;		/*1111 0000*/
			y = 62;				/*0011 0001*/
	<<	LEFT SHIFT
			x = 193;			/*1100 0001*/
			y = x << 2;
			y = 4;				/*0000 0100*/
	>>	RIGHT SHIFT
			x = 193;			/*1100 0001*/
			y = x >> 2;			
			y = 48;				/*0011 0000*/
	~	ONE'S COMPLEMENT						(Unary Operator)
			x = 193;			/*1100 0001*/
			y = ~x;				/*0011 1110*/
y = 62; /*0011 1110*/

]]--


--Reference and Usefull Website for lua
	-- https://www.lua.org/
	--https://spin.atomicobject.com/2013/02/08/bit-banding/


------------------------------------------------------------- 6.8 – Input and Output Facilities -----------------------------------------------------------------
-- reference website  : https://www.lua.org/manual/5.2/manual.html#6.5 
-- Chapter 6.8
---------------------------------------------------------------------------------------------------------------------------------------------------------	
io.close ([file])		--	Equivalent to file:close(). Without a file, closes the default output file. 

io.flush ()				--	Equivalent to io.output():flush().

io.input ([file])

io.lines ([filename ???])

io.open (filename [, mode])
		
    "r": read mode (the default);
    "w": write mode;
    "a": append mode;
    "r+": update mode, all previous data is preserved;
    "w+": update mode, all previous data is erased;
    "a+": append update mode, previous data is preserved, writing is only allowed at the end of file.

io.output ([file])		-- Similar to io.input, but operates over the default output file. 

io.popen (prog [, mode])

io.read (???)			--	Equivalent to io.input():read(???). 

io.tmpfile ()			--	Returns a handle for a temporary file. This file is opened in update mode and it is automatically removed when the program ends.

io.type (obj)

io.write (???)		--	Equivalent to io.output():write(???). 

file:close ()

file:flush ()		--	Saves any written data to file.

file:lines (???)

file:read (???)

file:seek ([whence [, offset]])

file:setvbuf (mode [, size])

file:write (???)


------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------- for loop in Lua -----------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------------------------	
--	1. Numeric progression
		syntax :     for variable = from_exp , to_exp [, step_exp] do block end 
--	2. Iterators	
		syntax :	for var {, var} in explist do block end 
		--	1. pairs(table)
				syntax :	for key,value in pairs(t) do print(key,value) end
		--	2. iparis(table)
				syntax	:	for index,value in ipairs(t) do print(index,value) end
		--	3. next()
				syntax	:	next(table_name) or next(table_name[,index])
				syntax	:	for key,value in next,t,nil do print(key,value) end
		--	4. io.lines()
				syntax	:	for line in io.lines("my.txt") do print(line) end
		--	5. file:lines()
				syntax	:	for line in file:lines() do print(line) end
				
---------------------------------------------------------------------------------------------------------------------------------------------------------

---------------------------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------------------------
		
		
------------------------------------------------------------- 9.1 – Coroutine Basics  ---------------------------------------------------------------
-- reference website  : https://www.lua.org/pil/9.1.html
-- Chapter 9.1
---------------------------------------------------------------------------------------------------------------------------------------------------------
three different states: suspended, running & dead.
	When we create a coroutine, it starts in the suspended state. That means that a coroutine does not run its body automatically when we create it. We can check the state of a coroutine with the status function: 
	Exmple
		co = coroutine.create(function ()
				   print("hi")
				 end)	
		print(co)   --> thread: 0x8071d98

		
		------------------------------------------------------------- 20.1 – Pattern-Matching Functions  ---------------------------------------------------------------
-- reference website  :https://www.lua.org/pil/20.1.html
-- Chapter 20.1
---------------------------------------------------------------------------------------------------------------------------------------------------------
string.find (string Find)
string.gsub (Global Substitution)
string.gfind (Global Find)
			
