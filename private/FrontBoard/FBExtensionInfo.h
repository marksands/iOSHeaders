//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBBundleInfo.h>

@class NSString;

@interface FBExtensionInfo : FBBundleInfo
{
    NSString *_typeIdentifier;
    NSString *_extensionIdentifier;
}

@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (void)dealloc;
- (id)_initWithPlugInKitProxy:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;

@end

