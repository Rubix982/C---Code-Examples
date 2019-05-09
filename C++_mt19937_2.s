	.file	"C++_mt19937_2.cpp"
	.text
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.section	.text$_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv
	.def	__ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv;	.scl	2;	.type	32;	.endef
__ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv:
LFB2927:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE2927:
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB2950:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$2580, %esp
	call	___main
	call	__ZNSt6chrono3_V212system_clock3nowEv
	movl	%eax, -24(%ebp)
	movl	%edx, -20(%ebp)
	leal	-24(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIxSt5ratioILx1ELx1000000000EEEEE16time_since_epochEv
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
	leal	-32(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv
	movl	%eax, -40(%ebp)
	movl	%edx, -36(%ebp)
	leal	-2540(%ebp), %eax
	leal	-40(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEC1IxvEERT_
	subl	$4, %esp
	leal	-2560(%ebp), %eax
	fldl	LC0
	fstpl	8(%esp)
	fldz
	fstpl	(%esp)
	movl	%eax, %ecx
	call	__ZNSt25uniform_real_distributionIdEC1Edd
	subl	$16, %esp
	movl	$0, -12(%ebp)
L5:
	cmpl	$9, -12(%ebp)
	ja	L4
	leal	-2560(%ebp), %eax
	leal	-2540(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_
	subl	$4, %esp
	fstpl	(%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEd
	subl	$8, %esp
	movl	$32, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	addl	$1, -12(%ebp)
	jmp	L5
L4:
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	movl	$__ZSt3cin, %ecx
	call	__ZNSi3getEv
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE2950:
	.section	.text$_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIxSt5ratioILx1ELx1000000000EEEEE16time_since_epochEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIxSt5ratioILx1ELx1000000000EEEEE16time_since_epochEv
	.def	__ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIxSt5ratioILx1ELx1000000000EEEEE16time_since_epochEv;	.scl	2;	.type	32;	.endef
__ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIxSt5ratioILx1ELx1000000000EEEEE16time_since_epochEv:
LFB3193:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3193:
	.section	.text$_ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEC1IxvEERT_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEC1IxvEERT_
	.def	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEC1IxvEERT_;	.scl	2;	.type	32;	.endef
__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEC1IxvEERT_:
LFB3223:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE4seedEj
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE3223:
	.section	.text$_ZNSt25uniform_real_distributionIdEC1Edd,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt25uniform_real_distributionIdEC1Edd
	.def	__ZNSt25uniform_real_distributionIdEC1Edd;	.scl	2;	.type	32;	.endef
__ZNSt25uniform_real_distributionIdEC1Edd:
LFB3226:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, -24(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -20(%ebp)
	movl	16(%ebp), %eax
	movl	%eax, -32(%ebp)
	movl	20(%ebp), %eax
	movl	%eax, -28(%ebp)
	movl	-12(%ebp), %eax
	fldl	-32(%ebp)
	fstpl	8(%esp)
	fldl	-24(%ebp)
	fstpl	(%esp)
	movl	%eax, %ecx
	call	__ZNSt25uniform_real_distributionIdE10param_typeC1Edd
	subl	$16, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$16
	.cfi_endproc
LFE3226:
	.section	.text$_ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_
	.def	__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_;	.scl	2;	.type	32;	.endef
__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_:
LFB3227:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_RKNS0_10param_typeE
	subl	$8, %esp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE3227:
	.section	.text$_ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE4seedEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE4seedEj
	.def	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE4seedEj;	.scl	2;	.type	32;	.endef
__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE4seedEj:
LFB3354:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt8__detail5__modIjLj0ELj1ELj0EEET_S1_
	movl	%eax, %edx
	movl	-28(%ebp), %eax
	movl	%edx, (%eax)
	movl	$1, -12(%ebp)
L15:
	cmpl	$623, -12(%ebp)
	ja	L14
	movl	-12(%ebp), %eax
	leal	-1(%eax), %edx
	movl	-28(%ebp), %eax
	movl	(%eax,%edx,4), %eax
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	shrl	$30, %eax
	xorl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	imull	$1812433253, %eax, %eax
	movl	%eax, -16(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt8__detail5__modIjLj624ELj1ELj0EEET_S1_
	addl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt8__detail5__modIjLj0ELj1ELj0EEET_S1_
	movl	%eax, %ecx
	movl	-28(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%ecx, (%eax,%edx,4)
	addl	$1, -12(%ebp)
	jmp	L15
L14:
	movl	-28(%ebp), %eax
	movl	$624, 2496(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE3354:
	.section	.text$_ZNSt25uniform_real_distributionIdE10param_typeC1Edd,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt25uniform_real_distributionIdE10param_typeC1Edd
	.def	__ZNSt25uniform_real_distributionIdE10param_typeC1Edd;	.scl	2;	.type	32;	.endef
__ZNSt25uniform_real_distributionIdE10param_typeC1Edd:
LFB3357:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -4(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	16(%ebp), %eax
	movl	%eax, -24(%ebp)
	movl	20(%ebp), %eax
	movl	%eax, -20(%ebp)
	movl	-4(%ebp), %eax
	fldl	-16(%ebp)
	fstpl	(%eax)
	movl	-4(%ebp), %eax
	fldl	-24(%ebp)
	fstpl	8(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$16
	.cfi_endproc
LFE3357:
	.section	.text$_ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_RKNS0_10param_typeE,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_RKNS0_10param_typeE
	.def	__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_RKNS0_10param_typeE;	.scl	2;	.type	32;	.endef
__ZNSt25uniform_real_distributionIdEclISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEdRT_RKNS0_10param_typeE:
LFB3358:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$72, %esp
	movl	%ecx, -28(%ebp)
	leal	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEC1ERS2_
	subl	$4, %esp
	leal	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEclEv
	fstpl	-40(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt25uniform_real_distributionIdE10param_type1bEv
	fstpl	-48(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt25uniform_real_distributionIdE10param_type1aEv
	fsubrl	-48(%ebp)
	fmull	-40(%ebp)
	fstpl	-40(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt25uniform_real_distributionIdE10param_type1aEv
	faddl	-40(%ebp)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE3358:
	.section	.text$_ZNSt8__detail5__modIjLj0ELj1ELj0EEET_S1_,"x"
	.linkonce discard
	.globl	__ZNSt8__detail5__modIjLj0ELj1ELj0EEET_S1_
	.def	__ZNSt8__detail5__modIjLj0ELj1ELj0EEET_S1_;	.scl	2;	.type	32;	.endef
__ZNSt8__detail5__modIjLj0ELj1ELj0EEET_S1_:
LFB3406:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt8__detail4_ModIjLj0ELj1ELj0ELb1ELb0EE6__calcEj
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3406:
	.section	.text$_ZNSt8__detail5__modIjLj624ELj1ELj0EEET_S1_,"x"
	.linkonce discard
	.globl	__ZNSt8__detail5__modIjLj624ELj1ELj0EEET_S1_
	.def	__ZNSt8__detail5__modIjLj624ELj1ELj0EEET_S1_;	.scl	2;	.type	32;	.endef
__ZNSt8__detail5__modIjLj624ELj1ELj0EEET_S1_:
LFB3407:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt8__detail4_ModIjLj624ELj1ELj0ELb1ELb1EE6__calcEj
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3407:
	.section	.text$_ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEC1ERS2_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEC1ERS2_
	.def	__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEC1ERS2_;	.scl	2;	.type	32;	.endef
__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEC1ERS2_:
LFB3410:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE3410:
	.section	.text$_ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEclEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEclEv
	.def	__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEclEv;	.scl	2;	.type	32;	.endef
__ZNSt8__detail8_AdaptorISt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEdEclEv:
LFB3411:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	__ZSt18generate_canonicalIdLj53ESt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEET_RT1_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3411:
	.section	.text$_ZNKSt25uniform_real_distributionIdE10param_type1bEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt25uniform_real_distributionIdE10param_type1bEv
	.def	__ZNKSt25uniform_real_distributionIdE10param_type1bEv;	.scl	2;	.type	32;	.endef
__ZNKSt25uniform_real_distributionIdE10param_type1bEv:
LFB3412:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	fldl	8(%eax)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3412:
	.section	.text$_ZNKSt25uniform_real_distributionIdE10param_type1aEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt25uniform_real_distributionIdE10param_type1aEv
	.def	__ZNKSt25uniform_real_distributionIdE10param_type1aEv;	.scl	2;	.type	32;	.endef
__ZNKSt25uniform_real_distributionIdE10param_type1aEv:
LFB3413:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	fldl	(%eax)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3413:
	.section	.text$_ZNSt8__detail4_ModIjLj0ELj1ELj0ELb1ELb0EE6__calcEj,"x"
	.linkonce discard
	.globl	__ZNSt8__detail4_ModIjLj0ELj1ELj0ELb1ELb0EE6__calcEj
	.def	__ZNSt8__detail4_ModIjLj0ELj1ELj0ELb1ELb0EE6__calcEj;	.scl	2;	.type	32;	.endef
__ZNSt8__detail4_ModIjLj0ELj1ELj0ELb1ELb0EE6__calcEj:
LFB3456:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3456:
	.section	.text$_ZNSt8__detail4_ModIjLj624ELj1ELj0ELb1ELb1EE6__calcEj,"x"
	.linkonce discard
	.globl	__ZNSt8__detail4_ModIjLj624ELj1ELj0ELb1ELb1EE6__calcEj
	.def	__ZNSt8__detail4_ModIjLj624ELj1ELj0ELb1ELb1EE6__calcEj;	.scl	2;	.type	32;	.endef
__ZNSt8__detail4_ModIjLj624ELj1ELj0ELb1ELb1EE6__calcEj:
LFB3457:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %ecx
	movl	%ecx, %eax
	shrl	$4, %eax
	movl	$440509467, %edx
	mull	%edx
	movl	%edx, %eax
	shrl	$2, %eax
	imull	$624, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3457:
	.section	.text$_ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE3minEv,"x"
	.linkonce discard
	.globl	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE3minEv
	.def	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE3minEv;	.scl	2;	.type	32;	.endef
__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE3minEv:
LFB3461:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	$0, %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3461:
	.section	.text$_ZSt18generate_canonicalIdLj53ESt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEET_RT1_,"x"
	.linkonce discard
	.globl	__ZSt18generate_canonicalIdLj53ESt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEET_RT1_
	.def	__ZSt18generate_canonicalIdLj53ESt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEET_RT1_;	.scl	2;	.type	32;	.endef
__ZSt18generate_canonicalIdLj53ESt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEET_RT1_:
LFB3458:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$100, %esp
	.cfi_offset 3, -12
	movl	$53, -40(%ebp)
	fldt	LC3
	fstpt	-52(%ebp)
	movl	$32, -56(%ebp)
	movl	$2, -60(%ebp)
	fldz
	fstpl	-24(%ebp)
	fld1
	fstpl	-32(%ebp)
	movl	$2, -36(%ebp)
L38:
	cmpl	$0, -36(%ebp)
	je	L37
	movl	8(%ebp), %ecx
	call	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEclEv
	movl	%eax, %ebx
	call	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE3minEv
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -88(%ebp)
	movl	$0, -84(%ebp)
	fildq	-88(%ebp)
	fstpl	-80(%ebp)
	fldl	-80(%ebp)
	fmull	-32(%ebp)
	fldl	-24(%ebp)
	faddp	%st, %st(1)
	fstpl	-24(%ebp)
	fldl	-32(%ebp)
	fldt	LC3
	fmulp	%st, %st(1)
	fstpl	-32(%ebp)
	subl	$1, -36(%ebp)
	jmp	L38
L37:
	fldl	-24(%ebp)
	fdivl	-32(%ebp)
	fstpl	-16(%ebp)
	fld1
	fldl	-16(%ebp)
	fcompp
	fnstsw	%ax
	sahf
	setnb	%al
	movzbl	%al, %eax
	testl	%eax, %eax
	je	L39
	fldz
	fstpl	8(%esp)
	fld1
	fstpl	(%esp)
	call	_nextafter
	fstpl	-16(%ebp)
L39:
	fldl	-16(%ebp)
	addl	$100, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3458:
	.section	.text$_ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEclEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEclEv
	.def	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEclEv;	.scl	2;	.type	32;	.endef
__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEclEv:
LFB3495:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	2496(%eax), %eax
	cmpl	$623, %eax
	jbe	L42
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE11_M_gen_randEv
L42:
	movl	-28(%ebp), %eax
	movl	2496(%eax), %eax
	leal	1(%eax), %ecx
	movl	-28(%ebp), %edx
	movl	%ecx, 2496(%edx)
	movl	-28(%ebp), %edx
	movl	(%edx,%eax,4), %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	shrl	$11, %eax
	xorl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	sall	$7, %eax
	andl	$-1658038656, %eax
	xorl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	sall	$15, %eax
	andl	$-272236544, %eax
	xorl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	shrl	$18, %eax
	xorl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3495:
	.section	.text$_ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE11_M_gen_randEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE11_M_gen_randEv
	.def	__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE11_M_gen_randEv;	.scl	2;	.type	32;	.endef
__ZNSt23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EE11_M_gen_randEv:
LFB3520:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$36, %esp
	movl	%ecx, -36(%ebp)
	movl	$-2147483648, -12(%ebp)
	movl	$2147483647, -16(%ebp)
	movl	$0, -4(%ebp)
L48:
	cmpl	$226, -4(%ebp)
	ja	L45
	movl	-36(%ebp), %eax
	movl	-4(%ebp), %edx
	movl	(%eax,%edx,4), %eax
	andl	$-2147483648, %eax
	movl	%eax, %ecx
	movl	-4(%ebp), %eax
	leal	1(%eax), %edx
	movl	-36(%ebp), %eax
	movl	(%eax,%edx,4), %eax
	andl	$2147483647, %eax
	orl	%ecx, %eax
	movl	%eax, -20(%ebp)
	movl	-4(%ebp), %eax
	leal	397(%eax), %edx
	movl	-36(%ebp), %eax
	movl	(%eax,%edx,4), %eax
	movl	-20(%ebp), %edx
	shrl	%edx
	xorl	%eax, %edx
	movl	-20(%ebp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	L46
	movl	$-1727483681, %eax
	jmp	L47
L46:
	movl	$0, %eax
L47:
	xorl	%edx, %eax
	movl	%eax, %ecx
	movl	-36(%ebp), %eax
	movl	-4(%ebp), %edx
	movl	%ecx, (%eax,%edx,4)
	addl	$1, -4(%ebp)
	jmp	L48
L45:
	movl	$227, -8(%ebp)
L52:
	cmpl	$622, -8(%ebp)
	ja	L49
	movl	-36(%ebp), %eax
	movl	-8(%ebp), %edx
	movl	(%eax,%edx,4), %eax
	andl	$-2147483648, %eax
	movl	%eax, %ecx
	movl	-8(%ebp), %eax
	leal	1(%eax), %edx
	movl	-36(%ebp), %eax
	movl	(%eax,%edx,4), %eax
	andl	$2147483647, %eax
	orl	%ecx, %eax
	movl	%eax, -24(%ebp)
	movl	-8(%ebp), %eax
	leal	-227(%eax), %edx
	movl	-36(%ebp), %eax
	movl	(%eax,%edx,4), %eax
	movl	-24(%ebp), %edx
	shrl	%edx
	xorl	%eax, %edx
	movl	-24(%ebp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	L50
	movl	$-1727483681, %eax
	jmp	L51
L50:
	movl	$0, %eax
L51:
	xorl	%edx, %eax
	movl	%eax, %ecx
	movl	-36(%ebp), %eax
	movl	-8(%ebp), %edx
	movl	%ecx, (%eax,%edx,4)
	addl	$1, -8(%ebp)
	jmp	L52
L49:
	movl	-36(%ebp), %eax
	movl	2492(%eax), %eax
	andl	$-2147483648, %eax
	movl	%eax, %edx
	movl	-36(%ebp), %eax
	movl	(%eax), %eax
	andl	$2147483647, %eax
	orl	%edx, %eax
	movl	%eax, -28(%ebp)
	movl	-36(%ebp), %eax
	movl	1584(%eax), %eax
	movl	-28(%ebp), %edx
	shrl	%edx
	xorl	%eax, %edx
	movl	-28(%ebp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	L53
	movl	$-1727483681, %eax
	jmp	L54
L53:
	movl	$0, %eax
L54:
	xorl	%eax, %edx
	movl	-36(%ebp), %eax
	movl	%edx, 2492(%eax)
	movl	-36(%ebp), %eax
	movl	$0, 2496(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3520:
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB3532:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3532:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB3531:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L58
	cmpl	$65535, 12(%ebp)
	jne	L58
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L58:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3531:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB3533:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3533:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.section .rdata,"dr"
	.align 8
LC0:
	.long	0
	.long	1076101120
	.align 16
LC3:
	.long	0
	.long	-2147483648
	.long	16415
	.ident	"GCC: (MinGW.org GCC-8.2.0-3) 8.2.0"
	.def	__ZNSt6chrono3_V212system_clock3nowEv;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEd;	.scl	2;	.type	32;	.endef
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	__ZNSi3getEv;	.scl	2;	.type	32;	.endef
	.def	_nextafter;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
