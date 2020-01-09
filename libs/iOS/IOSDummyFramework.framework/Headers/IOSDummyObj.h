//
//  IOSDummyObj.h
//  IOSDummyFramework
//
//  Created by Piasy on 2020/1/9.
//  Copyright © 2020 Piasy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IOSDummyObj : NSObject

- (instancetype)initWithInt:(int)value;

- (int)getValue;

@end

NS_ASSUME_NONNULL_END
