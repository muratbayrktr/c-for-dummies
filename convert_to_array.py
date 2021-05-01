def convert(string):
    L = list(string.rstrip().split(" "))
    result = "{" + ", ".join(L) + "}"
    return result

result = []

for i in range(10):
    inp = input()
    result.append(convert(inp))

for i in result:
    print(i)