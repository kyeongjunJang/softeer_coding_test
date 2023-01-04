W, N = map(int, input().split()) # W는 배낭 무게, N은 귀금속 종류 개수

metal_weight_per_price = []

for i in range(N):
    M, P = map(int, input().split()) #M 금속의 무게, P 무게당 가격
    metal_weight_per_price.append((P,M)) # 0:P 1:M

metal_weight_per_price = sorted(metal_weight_per_price, key=lambda x:x[0], reverse=True)

price_sum = 0
left_W = W

for i in range(N):
    left_W = left_W - metal_weight_per_price[i][1]
    if left_W > 0:
        price = metal_weight_per_price[i][0] * metal_weight_per_price[i][1]
        price_sum += price
    elif left_W < 0:
        price = metal_weight_per_price[i][0] * (left_W + metal_weight_per_price[i][1])
        price_sum += price
        break
    else:
        price = metal_weight_per_price[i][0] * metal_weight_per_price[i][1]
        price_sum += price
        break

print(price_sum)