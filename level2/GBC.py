N, M = map(int, input().split())

gt = []
for _ in range(N):
    length, limit = map(int, input().split())
    gt.append([length, limit])

val = []
for _ in range(M):
    length, limit = map(int, input().split())
    val.append([length, limit])

max_speed_gap = 0
extra_length = 0

gt_idx = 0
val_idx = 0
while True:
    if gt_idx == N or val_idx == M:
        break

    extra_length = val[val_idx][0] - gt[gt_idx][0]
    speed_gap = val[val_idx][1] - gt[gt_idx][1]

    if extra_length > 0:
        val[val_idx][0] = extra_length
        gt_idx += 1
    elif extra_length < 0:
        gt[gt_idx][0] = -extra_length
        val_idx += 1
    else:
        gt_idx += 1
        val_idx += 1

    if max_speed_gap < speed_gap:
        max_speed_gap = speed_gap
    
print(max_speed_gap)