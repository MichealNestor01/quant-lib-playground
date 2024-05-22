workspace "QuantLibTests"
    configurations { "Debug", "Release" }
    platforms { "Linux" } 
    location "build"

project "testApp"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"
    files { "src/testApp/**.h", "src/testApp/**.cpp" }
    
    includedirs { "src/libraries/QuantLib/include" }
    libdirs { "src/libraries/QuantLib/lib" }

    links { "QuantLib" }

    -- This is needed to make the linker find the QuantLib library
    linkoptions { "-Wl,-rpath=src/libraries/QuantLib/lib" }
    system "linux"
    toolset "gcc"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

project "zeroBondYield"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"
    files { "src/zeroBondYield/**.h", "src/zeroBondYield/**.cpp" }
    
    includedirs { "src/libraries/QuantLib/include" }
    libdirs { "src/libraries/QuantLib/lib" }

    links { "QuantLib" }

    -- This is needed to make the linker find the QuantLib library
    linkoptions { "-Wl,-rpath=src/libraries/QuantLib/lib" }
    system "linux"
    toolset "gcc"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"