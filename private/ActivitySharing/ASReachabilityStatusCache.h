//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ASReachabilityStatusCache : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (void)addStatusesByDestination:(id)arg1;
- (void)setStatus:(id)arg1 forDestination:(id)arg2;
- (id)statusesForDestinations:(id)arg1;
- (id)statusForDestination:(id)arg1;
- (id)init;

@end

