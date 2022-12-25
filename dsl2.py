#a
def longestWord(words):
	word_len = []
	for n in words:
		word_len.append((len(n), n))
		word_len.sort()
	return word_len[-1][1]
print(longestWord(["PHP", "Exercises", "Backend"]))
#b
def character_frequency(str1):
	dict = {}
	for n in str1:
		keys = dict.keys()
		if n in keys:
			dict[n] += 1
		else:
			dict[n] = 1
	return dict
print(character_frequency("google.com"))
#c
def palindrome(s):
	return s == s[::-1]
	s = "malayalam"
	ans = palindrome(s)
	if ans:
		print("Yes")
	else:
		print("No")
#d
def index(str1,word):
	return str1.index(word)
print(index("mississippi","iss"))
#e
def word_count(str):
	counts = dict()
	words = str.split()
	for word in words:
		if word in counts:
			counts[word] += 1
		else:
			counts[word] = 1
	return counts
print( word_count('the quick brown fox jumps over the lazy dog.'))
