//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MXExtensionContext.h>

#import "_MXExtensionHostContextType.h"

@class NSString;

@interface _MXExtensionHostContext : _MXExtensionContext <_MXExtensionHostContextType>
{
    id <_MXExtensionURLHandling> _URLHandlingDelegate;
}

@property(nonatomic) __weak id <_MXExtensionURLHandling> URLHandlingDelegate; // @synthesize URLHandlingDelegate=_URLHandlingDelegate;
- (void).cxx_destruct;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

