//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject
{
    struct __CFArray *_contextProviders;
    CPDistributedMessagingCenter *_center;
}

+ (id)defaultContextManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeContextProvider:(id)arg1;
- (_Bool)addContextProvider:(id)arg1;
- (id)_serverName;
- (void)_stopListening;
- (void)_startListening;
- (void)_shutdownServer;
- (id)_collateContexts;
- (void)startCenter:(id)arg1;
- (void)nothing;
- (void)_collateContextsIntoArray:(id)arg1;
- (id)init;

@end

