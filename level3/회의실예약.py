def how_many_available(lst):
    cnt = 1
    if len(lst)==0:
        return "Not"
    else:
        for i in range(len(lst)-1):
            if lst[i+1]-lst[i] > 1:
                cnt +=1
        return cnt

def availabe_meet_print(lst):
    start = lst[0]
    if len(lst)==1:
        print("{0:02d}-{1:02d}".format(start, start+1))
    for i in range(len(lst)-1):
        if lst[i+1] - lst[i] > 1:
            end = lst[i]+1
            print("{0:02d}-{1:02d}".format(start, end))
            start = lst[i+1]
        if i == len(lst)-2:
            end = lst[i+1]+1
            print("{0:02d}-{1:02d}".format(start, end))
                     
N, M = map(int, input().split())

room_dict = {}
room_meet = []

for i in range(N):
    room_dict[input()] = i
    room_meet.append([hour for hour in range(9,18)])

for i in range(M):
    r,s,t = input().split()
    s, t = int(s), int(t)
    for j in range(s,t):
        if j in room_meet[room_dict[r]]: 
            room_meet[room_dict[r]].remove(j)

room_dict = dict(sorted(room_dict.items()))

for i in range(N):
    room = list(room_dict.keys())[i]
    availabe_meet = room_meet[room_dict[room]]
    print("Room {}:".format(room))
    if how_many_available(availabe_meet) != "Not":
        print("{} available:".format(how_many_available(availabe_meet)))
        availabe_meet_print(availabe_meet)
    else:
        print("{} available".format(how_many_available(availabe_meet)))
    if i != N-1:
        print("-----")