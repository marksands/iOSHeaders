//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGDSuggestManagerAllProtocol.h"

@class SGDaemonConnection;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol>
{
    SGDaemonConnection *_connection;
    _Bool _queuesRequestsIfBusy;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(_Bool)arg2;

@end

