#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "antlr4_shared" for configuration "MinSizeRel"
set_property(TARGET antlr4_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(antlr4_shared PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/antlr4-runtime.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/antlr4-runtime.dll"
  )

list(APPEND _cmake_import_check_targets antlr4_shared )
list(APPEND _cmake_import_check_files_for_antlr4_shared "${_IMPORT_PREFIX}/lib/antlr4-runtime.lib" "${_IMPORT_PREFIX}/bin/antlr4-runtime.dll" )

# Import target "antlr4_static" for configuration "MinSizeRel"
set_property(TARGET antlr4_static APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(antlr4_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "CXX"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/antlr4-runtime-static.lib"
  )

list(APPEND _cmake_import_check_targets antlr4_static )
list(APPEND _cmake_import_check_files_for_antlr4_static "${_IMPORT_PREFIX}/lib/antlr4-runtime-static.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
