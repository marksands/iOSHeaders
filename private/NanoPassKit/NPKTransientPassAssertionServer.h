//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NPKTransientPassAssertionConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"

@class BKSApplicationStateMonitor, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface NPKTransientPassAssertionServer : NSObject <NSXPCListenerDelegate, NPKTransientPassAssertionConnectionDelegate>
{
    id <NPKTransientPassAssertionServerDelegate> _delegate;
    NSXPCListener *_xpcListener;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_transientPaymentRequests;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property(retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(retain, nonatomic) NSMutableArray *transientPaymentRequests; // @synthesize transientPaymentRequests=_transientPaymentRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(nonatomic) __weak id <NPKTransientPassAssertionServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateOfTransientPassChangeToUniqueID:(id)arg1;
- (id)_bundleIDForXPCConnection:(id)arg1;
- (void)_updateAppStateMonitor;
- (void)_handleAppStateChangeWithStateDictionary:(id)arg1;
- (_Bool)_queue_serviceModeRequested;
- (id)_queue_transientPassUniqueID;
- (id)_activeTransientPassRequest;
- (void)getTransientPassUniqueID:(id *)arg1 transitServiceModeRequested:(_Bool *)arg2;
- (_Bool)transitServiceModeRequested;
- (id)transientPassUniqueID;
- (void)connection:(id)arg1 hasNewTransientPassRequest:(id)arg2;
- (void)connectionDied:(id)arg1;
- (void)handleNewConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

