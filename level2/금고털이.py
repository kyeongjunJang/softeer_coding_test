import heapq

W, N = map(int, input().split())

metal = []

for i in range(N):
        (M, P) = map(int, input().split())
        metal.append((-P,M,P))

heapq.heapify(metal)
#metal.sort(key = lambda x : x[1], reverse=True)
#metal = sorted(metal, key = lambda x : x[1], reverse=True)
earn = 0

for i in range(N):
        x = heapq.heappop(metal)
        m = x[1]
        p = x[2]

        if W >= m:
                earn += m*p
                W= W - m
                
        elif 0 < W < m:
                earn += W*p
                W = 0
        else:
                break

print(earn)