//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

@interface HMDApplicationInfo : HMFObject
{
    _Bool _spiClient;
    NSString *_teamIdentifier;
    NSString *_bundleIdentifier;
    NSString *_companionAppBundleIdentifier;
    NSMutableDictionary *_activeProcesses;
}

@property(readonly, nonatomic) NSMutableDictionary *activeProcesses; // @synthesize activeProcesses=_activeProcesses;
@property(readonly, copy, nonatomic) NSString *companionAppBundleIdentifier; // @synthesize companionAppBundleIdentifier=_companionAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(readonly, nonatomic, getter=isSPIClient) _Bool spiClient; // @synthesize spiClient=_spiClient;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFrontMostApp) _Bool frontMostApp;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 companionAppBundleIdentifier:(id)arg3 spiClient:(_Bool)arg4;
- (id)init;

@end

