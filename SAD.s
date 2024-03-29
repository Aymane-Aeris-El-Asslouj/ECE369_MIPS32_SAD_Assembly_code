   add $t2, $zero, $zero
   add $t3, $zero, $zero
   add $t4, $zero, $zero
   lw $t0, 4($a0)
   sll $t0, $t0, 2
   sll $s0, $t0, 23
   lw $t1, 12($a0)
   sll $t1, $t1, 2
   lw $s6, 8($a0)
   lw $t6, 4($a0)
   sub $t6, $t0, $t1
   lw $t7, 0($a0)
   sub $t7, $t7, $s6
   sll $t7, $t7 2
   
   addi $s6, $s6, 1
   mul $s6, $s6, $t1
   add $s3, $a2, $s6

    add, $s4, $t6, $zero
    add, $t5, $t7, $zero

    la $t8, right_move

    Call:
        add, $t9, $zero, $zero
        add, $s1, $a2, $zero
        add, $s2, $a1, $t2
        add, $s5, $s1, $t1
        next_row:

                row_start:
                    lw $s6, 0($s1)
                    lw $s7, 0($s2)
                    sub $s7, $s6, $s7
                    bgtz $s7, pos
                    sub $t9, $t9, $s7
                    j end_abs
                    pos:
                        add $t9, $t9, $s7
                    end_abs:
                        addi $s1, $s1, 4
                        addi $s2, $s2, 4
                bne $s1, $s5, row_start
                    add $s2, $s2, $s4
                    add $s5, $s5, $t1
            bne $s5, $s3, next_row

            bge $t9, $s0, not_min
            add $s0, $t9, $zero
            add $v1, $t3, $zero
            add $v0, $t4, $zero
            not_min:
                jr $t8

    right_move:
        addi $t3, $t3, 4
        addi $t2, $t2, 4
        bgt $t3, $t6, End
        bne $t3, $t6, dodge_1
        la $t8, down_move
        dodge_1:
            j Call
    
    down_move:
        addi $t4, $t4, 4
        add $t2, $t2, $t0
        bgt $t4, $t7, End
        bne $t4, $t7, dodge_2
        la $t8, left_move
        dodge_2:
            j Call
    
    left_move:
        addi, $t3, $t3, -4
        addi $t2, $t2, -4
        sub $s6, $s4, $t6
        blt $t3, $s6, End
        bne $t3, $s6, dodge_3
            la $t8, up_move
            addi $t7, $t7, -4
        dodge_3:
            j Call
    
    up_move:
        addi $t4, $t4, -4
        sub $t2, $t2, $t0
        sub $s7, $t5, $t7
        blt $t4, $s7, End
        bne $t4, $s7, dodge_4
        la $t8, right_move
        addi $t6, $t6, -4
        dodge_4:
            j Call
        
    End:
        srl $v1, $v1, 2
        srl $v0, $v0, 2
        jr $ra

