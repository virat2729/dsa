def longestword(str):
    words = str.split()
    maxlength = 0
    longestword = " "
    for word in words:
        if len(word) > maxlength:
            maxlength = len(word)
            longestword = word
    return longestword

def chrfrequency(str,chr):
    count = 0
    string = str.lower
    for i in str:
        if i == chr:
            count = count + 1
    print("The frequency of Occurrence of given character in the Entered string is:", count)
    return " "

def palindrome(str):
    p = ""
    for i in str:
        if i == " ":
            continue
        else:
            p = p+i
    q = p[::-1]
    if p == q:
        print("The String",str,"is a Palindrome.")
    else:
        print("The String",str,"is not Palindrome.")
    return " "

def firstappearance(str,substring):
    for i in range(len(str) - len(substring) + 1):
        if str[i:i + len(substring)] == substring:
            return i

def wordfrequency(str):
    word = input("Enter the word whose frequency of occurrence is to be determined:")
    count = 0
    string = str.split()
    for element in string:
        if element == word:
            count = count + 1
    return count

string = str(input("Enter the String:"))
print("The word with longest length in the String is:", longestword((string)))
print(chrfrequency(string,input("Enter the Character whose frequency of occurrence is to be determined:")))
print(palindrome(string))
print(firstappearance(string,input("Enter the Substring whose Index is to be found in string:")))
print(wordfrequency(string))

