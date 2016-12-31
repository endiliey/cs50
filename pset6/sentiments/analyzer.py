import nltk

class Analyzer():
    """Implements sentiment analysis."""

    def __init__(self, positives, negatives):
        self.positives_set = set()
        file = open(positives, "r")
        for line in file:
            self.positives_set.add(line.rstrip("\n"))
        file.close()
        
        self.negatives_set = set()
        file = open(negatives, "r")
        for line in file:
            self.negatives_set.add(line.rstrip("\n"))
        file.close()

    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""
        tokenizer = nltk.tokenize.TweetTokenizer()
        tokens = tokenizer.tokenize(text)
        sum = 0
        for word in tokens:
            if word.lower() in self.positives_set:
                sum += 1
            elif word.lower() in self.negatives_set:
                sum -= 1
            else:
                continue
        
        return sum
