t = int(input())
for test in t:
	n = int(input())
	s = str(input())
	if s.find("01", 0, n) == -1 or s.find("00", 0, n) == -1:
		print(s)
	else:
		one = 0;
		zero = 0;
		for ch in s:
			if ch == "0":
				zero+=1
			if ch == "1":
				one+=1
		res = ""
		while zero != 0:
			res += "0"
			zero-=1
		while one != 0:
			res += "1"
			one-=1
		print(res)
