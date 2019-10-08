del /s /f /q libs\Windows\*

mkdir libs\Windows
:: clean may fail to delete output dir generated in macOS
call .\gradlew.bat clean

.\gradlew.bat assemble && ^
cd kmpp\build\bin\mingw\debugShared && ^
move kmpp_symbols.def kmpp.def && ^
lib /machine:x64 /def:kmpp.def /out:kmpp.lib && ^
cd ..\..\..\..\.. && ^
copy kmpp\build\bin\mingw\debugShared\kmpp.dll libs\Windows\ && ^
copy kmpp\build\bin\mingw\debugShared\kmpp.lib libs\Windows\ && ^
copy kmpp\build\bin\mingw\debugShared\kmpp_api.h libs\Windows\
