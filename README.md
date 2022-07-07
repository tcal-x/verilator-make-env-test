
### Setup

Clone this repository, then clone the submodule:

```
git clone https://github.com/tcal-x/verilator-make-env-test.git
cd verilator-make-env-test
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


I see this error:
```
make[2]: x86_64-conda-linux-gnu-c++: Command not found
```

There *is* a ` x86_64-conda_cos6-linux-gnu-c++` (note the `cos6`) available.
