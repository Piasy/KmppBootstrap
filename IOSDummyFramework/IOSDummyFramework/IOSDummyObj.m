//
//  IOSDummyObj.m
//  IOSDummyFramework
//
//  Created by Piasy on 2020/1/9.
//  Copyright © 2020 Piasy. All rights reserved.
//

#import "IOSDummyObj.h"

@implementation IOSDummyObj {
    int _value;
}

- (instancetype)initWithInt:(int)value {
    self = [super init];
    if (self) {
        _value = value;
    }
    return self;
}

- (int)getValue {
    return _value;
}

@end
