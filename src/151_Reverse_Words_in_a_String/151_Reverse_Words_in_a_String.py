class Solution:
    def reverseWords(self, s: str) -> str:
        wordArray = s.split()
        wordArray.reverse()
        return " ".join(wordArray)
    


if __name__ == '__main__':
    s = Solution()
    print(s.reverseWords("  hello world  "))