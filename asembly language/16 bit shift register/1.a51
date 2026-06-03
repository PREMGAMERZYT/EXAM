org 0000h
	clr c
	mov dptr,#1234h
	mov a,dpl
	rlc a
	mov dpl,a
	mov a,dph
	rlc a
	mov dph,a
	loop:sjmp loop
	end