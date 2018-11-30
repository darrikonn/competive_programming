import sys

def main():
    n = int(input())
    dic = {}
    for _ in range(n):
        b = input().split(' ')
        n = b[0]
        s = b[1]
        if s.isdigit():
            tmp = n
            n = int(s) * 2
            s = tmp
        dic[s] = int(n)
    for key in sorted(dic, key=dic.get, reverse=False):
        print(key)

if __name__ == '__main__':
    sys.exit(main())
