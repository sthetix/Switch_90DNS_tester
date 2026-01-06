# 90DNS Tester

A simple Switch homebrew that does DNS resolution to see if we reach Nintendo's servers. This can also be used to test if Atmosphere's DNS MITM is working properly.

![screenshot.jpg](screenshot.jpg?raw=true)

## Features

- Tests DNS resolution to Nintendo servers
- Verifies 90DNS block status
- Checks Atmosphere DNS MITM functionality
- Network connectivity status indicator

## Building

Requires [devkitPro](https://devkitpro.org/) with libnx installed.

```bash
make clean
make
```

The resulting `.nro` file can be found in the project root.

## License

LGPL-3.0
