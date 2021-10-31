     AREA     largestinarr, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0,#02          ;counter value for array of 3 nos.
		MOV R1, #0x20000000 ;starting address of Array elements
		MOV R2,#0x012
		MOV R3,#0x088
		MOV R4,#0x045
		STR R2,[R1]
		ADD R1,#0x4
		STR R3,[R1] ;store in consecutive locations to mimic an array  
		ADD R1,#0x4
		STR R4,[R1]
		MOV R1, #0x20000000
		LDR R5, [R1] ;Get first data and assume it is the largest
		
LOOP	ADD R1,R1,#0x4
        LDR R6,[R1] ;get next data
		CMP R5,R6
		BGT LOOP1
		MOV R5,R6  ;R6 is larger so store it in R5...
		
LOOP1   SUBS R0,R0,#01  ;Decrement the Counter
		CMP R0,#00
		BNE LOOP
		MOV R0,R5
		BL printMsg
stop    B stop ; stop program
	 ENDFUNC
	 END 
		
		
		
		
