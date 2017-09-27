//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSDictionary, NSMutableArray, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface CAReportingServer : NSObject <NSXPCListenerDelegate>
{
    _Bool _reportingEnabled;
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    NSDictionary *_defaults;
}

@property _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
@property(retain) NSDictionary *defaults; // @synthesize defaults=_defaults;
@property(retain) NSMutableArray *clients; // @synthesize clients=_clients;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (id)CAReportingDefaults;
- (id)findReportingSessionForID:(long long)arg1;
- (void)listenForDefaultsNotification;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListening;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

