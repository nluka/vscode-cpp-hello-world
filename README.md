# vscode-cpp-mingw-starter

Boilerplate for C++ projects using MinGW in Visual Studio Code.

## Instructions

1. Clone repo OR copy `.vscode` and `src` directories into project
2. Install the [C/C++ for Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) extension
3. Open any source file within the `src` directory and use `Ctrl + Shift + B` to build or `Ctrl + F5` to run in debugger
4. (Optional) Delete the file `bin/binaries_go_here` and lines 4-5 in `.gitignore`, they are no longer needed

## Notes

- Build settings are in `.vscode/tasks.json`
- Debug settings are in `.vscode/launch.json`
- By default, launching debugger will build project first - this can be changed by removing `"preLaunchTask": "build-project"` from `.vscode/launch.json`
- By default, an external console is opened when debugging. This can be changed by setting `"externalConsole"` to `false` in `.vscode/launch.json`
- Custom command-line arguments for debugging can be set in `.vscode/launch.json` with the `"args"` property
- When creating new directories inside `src` containing source files (like in the case of `src/core/test.cpp`), make sure to include those source files in the `build-project` task in `tasks.json` to avoid 'undefined reference' errors

## Troubleshooting

- If you get the errors `'g++' is not recognized as an internal or external command, operable program or batch file.` or `'gdb' is not recognized as an internal or external command, operable program or batch file.`, make sure g++ and gdb are added to your PATH. Alternatively, you can specify the exact path to your compiler and debugger of choice instead within `.vscode/tasks.json`.
