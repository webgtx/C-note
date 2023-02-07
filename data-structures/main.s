	.file	"main.c"
	.text
	.section	.rodata
	.align 8
.LC2:
	.string	"Hero stats\n Name: %s\n LVL: %d\n HP:%.1f\n"
	.align 8
.LC3:
	.string	"NPC stats\n Name: %s\n LVL: %d\n HP:%.1f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	leaq	-32(%rbp), %rax
	movl	$1802398028, (%rax)
	movb	$0, 4(%rax)
	movl	$5, -20(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -16(%rbp)
	movq	$1330465090, -64(%rbp)
	movl	$0, -56(%rbp)
	movl	$20, -52(%rbp)
	movss	.LC1(%rip), %xmm0
	movss	%xmm0, -48(%rbp)
	movss	-16(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movq	%xmm1, %rcx
	movl	-20(%rbp), %edx
	leaq	-32(%rbp), %rax
	movq	%rcx, %xmm0
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	movss	-48(%rbp), %xmm0
	pxor	%xmm2, %xmm2
	cvtss2sd	%xmm0, %xmm2
	movq	%xmm2, %rcx
	movl	-52(%rbp), %edx
	leaq	-64(%rbp), %rax
	movq	%rcx, %xmm0
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$1, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1120403456
	.align 4
.LC1:
	.long	1128792064
	.ident	"GCC: (GNU) 12.2.1 20221121 (Red Hat 12.2.1-4)"
	.section	.note.GNU-stack,"",@progbits
