ORG 0000h

mov r0,#51h
	mov r2,#03h
	mov a,50h
	add a,r2
	mov @r0,a
	
	loop:sjmp loop
	end