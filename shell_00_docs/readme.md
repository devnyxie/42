
# 7:
Apply the patch from the file sw.diff to the file a and save the output to the file b.
```sh
patch -o b a < sw.diff
```

# 8
Nothing to do here.

# 9
Create a file testfile with the contents "42" starting at the 42nd byte.
```sh
echo -n "42" | dd of=testfile bs=1 seek=42 conv=notrunc
```