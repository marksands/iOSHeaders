//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FutureValue;

@interface PARFuture : NSObject
{
    FutureValue *_futureValue;
}

- (void).cxx_destruct;
- (id)then:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)waitForever;
- (id)wait:(unsigned long long)arg1;
- (id)initFromPromise:(id)arg1;
- (id)initFulfilled:(id)arg1;

@end

