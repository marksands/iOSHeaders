//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, NSArray, NSMutableDictionary;

@interface _HDSourceOrderTransactionCache : NSObject
{
    HDProfile *_profile;
    NSArray *_defaultOrderedSources;
    NSMutableDictionary *_orderedSourceIDsByBundleIdentifier;
}

- (void).cxx_destruct;
- (id)_orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)orderedSourceIDsForBundleIdentifier:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)defaultOrderSourcesWithDatabase:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;
- (id)init;

@end

