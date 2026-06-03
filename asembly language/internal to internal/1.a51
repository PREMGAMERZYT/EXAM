ORG 0000h
	mov r0,#50h
	 mov r1,#60h
	 mov a,@r0
	 mov r3,a
	 inc r0
	 back:mov a,@r0
	 mov @r1,a
	 inc r0
	 inc r1
	 djnz r3,back
	 loop:sjmp loop
	end