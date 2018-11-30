import sys

def main():
    n = int(input())
    sum = 0
    for i in range(n):
        val = input()
        sum += int(val[:-1]) ** int(val[-1])
    print(sum)

if __name__ == '__main__':
    sys.exit(main())
