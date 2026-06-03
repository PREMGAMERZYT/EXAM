ORG 0000h
	
	mov r0,#51h
	mov r1,#02h
	mov a,50h
	add a,r1
	mov @r0,a
	loop:sjmp loop
	end
	