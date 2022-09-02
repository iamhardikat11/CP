.cfi_startproc # CFI Directive
pushq %rbp     # Save old base pointer
.cfi_def_cfa_offset 16 # CFI Directive
.cfi_offset 6, -16  # CFI Directive
movq $rsp, %rbp     # Save new base pointer
.cfi_def_cfa_register 6   # CFI Directive
movl %edi, -20(%rbp) # Move value of edi to rbp-20 (M(rbp-20) <-- edi)
movq %rdx, -32(%rbp) # Move value of rdx into (rbp-32) (M(rbp-32) <-- rdx)
movl $0, -4(%rbp)    # Set value of 0 for (rbp-4) (M(rbp-4) <-- 0)
movl $0, -8(%rbp)    # Set value of 0 for (rbp-8) (M(rbp-8) <-- 0)
jmp .L26             # Unconditonal Jump to .L26

.L27:
    movl -8(%rbp), %eax   # Move value of (rbp-8) to eax 
    cltq                  # Convert 32-bit integer to 64-bit integer and store in rax
    leaq 0(,%rax, 4), %rdx  # Store 4*(value in rax) is stored to rdx (%rdx <-- ( 4 * %rax))
    movq -32(%rbp), %rax  # Move value of rbp-32 to rax
    addq %rdx, %rax       # Add rax and rdx and store in rax. rax <-- (rdx + rax)
    movl (%rax), %edx     # Move memory address of rax to edx (edx = rax)
    cltq                  # Convert 64-bit integer to 32-bit integer and
    leaq 0(,%rax, 4), %rcx  # Move value of 4*rax into rcx (rcx  = 4*rax)
    movq -40(%rbp), %rax  # Move value of rbp-32 to rax ( rax <-- (rbp-40))
    addq %rcx, %rax       # Add rax and rcx and store in rax. (rax  = rax + rcx)
    movl (%rax), %eax     # Move address of rax to eax (eax = rax)
    addq %rcx, %rax       # Add rcx and rax and store in rax (rax =  rcx + rax)
    movl (%rax), %eax     # Move address of rax to eax (eax = rax)
    imull %edx, %eax      # Multiply vale of eax and edx and store in eax (eax = eax * edx)
    addl %eax, -4(%rbp)   # Add eax and rbp-4 and store in rbp-4 ([rbp-4] <-- eax)
    addl $1, -8(%rbp)     # Add 1 to rbp-8 and store in rbp-8 ([rbp-8] <--
    

.L26:
    movl -8(%rbp), %rax   # Move value of (rbp-8) to rax (M(rbp-8) <-- rax)
    cmpl -20(%rbp), %eax  # Compare eax and (rbp-20)
    jl .L27               # Conditonal Jump to .L27 if eax > (rbp-20)
    movl -4(%rbp), %eax   # Move value of (rbp-4) to eax
    popq %rbp             # Pop the register rbp
    .cfi_def_cfa 7, 8     # CFI Directive
    ret                   # the return statement
    .cfi_endproc          # CFI Directive