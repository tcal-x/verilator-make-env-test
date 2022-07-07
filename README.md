
### Setup

Clone this repository, then clone submodule:

```
git clone  ....
cd ....
git submodule update --init --recursive
```

Then build the Conda environment:

```
make env
```



### Test

Enter the Conda environment:

```
make enter
```

Try to do a trivial Verilate + compile:

```
cd test
make
```
