# -----------------------------------------------------------------
# Python script to extract hex image data from Arduino LED array
# and save them as .PNG images.
# -----------------------------------------------------------------
from PIL import Image
from numpy import *
import sys

if len(sys.argv) > 1:
    filename = sys.argv[1]
else:
    filename = input( "Enter LCD display arduino C source code filename (ino): " )

# define an LCD image array, filled with zeros initially
rows = 32
cols = 64
nparray = zeros((rows, cols, 3), dtype=uint8)

# misc variables
status = 'searching'  # simple state machine
hexes = []            # list of hex words
row = 0               # current row
col = 0               # current column

with open( filename, 'r' ) as f:
    # read line by line
    for line in f:
        # remove all commas and whitespace
        words = line.replace( ',', ' ').strip().split()

        # if reading hex data, process a line of hex words
        if status == 'reading':
            if len( words ) > 0 and words[ 0 ] == '};':
                # found end of list, reset to searching
                status = 'searching'
                # print( len( hexes ) )  # should be 2048 hex words

                # convert array to image and save it
                img = Image.fromarray( nparray, 'RGB' )
                img.save( imagename + '.png' )
                # img.show()
            elif words[0][1] == 'x':
                for word in words:
                    # strip off '0x' and append to list of hex words (list is not really needed)
                    hexes.append( word[2:] )

                    # split hex word and store red/green/blue entries at row/column
                    nparray[ row ][ col ] = [ int( word, 16 ) >> i & 0xff for i in ( 16, 8, 0 ) ]
                    # image is stored by columns, then rows; increment through the data
                    col = col + 1
                    if col >= cols:
                        col = 0
                        row = row + 1
                    if row >= rows:
                        row = 0 # error!

        # look for start of new array
        if len( words ) > 4 and words[ 0 ] == 'static' and words[ 1 ] == 'const':
            # print( 'heading: ', words )
            # get image file output name from array
            imagename = words[ 4 ].split( '[' )[ 0 ]
            print( 'imagename:' , imagename )
            # set status to reading, clear list, and set row/col to start
            status = 'reading'
            hexes = []
            row = 0
            col = 0