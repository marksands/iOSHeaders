//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/NSCopying-Protocol.h>

@class NSString;
@protocol XBSnapshotManifestStore;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    id <XBSnapshotManifestStore> _store;
}

+ (id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2;
@property(readonly, copy, nonatomic) id <XBSnapshotManifestStore> store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 store:(id)arg2;
- (id)init;

@end

