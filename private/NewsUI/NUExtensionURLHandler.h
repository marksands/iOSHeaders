//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUURLHandler-Protocol.h>

@class NSExtensionContext, NSString;

@interface NUExtensionURLHandler : NSObject <NUURLHandler>
{
    NSExtensionContext *_extensionContext;
}

@property(readonly, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void).cxx_destruct;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

