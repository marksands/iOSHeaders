//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/_NSBundleODRDataCommon.h>

#import "NSXPCListenerDelegate.h"
#import "_NSBundleResourceRequestAppExtensionProtocol.h"

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForExtensions : _NSBundleODRDataCommon <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol>
{
    NSXPCConnection *_connection;
}

+ (id)dataForBundle:(id)arg1 createIfRequired:(_Bool)arg2;
- (void)hostApplicationAssetPacksBecameUnavailable:(id)arg1;
- (void)hostApplicationAssetPacksBecameAvailable:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)accessSandboxExtension:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

