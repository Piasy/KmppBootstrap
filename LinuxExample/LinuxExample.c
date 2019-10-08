//
// Created by Piasy on 2019/9/28.
//

#include <stdio.h>
#include <unistd.h>

#include "libkmpp_api.h"

int main() {
    libkmpp_ExportedSymbols* lib = libkmpp_symbols();
    libkmpp_kref_com_piasy_kmpp_data_Person piasy = lib->kotlin.root.com.piasy.kmpp.data.Person.Person_("Piasy", 26);
    libkmpp_kref_com_piasy_kmpp_KmppBootstrap kmpp = lib->kotlin.root.com.piasy.kmpp.KmppBootstrap.KmppBootstrap();
    const char* text = lib->kotlin.root.com.piasy.kmpp.sayHello(kmpp, piasy);

    printf("%s\n", text);

    lib->DisposeString(text);
    lib->DisposeStablePointer(kmpp.pinned);

    usleep(1000 * 1000);

    return 0;
}
