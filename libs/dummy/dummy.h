//
// Created by Piasy on 2019/9/29.
//

#ifndef KMPPBOOTSTRAP_DUMMY_H
#define KMPPBOOTSTRAP_DUMMY_H

#ifdef WIN_VERSION
#if defined(SELF_DUMMY_DLL)
#define DUMMY_API __declspec(dllexport)
#else
#define DUMMY_API __declspec(dllimport)
#endif
#else
#define DUMMY_API
#endif

DUMMY_API const char* dummy_get_str();

#endif //KMPPBOOTSTRAP_DUMMY_H
