//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CADXPCInvocationContextHolder : NSObject
{
    NSMutableArray *_retainedArguments;
    id _proxy;
}

@property(readonly, nonatomic) id proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)clear;
- (void)retainProxy:(id)arg1 andArgumentsInInvocation:(id)arg2;

@end

