     AREA     eveninarr, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0, #00 ;R0 will store number of even numbers in Array
		MOV R1, #03 ;R1 is the counter
		MOV R2, #0x20000000 ;starting address of Array elements
		MOV R3,#0x018
		MOV R4,#0x034
		MOV R5,#0x052
		STR R3,[R2]
		ADD R2,#0x4
		STR R4,[R2] ;store in consecutive locations to mimic an array 
		ADD R2,#0x4
		STR R5,[R2]
		MOV R2, #0x20000000
		LDR R6,[R2]  ;get first data
		
LOOP	TST R6,#01
		BNE LOOP2
		ADD R0,#01 ;Increment count of even nos.
LOOP2 	ADD R2,#0x4 ;Increment offset by 4
		LDR R6,[R2]
		SUBS R1,R1,#01  ;Decrement the Counter
		CMP R1,#00
		BNE LOOP	
		BL printMsg
stop    B stop ; stop program
	ENDFUNC
	END 
		
		
		
		
