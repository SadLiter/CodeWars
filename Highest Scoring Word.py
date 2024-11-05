def high(string):
    string = string.split()
    shift = 96
    highest_score = 0

    for word in string:
        score = sum(ord(char) - shift for char in word)
        if score > highest_score:
            highest_score = score
            highest_score_word = word

    return highest_score_word