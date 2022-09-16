#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>


// data
/*
__int32 sizes [] = {16, 16, 4, 8};

__int32 frame []  = { 7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
                    7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
                    7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
                    7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
                    0, 4, 2, 3, 4, 5, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 
                    0, 5, 3, 4, 5, 6, 30, 35, 40, 45, 0, 0, 0, 0, 70,  75, 
                    0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 0, 0, 0, 0, 84, 90, 
                    0, 4, 8, 8, 8, 8, 42, 49, 56, 63, 0, 0, 0, 0, 98, 105, 
                    0, 1, 8, 8, 8, 8, 48, 56, 64, 72, 0, 0, 0, 0, 112, 120, 
                    0, 1, 8, 8, 8, 8, 54, 63, 72, 81, 90, 99, 108, 117, 126, 135, 
                    0, 10, 8, 8, 8, 8, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 
                    0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121, 132, 143, 154, 165, 
                    9, 9, 9, 9, 48, 60, 72, 84, 96, 108, 120, 132, 0, 1, 2, 3, 
                    9, 9, 9, 9, 52, 65, 78, 91, 104, 114, 130, 143, 1, 2, 3, 4, 
                    9, 9, 9, 9, 56, 70, 84, 98, 112, 126, 140, 154, 2, 3, 4, 5, 
                    9, 9, 9, 9, 60, 75, 90, 105, 120, 135, 150, 165, 3, 4, 5, 6 
                    };

__int32 window [] = {0, 0, 0, 0, 0, 0, 0, 0, 
                    0, 0, 0, 0, 0, 0, 0, 0, 
                    0, 0, 0, 0, 0, 0, 0, 0, 
                    0, 0, 0, 0, 0, 0, 0, 0
                    };
*/

/**/
__int32 sizes [] = {16, 16, 4, 4};

__int32 frame []  = {0, 1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 
         1, 2, 3, 4, 2, 3, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 
         2, 3, 4, 5, 3, 4, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 
         3, 4, 5, 6, 4, 5, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 
         0, 5, 3, 4, 5, 6, 30, 35, 40, 45, 50, 55, 60, 65, 70,  75, 
         0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 
         0, 4, 14, 21, 28, 35, 42, 49, 56, 63, 70, 77, 84, 91, 98, 105, 
         0, 8, 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 96, 104, 112, 120, 
         0, 9, 18, 27, 36, 45, 54, 63, 72, 81, 90, 99, 108, 117, 126, 135, 
         0, 1, 2, 3, 4, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 
         1, 2, 3, 4, 44, 55, 66, 77, 88, 99, 110, 121, 132, 143, 154, 165, 
         2, 3, 4, 5, 48, 60, 72, 84, 96, 108, 120, 132, 0, 1, 2, 3, 
         3, 4, 5, 6, 52, 65, 78, 91, 104, 114, 130, 143, 1, 2, 3, 4, 
         0, 14, 28, 42, 56, 70, 84, 98, 112, 126, 140, 154, 2, 3, 4, 5, 
         0, 15, 30, 45, 60, 75, 90, 105, 120, 135, 150, 165, 3, 4, 5, 6  };

__int32 window [] = {0, 1, 2, 3, 
            1, 2, 3, 4, 
            2, 3, 4, 5, 
            3, 4, 5, 6 
                    };
/**/

/*
__int32 sizes [] = {16, 16, 8, 4};

__int32 frame []  = {7, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
            7, 8, 8, 8, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 
            7, 8, 8, 8, 2, 8, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 
            7, 8, 8, 8, 8, 8, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 
            0, 4, 8, 8, 8, 8, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 
            0, 5, 8, 8, 8, 8, 30, 35, 40, 45, 50, 55, 60, 65, 70,  75, 
            0, 6, 8, 8, 8, 8, 36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 
            0, 4, 8, 8, 8, 8, 42, 49, 56, 63, 70, 77, 84, 91, 98, 105, 
            0, 1, 8, 8, 8, 8, 48, 56, 64, 72, 80, 88, 96, 104, 112, 120, 
            0, 1, 8, 8, 8, 8, 54, 63, 72, 81, 90, 99, 108, 117, 126, 135, 
            0, 10, 8, 8, 8, 8, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 
            0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121, 132, 143, 154, 165, 
            9, 9, 9, 9, 48, 60, 72, 84, 96, 108, 120, 132, 0, 1, 2, 3, 
            9, 9, 9, 9, 52, 65, 78, 91, 104, 114, 130, 143, 1, 2, 3, 4, 
            9, 9, 9, 9, 56, 70, 84, 98, 112, 126, 140, 154, 2, 3, 4, 5, 
            9, 9, 9, 9, 60, 75, 90, 105, 120, 135, 150, 165, 3, 4, 5, 6 };

__int32 window [] = {8, 8, 8, 8, 
         8, 8, 8, 8, 
         8, 8, 8, 8, 
         8, 8, 8, 8, 
         8, 8, 8, 8, 
         8, 8, 8, 8, 
         8, 8, 8, 8,  
         8, 8, 8, 8, 
                    };
*/


__int32 i; // t0
__int32 l; // $t1
__int32 frame_offset; // $t2

// spiral variables
__int32 x; // $t3
__int32 y; // $t4
__int32 frame_carriage_y; // $t5
__int32 max_scope_x; // $t6
__int32 max_scope_y; // $t7
void* move_address; // $t8

