//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXDragEndpointRequestSatisfierDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableSet, NSString, NSXPCListener;

@interface AXDragEndpointVendor : NSObject <NSXPCListenerDelegate, AXDragEndpointRequestSatisfierDelegate>
{
    NSXPCListener *_listener;
    NSMutableSet *_activeConnections;
    id <AXDragEndpointVendorDelegate> _delegate;
}

@property(nonatomic) __weak id <AXDragEndpointVendorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endpointRequestSatisfierDidDisconnect:(id)arg1;
- (id)endpointForConnection:(id)arg1 forEndpointRequestSatisfier:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (id)initWithXPCListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

