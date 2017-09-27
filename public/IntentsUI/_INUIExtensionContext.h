//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "_INUIExtensionContextVending.h"

@class NSString, _INUIExtensionContextState;

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending>
{
    _INUIExtensionContextState *_currentExtensionContextState;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
- (void)_requestHandlingOfIntent:(id)arg1;
- (id)interfaceParametersDescription;
- (struct CGSize)_bestAllowedSizeForAllowedSizesDictionary:(id)arg1;
- (struct CGSize)hostedViewMaximumAllowedSize;
- (struct CGSize)hostedViewMinimumAllowedSize;
- (void)setExtensionContextState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_errorHandlingHostProxy;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

