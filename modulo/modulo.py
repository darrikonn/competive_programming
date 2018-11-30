import sys

def main():
    numbers = [int(input()) % 42 for _ in range(10)]
    print(len(set(numbers)))

if __name__ == '__main__':
    sys.exit(main())
