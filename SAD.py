import numpy as np

state = "right"


sizes = np.array([16, 16, 4, 8])

frame = np.array([[7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0],
           [7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0],
           [7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0],
           [7, 5, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0],
           [0, 4, 2, 3, 4, 5, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60],
           [0, 5, 3, 4, 5, 6, 30, 35, 40, 45, 0, 0, 0, 0, 70, 75],
           [0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 0, 0, 0, 0, 84, 90],
           [0, 4, 8, 8, 8, 8, 42, 49, 56, 63, 0, 0, 0, 0, 98, 105],
           [0, 1, 8, 8, 8, 8, 48, 56, 64, 72, 0, 0, 0, 0, 112, 120],
           [0, 1, 8, 8, 8, 8, 54, 63, 72, 81, 90, 99, 108, 117, 126, 135],
           [0, 10, 8, 8, 8, 8, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150],
           [0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121, 132, 143, 154, 165],
           [9, 9, 9, 9, 48, 60, 72, 84, 96, 108, 120, 132, 0, 1, 2, 3],
           [9, 9, 9, 9, 52, 65, 78, 91, 104, 114, 130, 143, 1, 2, 3, 4],
           [9, 9, 9, 9, 56, 70, 84, 98, 112, 126, 140, 154, 2, 3, 4, 5],
           [9, 9, 9, 9, 60, 75, 90, 105, 120, 135, 150, 165, 3, 4, 5, 6]
           ])

window = np.array([[0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0]
            ])

f_y, f_x = frame.shape
w_y, w_x = window.shape

max_scope_x = f_x - w_x
min_scope_x = 0
max_scope_y = f_y - w_y
min_scope_y = 0

x = 0
y = 0
out_x = None
out_y = None

current_sum = float("inf")
new_sum = None

while True:

    new_sum = np.sum(np.abs(frame[y:y+w_y, x:x+w_x] - window))

    if new_sum < current_sum:
        current_sum = new_sum
        out_x = x
        out_y = y

    if state == "right":
        x += 1
        if x > max_scope_x:
            break
        if x == max_scope_x:
            state ="down"
            min_scope_y += 1
    elif state == "down":
        y += 1
        if y > max_scope_y:
            break
        if y == max_scope_y:
            state ="left"
            max_scope_x -= 1
    elif state == "left":
        x -= 1
        if x < min_scope_x:
            break
        if x == min_scope_x:
            state ="up"
            max_scope_y -= 1
    else:
        y -= 1
        if y < min_scope_y:
            break
        if y == min_scope_y:
            state ="right"
            min_scope_x += 1


print(out_y)
print(out_x)
