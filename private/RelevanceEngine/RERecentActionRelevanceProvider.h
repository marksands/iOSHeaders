//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString, RERecentAction;

@interface RERecentActionRelevanceProvider : RERelevanceProvider
{
    NSString *_bundleIdentifier;
    unsigned long long _actionIdentifier;
}

@property(readonly, nonatomic) unsigned long long actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2;
- (id)init;
@property(readonly, nonatomic) RERecentAction *recentAction;

@end

