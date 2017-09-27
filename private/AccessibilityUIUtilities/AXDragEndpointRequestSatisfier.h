//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXEndpointVending.h"

@class NSString, NSXPCConnection;

@interface AXDragEndpointRequestSatisfier : NSObject <AXEndpointVending>
{
    NSXPCConnection *_connection;
    id <AXDragEndpointRequestSatisfierDelegate> _delegate;
}

@property(nonatomic) __weak id <AXDragEndpointRequestSatisfierDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestDragEndpoint:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

