//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPDomainManager : NSObject
{
}

+ (id)defaultManager;
+ (void)initialize;
- (void)notifyIndexer;
- (_Bool)siriSuggestionsEnabled;
- (void)applicationWasUninstalled:(id)arg1;
- (void)registerApplication:(id)arg1 withCategories:(id)arg2;
- (id)getBundleIdForDomainNumber:(id)arg1;
- (void)_removeAllDomainsForDisplayIdentifier:(id)arg1;

@end

