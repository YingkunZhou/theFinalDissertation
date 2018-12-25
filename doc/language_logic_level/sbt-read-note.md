# sbt
## setup
```
echo "deb https://dl.bintray.com/sbt/debian /" | sudo tee -a /etc/apt/sources.list.d/sbt.list
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv 2EE0EA64E40A89B84B2DF73499E82A75642AC823
sudo apt-get update
sudo apt-get install sbt
```

## sbt by example summarize
### Create a minimum sbt build
```
mkdir foo-build
cd foo-build
touch build.sbt
```
### Recompile on code change
```
sbt:foo-build> ~compile
```

### and then Create a source file parallel and finish by press enter to exit ~compile command

### whenever you change the build.sbt, sbt:Hello> reload to reload info

### Run incremental tests continuously
```
sbt:Hello> ~testQuick
```
### and then use editor to write a test, ~testQuick should pick up the change

### For day-to-day coding, we recommend using the sbt shell or a continuous test like ~testQuick rather than bash mode

### sbt new command
```
$ sbt new sbt/scala-seed.g8
....
A minimal Scala project.

name [My Something Project]: hello

Template applied in ./hello
```
## Directory structure
Source code: sbt uses the same directory structure as Maven for source files by default (all paths are relative to the base directory)
```
src/
  main/
    resources/
       <files to include in main jar here>
    scala/
       <main Scala sources>
    java/
       <main Java sources>
  test/
    resources
       <files to include in test jar here>
    scala/
       <test Scala sources>
    java/
       <test Java sources>
```
### sbt build definition files
The build definition is described in build.sbt (actually any files named *.sbt) in the project’s base directory.
```
build.sbt
```

### Build support files
In addition to build.sbt, project directory can contain .scala files that defines helper objects and one-off plugins. See organizing the build for more.
```
build.sbt
project/
  Dependencies.scala
```

### Build products
Generated files (compiled classes, packaged jars, managed files, caches, and documentation) will be written to the target directory by default.

## Running
### sbt shell
Running sbt with no command line arguments starts sbt shell. sbt shell has a command prompt (with tab completion and history!

### Continuous build and test
To speed up your edit-compile-test cycle, you can ask sbt to automatically recompile or run tests whenever you save a source file.

### Common commands
- clean	Deletes all generated files (in the target directory).
- compile	Compiles the main sources (in src/main/scala and src/main/java directories).
- test	Compiles and runs all tests.
- console	Starts the Scala interpreter with a classpath including the compiled sources and all dependencies. To return to sbt, type :quit, Ctrl+D (Unix), or Ctrl+Z (Windows).
- run <argument>*	Runs the main class for the project in the same virtual machine as sbt.
- package	Creates a jar file containing the files in src/main/resources and the classes compiled from src/main/scala and src/main/java.
- help <command>	Displays detailed help for the specified command. If no command is provided, displays brief descriptions of all commands.
- reload	Reloads the build definition (build.sbt, project/*.scala, project/*.sbt files). Needed if you change the build definition.

### Tab completion
sbt shell has tab completion, including at an empty prompt. A special sbt convention is that pressing tab once may show only a subset of most likely completions, while pressing it more times shows more verbose choices.

### History Commands
- !	Show history command help.
- !!	Execute the previous command again.
- !:	Show all previous commands.
- !:n	Show the last n commands.
- !n	Execute the command with index n, as shown by the !: command.
- !-n	Execute the nth command before this one.
- !string	Execute the most recent command starting with 'string.'
- !?string	Execute the most recent command containing 'string.'

## Build definition
### Specifying the sbt version
To do this, create a file named project/build.properties that specifies the sbt version