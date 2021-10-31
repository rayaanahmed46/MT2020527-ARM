     AREA     fib, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
     ENTRY 
__main  FUNCTION
		MOV R9, #05 ;R0 will store number of elements of Fibonacci series to print
		MOV R1, #00;1st value in the series
		MOV R0,R1
		MOV R2, #01 ;2nd value in the series
		MOV R1,R2	
		BL printMsg2p ;Print first 2 values of the series
		MOV R1, #00
		MOV R2, #01
		SUB R5,R9,#02 
LOOP	MOV R6,R2
		ADD R2,R1,R2
		MOV R4,R2
		MOV R0,R2
		BL printMsg  ;Print next elements after 1st 2 elements of the Series
		MOV R2,R4
		MOV R1,R6 
		SUB R5,#01   ;Decrement Counter
		CMP R5,#00
		BNE LOOP
stop    B stop ; stop program
	ENDFUNC
	END 
		
		
		
		
