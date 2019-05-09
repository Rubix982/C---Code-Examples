	.file	"C++_FormatFlags0.cpp"
	.text
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
	.section	.text$_ZStorSt13_Ios_FmtflagsS_,"x"
	.linkonce discard
	.globl	__ZStorSt13_Ios_FmtflagsS_
	.def	__ZStorSt13_Ios_FmtflagsS_;	.scl	2;	.type	32;	.endef
__ZStorSt13_Ios_FmtflagsS_:
LFB1095:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	orl	12(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1095:
	.section	.text$_ZStoRRSt13_Ios_FmtflagsS_,"x"
	.linkonce discard
	.globl	__ZStoRRSt13_Ios_FmtflagsS_
	.def	__ZStoRRSt13_Ios_FmtflagsS_;	.scl	2;	.type	32;	.endef
__ZStoRRSt13_Ios_FmtflagsS_:
LFB1098:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStorSt13_Ios_FmtflagsS_
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1098:
	.section	.text$_ZNKSt8ios_base5flagsEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt8ios_base5flagsEv
	.def	__ZNKSt8ios_base5flagsEv;	.scl	2;	.type	32;	.endef
__ZNKSt8ios_base5flagsEv:
LFB1125:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	12(%eax), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1125:
	.section	.text$_ZNSt8ios_base4setfESt13_Ios_Fmtflags,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt8ios_base4setfESt13_Ios_Fmtflags
	.def	__ZNSt8ios_base4setfESt13_Ios_Fmtflags;	.scl	2;	.type	32;	.endef
__ZNSt8ios_base4setfESt13_Ios_Fmtflags:
LFB1127:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	12(%eax), %eax
	movl	%eax, -12(%ebp)
	movl	-28(%ebp), %eax
	leal	12(%eax), %edx
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	__ZStoRRSt13_Ios_FmtflagsS_
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE1127:
.lcomm __ZStL8__ioinit,1,1
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1502:
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
	subl	$20, %esp
	call	___main
	call	__Z9showFlagsv
	movl	$1024, 4(%esp)
	movl	$128, (%esp)
	call	__ZStorSt13_Ios_FmtflagsS_
	movl	$4, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStorSt13_Ios_FmtflagsS_
	movl	%eax, (%esp)
	movl	$__ZSt4cout+4, %ecx
	call	__ZNSt8ios_base4setfESt13_Ios_Fmtflags
	subl	$4, %esp
	call	__Z9showFlagsv
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1502:
	.section .rdata,"dr"
LC0:
	.ascii "1 \0"
LC1:
	.ascii "0 \0"
LC2:
	.ascii " \12\0"
	.text
	.globl	__Z9showFlagsv
	.def	__Z9showFlagsv;	.scl	2;	.type	32;	.endef
__Z9showFlagsv:
LFB1503:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$__ZSt4cout+4, %ecx
	call	__ZNKSt8ios_base5flagsEv
	movl	%eax, -16(%ebp)
	movl	$16384, -12(%ebp)
L15:
	cmpl	$0, -12(%ebp)
	je	L12
	movl	-12(%ebp), %eax
	andl	-16(%ebp), %eax
	testl	%eax, %eax
	je	L13
	movl	$LC0, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	L14
L13:
	movl	$LC1, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L14:
	sarl	-12(%ebp)
	jmp	L15
L12:
	movl	$LC2, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1503:
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1976:
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
LFE1976:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1975:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L19
	cmpl	$65535, 12(%ebp)
	jne	L19
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L19:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1975:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB1977:
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
LFE1977:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC-8.2.0-3) 8.2.0"
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
