//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class FPXExtensionContext, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface FPXExtensionContextXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    FPXExtensionContext *_context;
    NSXPCInterface *_interface;
    id _exportedObject;
    NSString *_serviceName;
}

@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) FPXExtensionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

