total_score = 0

def add_score(score):
    global total_score
    total_score = total_score + score
    return total_score

def reset_score():
    #global total_score
    total_score = 0
    return total_score

def print_score():
    print(total_score)

add_score(5)
print_score()
add_score(10)
print_score()
reset_score()
print_score()
add_score(3)
print_score()