//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTaskWorkRead : __NSCFURLLocalStreamTaskWork
{
    unsigned long long _minBytes;
    unsigned long long _maxBytes;
    CDUnknownBlockType _completion;
    NSData *_readData;
    _Bool _eof;
}

- (void)dealloc;

@end

