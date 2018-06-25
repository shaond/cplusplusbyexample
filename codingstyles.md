# Coding Styles

There are a number of coding styles, the most commonly used ones are:

* [Google’s C++ style guide](https://google.github.io/styleguide/cppguide.html)
* [Webkit Style Guide](https://webkit.org/code-style-guidelines/)
* [Mozilla Style Guide](https://developer.mozilla.org/en-US/docs/Mozilla/Developer_guide/Coding_Style)
* [LLVM Style Guide](https://llvm.org/docs/CodingStandards.html)

You can use the `clang-format` (part of LLVM) tool to automatically format your code to a particular style using the following command:

```
$ clang-format -style=google <filename>
```

**NOTE** 

`clang-format` is not a default part of most LLVM installs - so you may need to RTFM (Read The Friendly Manual) to grab a copy for your OS.