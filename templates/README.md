### How the script works

```
y=`cat args.py`
x=`echo "$y"; cat myfile.py`
echo "$x" > myfile.py
```

#### execute
```
prefixargs.sh filename.py
```
