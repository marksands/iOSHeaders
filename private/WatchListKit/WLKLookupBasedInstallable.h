//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WLKInstallable.h"

@class NSArray, NSString, NSURL, SSLookupItem;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable>
{
    SSLookupItem *_item;
}

@property(readonly, nonatomic) SSLookupItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *appStoreURL;
- (id)appIconURLForSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSArray *appAdamIDs;
@property(readonly, copy, nonatomic) NSArray *appBundleIDs;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithLookupItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

