FILE(GLOB SRC *.cpp *.h)

ADD_EXECUTABLE(ryzom_mail_forum_service WIN32 ${SRC})

INCLUDE_DIRECTORIES(${RZ_SERVER_SRC_DIR} ${MYSQL_INCLUDE_DIR})

TARGET_LINK_LIBRARIES(ryzom_mail_forum_service
						ryzom_adminmodules
						ryzom_gameshare
						ryzom_servershare
						nelmisc
						nelnet)

NL_DEFAULT_PROPS(ryzom_mail_forum_service "Ryzom, Services: Mail Forum Service (MFS)")
NL_ADD_RUNTIME_FLAGS(ryzom_mail_forum_service)

IF(WITH_PCH)
  ADD_NATIVE_PRECOMPILED_HEADER(ryzom_mail_forum_service ${CMAKE_CURRENT_SOURCE_DIR}/stdpch.h ${CMAKE_CURRENT_SOURCE_DIR}/stdpch.cpp)
ENDIF()

INSTALL(TARGETS ryzom_mail_forum_service RUNTIME DESTINATION sbin COMPONENT services)
