summ = 0
for i in range(5):
    start, end = input().split()
    work_time = (int(end[:2])-int(start[:2]))*60 + (int(end[3:])-int(start[3:]))
    summ +=work_time
print(summ)