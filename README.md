# node-native-helloworld
a project to learn node.js native addon

## how-to
this project use the node-gyp, so, we should install the toolchain of node-gyp to get it works.

```
npm install --global node-gyp
```

and, we should setup a native c++ build environment

### windows
the quick way is to install the windows-build-tools
```
npm install --global --production windows-build-tools
```

### mac
get xcode installed, and make sure the commandline tools is ready

### linux
makesure python2.7 & gcc-c++ installed.

## test
```
npm install
npm run test
```

and we will get the output message:
```
hello world! a message generate by c++
```

## future tasks
* get the way to share buffers from js and c++
* create a changing bitmap on c++ and display it by node.js
