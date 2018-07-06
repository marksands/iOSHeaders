//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableSet, NSSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying>
{
    unsigned long long _options;
    NSMutableSet *_accessibilityAssertions;
    long long _journalType;
    long long _cacheScope;
}

@property(nonatomic) long long cacheScope; // @synthesize cacheScope=_cacheScope;
@property(nonatomic) long long journalType; // @synthesize journalType=_journalType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSSet *accessibilityAssertions;
- (void)_applyOptions:(unsigned long long)arg1 enable:(_Bool)arg2;
@property(nonatomic) _Bool highPriority;
@property(nonatomic) _Bool requiresSecureDelete;
@property(nonatomic) _Bool requiresNewDatabaseConnection;
@property(nonatomic) _Bool skipJournalMerge;
- (_Bool)isCompatibleWithContext:(id)arg1 error:(id *)arg2;
- (void)addAccessibilityAssertion:(id)arg1;

@end

