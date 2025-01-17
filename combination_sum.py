candidates = [2,3,6,7]
target = 7

ans = []

def process(i, current, total):
            if total == target:
                ans.append(current.copy())
                return

            if i >= len(candidates) or total > target:
                return    

            current.append(candidates[i])
            process(i, current, total+candidates[i])

            current.pop()

            process(i+1, current, total)


def main():
    process(0, [], 0)
    print(ans) 

main()