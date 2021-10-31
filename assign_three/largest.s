     AREA     largest, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0,#0x20000000
		MOV R1, #0x32 ;These are the 3 numbers among which largest is to be found out..
		MOV R2, #0x91
		MOV R3, #0x46
		STR R1,[R0]     ;STORE these numbers into the memory...
		STR R2,[R0, #0x5]   
		STR R3,[R0, #0x10]
		LDR R4,[R0]		;LOAD the numbers from memory to the Registers..
		LDR R5,[R0, #0x5 ]
		LDR R6,[R0, #0x10]
		MOV R7,R4 ;Assume R4 is the largest...
		CMP R7,R5
		BLT L1 ;if R7<R5 then goto L1 
		B L2
L1		MOV R7,R5 ;store largest in R7..
L2      CMP R7,R6
		BLT RESULT
		B L3
RESULT	MOV R7,R6 ;R6 is largest so store it in R7... 
L3		MOV R0,R7 ;Transfer Final Result to R0 so that the largest number can be printed
		BL printMsg
stop    B stop ; stop program
	ENDFUNC
	END 
		
		
		
		
