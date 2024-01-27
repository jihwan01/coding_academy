#1302
class Book:
    def __init__(self, name):
        self.name = name
        self.count = 1
    
    def sell(self):
        self.count += 1
    
def getBestSeller(books):
    books.sort(key = lambda x : (-x.count, x.name))
    return books[0]
    
N = int(input())
books = []
for _ in range(N):
    title = input()
    find = False
    for book in books:
        if book.name == title:
            book.sell()
            find = True
            break
    if not find:
        books.append(Book(title))

print(getBestSeller(books).name)

