N = int(input())

score_sum = [0 for _ in range(N)]

for i in range(3):
    rank = [0 for j in range(N)]
    score_list = list(map(int, input().split()))
    score_dict = {}
    for j in range(N):
        score_sum[j] += score_list[j]
        score_dict[j] = score_list[j]

    sorted_score_dict = sorted(score_dict.items(), key=lambda x: x[1], reverse=True)

    prev_score=-1
    prev_rank =-1
    for k in range(N):
        if sorted_score_dict[k][1] == prev_score:
            rank[sorted_score_dict[k][0]] = prev_rank
        else:    
            rank[sorted_score_dict[k][0]] = k+1
            prev_rank=k+1
            prev_score=sorted_score_dict[k][1]

    for i in range(N):
        print(rank[i], end=" ")
    print("")


score_dict = {}
for j in range(N):
    score_dict[j] = score_sum[j]

sorted_score_dict = sorted(score_dict.items(), key=lambda x: x[1], reverse=True)

prev_score=-1
prev_rank =-1
for k in range(N):
    if sorted_score_dict[k][1] == prev_score:
        rank[sorted_score_dict[k][0]] = prev_rank
    else:    
        rank[sorted_score_dict[k][0]] = k+1
        prev_rank=k+1
        prev_score=sorted_score_dict[k][1]
    
for i in range(N):
    print(rank[i], end=" ")