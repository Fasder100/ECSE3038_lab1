

word = input("Enter password")


def validatePassword(word):

if( word.isalnum() and word.count('')>7 ):
    print( "true")
else:
    print ("false")