// SAD sum function
__int32 new_sum; // $t9
__int32 sum; // $s0

__int32* window_pointer; // $s1
__int32* frame_pointer; // $s2

__int32* max_window_pointer; // $s3
__int32 frame_carriage_x; // $s4

__int32* dummy_2_pointer; // $s5
__int32 dummy_4; // $s6
__int32 dummy_5; // $s7

// outputs
__int32 out_x; // $v1
__int32 out_y; // $v0

void print_pos(){

    Sleep(10);

    for(int u = 0; u < 4*sizes[0]; u+=4){
        for(int t = 0; t < 4*sizes[1]; t+=4){
            if(t - x >= 0 && t - x < 4*sizes[3] && u - y >= 0 && u - y < 4*sizes[2])
                printf("🟥");
            else if(u > max_scope_y + 4*sizes[2]-4 || u < (frame_carriage_y-max_scope_y) || 
            t > max_scope_x + 4*sizes[3]-4 || t < (frame_carriage_x-max_scope_x) ){
                printf("⬜");
            }
            else{
                printf("⬛");
            }
        }
        printf("\n");
    }
    printf("%d, %d, %d; %d", out_x, out_y, new_sum, sum);
    printf("\n");
    fflush(stdout);
}


int main(){

    frame_offset = 0;

    x = 0;
    y = 0;

    i = sizes[1];
    i = i << 2;

    sum = 2147418112; # lui 0x7fff

    l = sizes[3];
    l = l << 2;

    dummy_4 = sizes[2];

    max_scope_x = i - l;
    max_scope_y = sizes[0];
    max_scope_y = max_scope_y - dummy_4;
    max_scope_y = max_scope_y << 2;


    // (pointer in C requires /4)
    max_window_pointer = window + (l/4);
    dummy_5 = 0;
    comp_start:
        if(dummy_5 == dummy_4) goto comp_end;
        max_window_pointer = max_window_pointer + (l/4);
        dummy_5 = dummy_5 + 1;
        goto comp_start;

    comp_end:
        // gets frame pointer from end of first row of window to start of second row
        frame_carriage_x = max_scope_x;
        frame_carriage_y = max_scope_y;

        move_address = &&right_move;

        
    Call:
        // (!!! debug only !!!) prints the current traversal state
        print_pos();

        // Compute sum of absolute difference
        new_sum = 0;

        window_pointer = window;
        frame_pointer = frame + (frame_offset/4);

        // run over all rows
        dummy_2_pointer = window_pointer + (l/4);
        next_row:
            if(dummy_2_pointer == max_window_pointer) goto computation_end;

                row_start:
                    // compute one row of sum of absolute differences
                    if(window_pointer == dummy_2_pointer) goto row_end;

                    // fetch pixel values of window and frame
                    dummy_4 = *window_pointer;
                    dummy_5 = *frame_pointer;
                    
                    // take the difference between the two
                    dummy_5 = dummy_4 - dummy_5;

                    // compute absolute value of difference (dummy 5)
                    dummy_4 = dummy_5 >> 31;
                    dummy_5 = dummy_5 ^ dummy_4;
                    dummy_5 = dummy_5 - dummy_4;

                    // add absolute difference to cummulative sum
                    new_sum = new_sum + dummy_5;

                    // (pointer operation in C requires /4)
                    window_pointer = window_pointer + (4/4);
                    frame_pointer = frame_pointer + (4/4);

                goto row_start;
                
                row_end:

                    // shift the frame offset (pointer operation in C requires /4)
                    frame_pointer = frame_pointer + (frame_carriage_x/4);

                    // (pointer operation in C requires /4)
                    dummy_2_pointer = dummy_2_pointer + (l/4);
            goto next_row;

        computation_end:
            // checl if this is a lower sum of absolute differences
            // than the previous value, and if it is, update output
            if(new_sum >= sum) goto not_min;
            sum = new_sum;
            out_x = x;
            out_y = y;
            not_min:
                // change the location of the address pointer
                goto *move_address;


right_move:
    x = x + 4;
    frame_offset = frame_offset + 4;
    if(x > max_scope_x) goto End;
    if(x != max_scope_x) goto dodge_1;
    move_address = &&down_move;
    dodge_1:
        goto Call;


down_move:
    y = y + 4;
    frame_offset = frame_offset + i;
    if(y > max_scope_y) goto End;
    if(y != max_scope_y) goto dodge_2;
    move_address = &&left_move;
    dodge_2:
        goto Call;

left_move:
    x = x - 4;
    frame_offset = frame_offset - 4;
    dummy_4 = frame_carriage_x - max_scope_x;
    if(x < dummy_4) goto End;
    if(x != dummy_4) goto dodge_3;
        move_address = &&up_move;
        max_scope_y = max_scope_y - 4;
    dodge_3:
        goto Call;

up_move:
    y = y - 4;
    frame_offset = frame_offset - i;
    dummy_5 = frame_carriage_y - max_scope_y;
    if(y < dummy_5) goto End;
    if(y != dummy_5) goto dodge_4;
    move_address = &&right_move;
    max_scope_x = max_scope_x - 4;
    dodge_4:
        goto Call;
    
End:
    out_x = out_x >> 2;
    out_y = out_y >> 2;

    // (!!! debug only !!!)
    printf("%d %d \n", out_y, out_x);

    return 0;


}

