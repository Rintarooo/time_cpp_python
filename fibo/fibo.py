import sys

def recur(i):
	if i == 0:
		return 0
	elif i == 1:
		return 1
	else:
		return recur(i-1) + recur(i-2)

if __name__ == '__main__':
	# print(sys.argv[1])
	print(recur(int(sys.argv[1])))