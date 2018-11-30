import sys

def main():
    s = input()
    T = s.count('T')
    C = s.count('C')
    G = s.count('G')
    print(T**2 + C**2 + G**2 + min(T, C, G)*7)

if __name__ == '__main__':
    sys.exit(main())
