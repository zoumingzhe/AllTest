from LZ77 import LZ77Compressor

filename = "input.txt"
compressor = LZ77Compressor(window_size=20) # window_size is optional

pack   = compressor.compress("..\\examples\\" + filename, verbose=True)
print(pack.tobytes())
print(pack.count())
print(pack)

filehandle = open("..\\examples\\compressed\\" + filename, "wb+");
filehandle.write(pack.tobytes());
filehandle.close();
        
unpack = compressor.decompress("..\\examples\\compressed\\" + filename)

filehandle = open("..\\examples\\decompressed\\" + filename, "wb+");
filehandle.write(unpack.tobytes());
filehandle.close();

##print(unpack)
##print(unpack == 'aacaacabcabaaac')
input("按回车（Enter）继续")