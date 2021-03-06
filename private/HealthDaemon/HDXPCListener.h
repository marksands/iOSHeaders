//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSArray, NSMutableDictionary, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_underlyingListener;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_exportedObjectsByClient;
    id <HDXPCListenerDelegate> _delegate;
}

+ (id)serviceListener;
@property(nonatomic) __weak id <HDXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)newClientWithConnection:(id)arg1 error:(id *)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly) NSXPCListenerEndpoint *endpoint;
- (void)invalidate;
- (void)resume;
@property(readonly, copy) NSArray *allClients;
- (void)dealloc;
- (id)initWithUnderlyingListener:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

