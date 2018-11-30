import sys

def main():
    L = int(input())
    D = int(input())
    X = int(input())

    m = 0
    M = 0
    for i in range(L, D+1):
        s = [int(d) for d in str(i)]
        if sum(s) == X:
            if m == 0:
                m = i
            M = i
    print(m, M, sep='\n')

if __name__ == '__main__':
    sys.exit(main())
