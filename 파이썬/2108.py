import sys
n = int(sys.stdin.readline())
nums = []
for _ in range(n):
    nums.append(int(sys.stdin.readline()))

# 산술평균 : N개의 수들의 합을 N으로 나눈 값 (반올림)
a = int(sum(nums))
if a >= 0:
    print(int(sum(nums) / n + 0.5))
elif a < 0:
    print(int(sum(nums) / n - 0.5))

# 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
nums.sort()
print(nums[int(n/2)])

# 최빈값 : N개의 수들 중 가장 많이 나타나는 값
highs = [nums[0]]
cnt = 1
high = 0
last = nums[0]
idx = 0
for i in nums[1:]:
    if i != last:
        if cnt > high:
            highs = []
            highs.append(last)
            high = cnt
        elif cnt == high and last not in highs:
            highs.append(last)
        cnt = 1
    else:
        cnt += 1
    last = i
    idx += 1
if cnt > high:
    highs = [last]
elif cnt == high and last not in highs:
    highs.append(last)
cnt = 1
if len(highs) == 1:
    print(highs[0])
else:
    print(highs[1])

# 범위 : N개의 수들 중 최댓값과 최솟값의 차이
print(abs(nums[-1] - nums[0]))