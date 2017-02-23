#include <stdio.h>
int main()
{
	for(int ascii=0; ascii<=255; ascii++)
	{
		printf("ascii value %d of character : %c \n", ascii, ascii);
		
	}
}

/*
int main ()
{
   int ch;

   for( ch = 1 ; ch <= 255; ch++ )
   {
      printf("ASCII value = %d, Character = %c\n", ch , ch );
   }

   return(0);
}

/* Output is

ASCII value = 1, Character = 
ASCII value = 2, Character = 
ASCII value = 3, Character = 
ASCII value = 4, Character = 
ASCII value = 5, Character = 
ASCII value = 6, Character = 
ASCII value = 7, Character =
ASCII value = 8, Character =
ASCII value = 9, Character =
ASCII value = 10, Character =

ASCII value = 11, Character = 
ASCII value = 12, Character = 
ASCII value = 13, Character =
ASCII value = 14, Character = 
ASCII value = 15, Character = 
ASCII value = 16, Character = 
ASCII value = 17, Character = 
ASCII value = 18, Character = 
ASCII value = 19, Character = 
ASCII value = 20, Character = 
ASCII value = 21, Character = 
ASCII value = 22, Character = 
ASCII value = 23, Character = 
ASCII value = 24, Character = 
ASCII value = 25, Character = 
ASCII value = 26, Character = 
ASCII value = 27, Character = 
ASCII value = 28, Character = 
ASCII value = 29, Character = 
ASCII value = 30, Character = 
ASCII value = 31, Character = 
ASCII value = 32, Character =
ASCII value = 33, Character = !
ASCII value = 34, Character = "
ASCII value = 35, Character = #
ASCII value = 36, Character = $
ASCII value = 37, Character = %
ASCII value = 38, Character = &
ASCII value = 39, Character = '
ASCII value = 40, Character = (
ASCII value = 41, Character = )
ASCII value = 42, Character = *
ASCII value = 43, Character = +
ASCII value = 44, Character = ,
ASCII value = 45, Character = -
ASCII value = 46, Character = .
ASCII value = 47, Character = /
ASCII value = 48, Character = 0
ASCII value = 49, Character = 1
ASCII value = 50, Character = 2
ASCII value = 51, Character = 3
ASCII value = 52, Character = 4
ASCII value = 53, Character = 5
ASCII value = 54, Character = 6
ASCII value = 55, Character = 7
ASCII value = 56, Character = 8
ASCII value = 57, Character = 9
ASCII value = 58, Character = :
ASCII value = 59, Character = ;
ASCII value = 60, Character = <
ASCII value = 61, Character = =
ASCII value = 62, Character = >
ASCII value = 63, Character = ?
ASCII value = 64, Character = @
ASCII value = 65, Character = A
ASCII value = 66, Character = B
ASCII value = 67, Character = C
ASCII value = 68, Character = D
ASCII value = 69, Character = E
ASCII value = 70, Character = F
ASCII value = 71, Character = G
ASCII value = 72, Character = H
ASCII value = 73, Character = I
ASCII value = 74, Character = J
ASCII value = 75, Character = K
ASCII value = 76, Character = L
ASCII value = 77, Character = M
ASCII value = 78, Character = N
ASCII value = 79, Character = O
ASCII value = 80, Character = P
ASCII value = 81, Character = Q
ASCII value = 82, Character = R
ASCII value = 83, Character = S
ASCII value = 84, Character = T
ASCII value = 85, Character = U
ASCII value = 86, Character = V
ASCII value = 87, Character = W
ASCII value = 88, Character = X
ASCII value = 89, Character = Y
ASCII value = 90, Character = Z
ASCII value = 91, Character = [
ASCII value = 92, Character = \
ASCII value = 93, Character = ]
ASCII value = 94, Character = ^
ASCII value = 95, Character = _
ASCII value = 96, Character = `
ASCII value = 97, Character = a
ASCII value = 98, Character = b
ASCII value = 99, Character = c
ASCII value = 100, Character = d
ASCII value = 101, Character = e
ASCII value = 102, Character = f
ASCII value = 103, Character = g
ASCII value = 104, Character = h
ASCII value = 105, Character = i
ASCII value = 106, Character = j
ASCII value = 107, Character = k
ASCII value = 108, Character = l
ASCII value = 109, Character = m
ASCII value = 110, Character = n
ASCII value = 111, Character = o
ASCII value = 112, Character = p
ASCII value = 113, Character = q
ASCII value = 114, Character = r
ASCII value = 115, Character = s
ASCII value = 116, Character = t
ASCII value = 117, Character = u
ASCII value = 118, Character = v
ASCII value = 119, Character = w
ASCII value = 120, Character = x
ASCII value = 121, Character = y
ASCII value = 122, Character = z
ASCII value = 123, Character = {
ASCII value = 124, Character = |
ASCII value = 125, Character = }
ASCII value = 126, Character = ~
ASCII value = 127, Character = 
ASCII value = 128, Character = Ç
ASCII value = 129, Character = ü
ASCII value = 130, Character = é
ASCII value = 131, Character = â
ASCII value = 132, Character = ä
ASCII value = 133, Character = à
ASCII value = 134, Character = å
ASCII value = 135, Character = ç
ASCII value = 136, Character = ê
ASCII value = 137, Character = ë
ASCII value = 138, Character = è
ASCII value = 139, Character = ï
ASCII value = 140, Character = î
ASCII value = 141, Character = ì
ASCII value = 142, Character = Ä
ASCII value = 143, Character = Å
ASCII value = 144, Character = É
ASCII value = 145, Character = æ
ASCII value = 146, Character = Æ
ASCII value = 147, Character = ô
ASCII value = 148, Character = ö
ASCII value = 149, Character = ò
ASCII value = 150, Character = û
ASCII value = 151, Character = ù
ASCII value = 152, Character = ÿ
ASCII value = 153, Character = Ö
ASCII value = 154, Character = Ü
ASCII value = 155, Character = ¢
ASCII value = 156, Character = £
ASCII value = 157, Character = ¥
ASCII value = 158, Character = P
ASCII value = 159, Character = ƒ
ASCII value = 160, Character = á
ASCII value = 161, Character = í
ASCII value = 162, Character = ó
ASCII value = 163, Character = ú
ASCII value = 164, Character = ñ
ASCII value = 165, Character = Ñ
ASCII value = 166, Character = ª
ASCII value = 167, Character = º
ASCII value = 168, Character = ¿
ASCII value = 169, Character = ¬
ASCII value = 170, Character = ¬
ASCII value = 171, Character = ½
ASCII value = 172, Character = ¼
ASCII value = 173, Character = ¡
ASCII value = 174, Character = «
ASCII value = 175, Character = »
ASCII value = 176, Character = ¦
ASCII value = 177, Character = ¦
ASCII value = 178, Character = ¦
ASCII value = 179, Character = ¦
ASCII value = 180, Character = ¦
ASCII value = 181, Character = ¦
ASCII value = 182, Character = ¦
ASCII value = 183, Character = +
ASCII value = 184, Character = +
ASCII value = 185, Character = ¦
ASCII value = 186, Character = ¦
ASCII value = 187, Character = +
ASCII value = 188, Character = +
ASCII value = 189, Character = +
ASCII value = 190, Character = +
ASCII value = 191, Character = +
ASCII value = 192, Character = +
ASCII value = 193, Character = -
ASCII value = 194, Character = -
ASCII value = 195, Character = +
ASCII value = 196, Character = -
ASCII value = 197, Character = +
ASCII value = 198, Character = ¦
ASCII value = 199, Character = ¦
ASCII value = 200, Character = +
ASCII value = 201, Character = +
ASCII value = 202, Character = -
ASCII value = 203, Character = -
ASCII value = 204, Character = ¦
ASCII value = 205, Character = -
ASCII value = 206, Character = +
ASCII value = 207, Character = -
ASCII value = 208, Character = -
ASCII value = 209, Character = -
ASCII value = 210, Character = -
ASCII value = 211, Character = +
ASCII value = 212, Character = +
ASCII value = 213, Character = +
ASCII value = 214, Character = +
ASCII value = 215, Character = +
ASCII value = 216, Character = +
ASCII value = 217, Character = +
ASCII value = 218, Character = +
ASCII value = 219, Character = ¦
ASCII value = 220, Character = _
ASCII value = 221, Character = ¦
ASCII value = 222, Character = ¦
ASCII value = 223, Character = ¯
ASCII value = 224, Character = a
ASCII value = 225, Character = ß
ASCII value = 226, Character = G
ASCII value = 227, Character = p
ASCII value = 228, Character = S
ASCII value = 229, Character = s
ASCII value = 230, Character = µ
ASCII value = 231, Character = t
ASCII value = 232, Character = F
ASCII value = 233, Character = T
ASCII value = 234, Character = O
ASCII value = 235, Character = d
ASCII value = 236, Character = 8
ASCII value = 237, Character = f
ASCII value = 238, Character = e
ASCII value = 239, Character = n
ASCII value = 240, Character = =
ASCII value = 241, Character = ±
ASCII value = 242, Character = =
ASCII value = 243, Character = =
ASCII value = 244, Character = (
ASCII value = 245, Character = )
ASCII value = 246, Character = ÷
ASCII value = 247, Character = ˜
ASCII value = 248, Character = °
ASCII value = 249, Character = ·
ASCII value = 250, Character = ·
ASCII value = 251, Character = v
ASCII value = 252, Character = n
ASCII value = 253, Character = ²
ASCII value = 254, Character = ¦
ASCII value = 255, Character =  

--------------------------------
Process exited after 0.766 seconds with return value 0
Press any key to continue . . .
*/
