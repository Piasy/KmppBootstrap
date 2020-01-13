//
//  ViewController.m
//  iOSExample2
//
//  Created by Piasy on 2020/1/9.
//  Copyright © 2020 Piasy. All rights reserved.
//

#import "ViewController.h"

#import "libkmpp_api.h"

#import "IOSDummyFramework/IOSDummyObj.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    libkmpp_ExportedSymbols* lib = libkmpp_symbols();

    libkmpp_kref_com_piasy_kmpp_KmppBootstrap kmpp = lib->kotlin.root.com.piasy.kmpp.KmppBootstrap.KmppBootstrap();

    libkmpp_kref_Dummy_IOSDummyObj dummy =
        lib->kotlin.root.com.piasy.kmpp.KmppBootstrap.Companion.createDummy(
            lib->kotlin.root.com.piasy.kmpp.KmppBootstrap.Companion._instance(),
            42);
    //IOSDummyObj* obj = [[IOSDummyObj alloc] initWithInt:42];
    //dummy.pinned = (__bridge libkmpp_KNativePtr)(obj);
    lib->kotlin.root.com.piasy.kmpp.KmppBootstrap.test(kmpp, dummy);
}


@end
