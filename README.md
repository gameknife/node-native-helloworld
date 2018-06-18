# node-native-helloworld
a project to learn node.js native addon

# how-to
this project use the node-gyp, so, we should install the toolchain of node-gyp to get it works.

```
npm install --global node-gyp
```

and, we should setup a native c++ build environment

## windows
the quick way is to install the windows-build-tools
```
npm install --global --production windows-build-tools
```

## xcode
get xcode installed, and make sure the commandline tools is ready

# test
```
npm install
npm run test
```

and we will get the output message:
```
hello world! a message generate by c++
```
